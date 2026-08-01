#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ESP32Servo.h>

// OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Inputs
#define POT1 34
#define POT2 35

// LEDs
#define GREEN_LED 18
#define YELLOW_LED 19
#define RED_LED 23
#define FAN_LED 25

// Outputs
#define BUZZER 26
#define SERVO_PIN 27

Servo myServo;

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

    pinMode(GREEN_LED, OUTPUT);
      pinMode(YELLOW_LED, OUTPUT);
        pinMode(RED_LED, OUTPUT);
          pinMode(FAN_LED, OUTPUT);
            pinMode(BUZZER, OUTPUT);

              myServo.attach(SERVO_PIN);
                myServo.write(0);

                  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
                      Serial.println("OLED failed");
                          while (true);
                            }

                              display.clearDisplay();
                              display.setTextSize(1);
                              display.setTextColor(SSD1306_WHITE);
                              display.setCursor(0,0);
                              display.println("OLED Working");
                              display.display();
                              delay(2000);
                              }

                              void loop() {

                                int gas1 = analogRead(POT1);
                                  int gas2 = analogRead(POT2);

                                    int gasValue = max(gas1, gas2);

                                      Serial.print("CO2 Sim : ");
                                      Serial.println(gas1);

                                      Serial.print("PM2.5   : ");
                                      Serial.println(gas2);

                                      Serial.print("STATUS  : ");

                                      if(gasValue < 1000)
                                       Serial.println("GOOD");
                                       else if(gasValue < 2000)
                                        Serial.println("MODERATE");
                                        else
                                         Serial.println("DANGER");

display.clearDisplay();

display.setTextSize(1);
display.setTextColor(WHITE);


// Title
display.setCursor(15,0);
display.println("SMART AIR SYS");


// Values
display.setCursor(0,15);
display.print("CO2 : ");
display.println(gas1);


display.setCursor(0,25);
display.print("PM  : ");
display.println(gas2);


// Status
display.setCursor(0,38);
display.print("STATUS:");

display.setCursor(50,38);

if (gasValue < 1000)
{
  display.println("GOOD");
  }
  else if (gasValue < 2000)
  {
    display.println("MODERATE");
    }
    else
    {
      display.println("DANGER");
      }


      // Fan status
      display.setCursor(0,52);
      display.print("FAN : ");

      if(gasValue >= 2000)
      {
        display.println("ON");
        }
        else
        {
          display.println("OFF");
          }


         // display.display()

                                                  if (gasValue < 1000) {
                                                      // SAFE
                                                          digitalWrite(GREEN_LED, HIGH);
                                                              digitalWrite(YELLOW_LED, LOW);
                                                                  digitalWrite(RED_LED, LOW);
                                                                      digitalWrite(FAN_LED, LOW);
                                                                          digitalWrite(BUZZER, LOW);
                                                                              myServo.write(0);

                                                                                  //display.println("SAFE");

                                                                                    } else if (gasValue < 2000) {
                                                                                        // WARNING
                                                                                            digitalWrite(GREEN_LED, LOW);
                                                                                                digitalWrite(YELLOW_LED, HIGH);
                                                                                                    digitalWrite(RED_LED, LOW);
                                                                                                        digitalWrite(FAN_LED, LOW);
                                                                                                            digitalWrite(BUZZER, LOW);
                                                                                                                myServo.write(0);

                                                                                                                    //display.println("WARNING");

                                                                                                                      } else {
                                                                                                                          // DANGER
                                                                                                                              digitalWrite(GREEN_LED, LOW);
                                                                                                                                  digitalWrite(YELLOW_LED, LOW);
                                                                                                                                      digitalWrite(RED_LED, HIGH);
                                                                                                                                          digitalWrite(FAN_LED, HIGH);   // fan ON
                                                                                                                                              digitalWrite(BUZZER, HIGH);
                                                                                                                                                  myServo.write(90);

                                                                                                                                                      //display.println("DANGER!");
                                                                                                                                                        }

                                                                                                                                                          display.display();
                                                                                                                                                            delay(500);
                                                                                                                                                            }

# 🌿 Smart Classroom Air Quality Management System (SCAQMS)

## 🚨 Automated Indoor Air Quality Monitoring and Ventilation System using ESP32

![Project Banner](https://via.placeholder.com/1200x400)

---

# 📌 Overview

The **Smart Classroom Air Quality Management System (SCAQMS)** is an IoT-based embedded system designed to monitor indoor air quality and automatically improve ventilation conditions.

The system detects changes in air pollution levels using simulated environmental parameters and takes automatic corrective actions:

- 🌀 Activates ventilation fan
- 🪟 Opens window automatically using servo motor
- 🔊 Generates alerts during unsafe conditions
- 💡 Displays real-time air quality status
- 📟 Provides live monitoring through OLED display

The prototype is developed using **ESP32 and simulated sensors in Wokwi**, representing a real-world smart building automation solution.

---

# 🌍 Problem Statement

## "Poor Indoor Air Quality in Classrooms Reduces Student Health, Comfort and Learning Performance"

Modern classrooms often have:

- 40+ students in enclosed spaces
- Limited ventilation
- Continuous AC usage
- Closed windows

During long sessions:

- CO₂ concentration increases due to human breathing
- Dust particles and pollutants accumulate
- Poor ventilation causes fatigue, reduced attention and discomfort

The biggest problem is:

> "Indoor air quality problems remain unnoticed until students experience reduced concentration or discomfort."

---

# 📊 Problem Impact & Statistics

## Indoor Air Quality Concerns

- Humans spend approximately **90% of their time indoors**, making indoor air quality a major health factor.

- Poor ventilation can increase indoor CO₂ levels significantly, causing:
  - Reduced concentration
  - Sleepiness
  - Headaches
  - Reduced productivity

- Studies show that increased CO₂ concentration in classrooms is associated with reduced cognitive performance.

---

# 🏫 Real-Life Example

### Scenario:

A classroom with:

- 40 students
- Closed windows
- AC running continuously

After several hours:
Fresh Air ↓
CO₂ Level ↑
Student Concentration ↓
Fatigue ↑

Currently, teachers usually identify this problem manually.

There is no continuous automated response system.

---

# ❌ Existing Solutions and Limitations

## 1. Manual Ventilation

Example:
- Opening windows when students feel uncomfortable

### Limitations:
- Depends on human observation
- Problem is detected late
- No continuous monitoring


---

## 2. Commercial Air Quality Monitors

Examples:
- Indoor air quality meters

### Limitations:

- Only provide monitoring
- No automatic action
- Expensive for large-scale classroom deployment


---

## 3. Traditional Fans and AC Systems

### Limitations:

- Operate without considering actual air quality
- Waste energy
- Cannot adapt automatically

---

# 💡 Proposed Solution

## Smart Air Quality Monitoring + Automatic Response System

Our system follows:
Sense → Analyze → Decide → Act


The ESP32 continuously monitors environmental parameters and automatically improves classroom conditions.

---

# ⭐ Unique Features

## 1. Beyond Monitoring: Automatic Correction

Unlike traditional monitors:

The system does not only display pollution levels.

It automatically:

✅ Turns ON ventilation fan  
✅ Opens window through servo mechanism  
✅ Activates warning indicators


---

## 2. Multi-Level Air Quality Classification

The system categorizes conditions into:

| Level | Status | Action |
|-|-|-|
| Safe | 🟢 GOOD | Normal operation |
| Moderate | 🟡 WARNING | Increased ventilation |
| Poor | 🔴 DANGER | Fan + Window + Alert |

---

## 3. Intelligent Response Mechanism

The system creates an automated feedback loop:
Poor Air Quality Detected
    ↓
ESP32 Processing
    ↓
Fan Activated
    ↓
Window Opens
    ↓
Fresh Air Circulation Improves
# ⚙️ System Architecture
          INPUT LAYER

  Potentiometer 1
   (CO₂ Simulation)

  Potentiometer 2
   (PM2.5 Simulation)

          |
          |
          ↓


      ESP32 Controller

 Data Processing + Decision Logic

          |
          |
          ↓


         OUTPUT LAYER


 OLED Display
      |
 Status Information


 LED Indicators
      |
Green / Yellow / Red
      |
    Buzzer
      |
 Warning Alert
      |
 Servo Motor
      |
Automatic Window Control
      |
 Fan Indicator LED
      |
Ventilation Control


---

# 🔄 Working Workflow

## Step 1: Data Collection

Two potentiometers simulate:

- CO₂ concentration
- PM2.5 pollution level


---

## Step 2: Data Processing

ESP32 reads analog values:
ADC Range:
0 - 4095
Values are converted into air quality levels.

---

## Step 3: Decision Making

Logic:
LOW Pollution
↓
GOOD
↓
Green LED ON


Medium Pollution
↓
WARNING
↓
Yellow LED 

High Pollution
↓
DANGER
↓
Red LED
Fan ON
Window Opens
Buzzer Alert

---

# 🔌 Hardware Components

| Component | Purpose |
|-|-|
| ESP32 DevKit | Main controller |
| Potentiometer ×2 | CO₂ and PM2.5 simulation |
| OLED SSD1306 | Real-time display |
| Servo Motor | Automatic window control |
| LED ×4 | Status + Fan indicator |
| Buzzer | Emergency alert |
| Resistors | LED protection |
| Breadboard | Circuit assembly |

---

# 📌 Pin Configuration

| Component | ESP32 GPIO |
|-|-|
| CO₂ Potentiometer | GPIO 34 |
| PM2.5 Potentiometer | GPIO 35 |
| Green LED | GPIO 18 |
| Yellow LED | GPIO 19 |
| Red LED | GPIO 23 |
| Fan LED | GPIO 25 |
| Buzzer | GPIO 26 |
| Servo Signal | GPIO 27 |
| OLED SDA | GPIO 21 |
| OLED SCL | GPIO 22 |

---

# 🛠️ Technology Stack

## Hardware

- ESP32
- Servo Motor
- OLED SSD1306
- LEDs
- Buzzer


## Software

- Arduino Embedded C/C++
- Wokwi Simulation Platform


## Libraries
Adafruit GFX
Adafruit SSD1306
ESP32Servo
Wire Library


---

# 💰 Estimated Cost

| Component | Approx Cost |
|-|-:|
| ESP32 | ₹400 |
| OLED Display | ₹150 |
| Servo Motor | ₹100 |
| LEDs + Resistors | ₹50 |
| Buzzer | ₹30 |
| Sensors | ₹300 |
| Miscellaneous | ₹100 |

## Total Estimated Cost:

### ₹1000 - ₹1200

---

# 🌱 Sustainability Impact

This project supports:

## Energy Efficiency

Automatic ventilation prevents unnecessary fan/AC usage.

## Healthier Indoor Environment

Maintains better classroom air conditions.

## Smart Building Integration

Can be extended to:

- Schools
- Offices
- Hospitals
- Smart homes

---

# 🚀 Future Enhancements

## IoT Connectivity

- Mobile application
- Cloud dashboard
- Remote monitoring


## Real Sensors

Replace simulation with:

- NDIR CO₂ sensor
- PM2.5 sensor
- Temperature and humidity sensor


## AI-Based Prediction

Machine learning model can predict:

- Poor ventilation periods
- Occupancy patterns
- Energy optimization


## Smart HVAC Integration

Automatic control of:

- AC
- Exhaust fans
- Air purifiers

---

# 🧪 Simulation

The prototype is simulated using:

**Wokwi ESP32 Simulator**

Simulation Features:

✔ ESP32 controller  
✔ Analog sensor simulation  
✔ OLED display  
✔ Servo automation  
✔ LED indicators  
✔ Buzzer alerts  


---

# 📷 Demo Flow

1. Increase CO₂ value using potentiometer

↓

2. OLED displays increasing pollution level

↓

3. LED changes:
Green → Yellow → Red

↓

4. Fan activates

↓

5. Servo opens window

↓

6. Buzzer alerts users


---

# 🏆 Innovation Highlight

Most existing systems focus only on:

> "Detecting indoor air quality"

This project focuses on:

> "Detect → Decide → Automatically Improve"

Transforming a passive monitoring device into an active environmental control system.

---

# 👨‍💻 Project Team

Developed as an Embedded IoT Prototype using ESP32.

---

# 📜 License

This project is developed for educational and research purposes.









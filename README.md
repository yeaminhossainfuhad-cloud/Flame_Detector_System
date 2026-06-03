# 🔥 Flame Detector System

## 📌 Project Overview
The Flame Detector System is an IoT-based safety project designed to detect the presence of fire or flames in an environment and provide an immediate alert. The system helps reduce fire-related risks by enabling early detection and warning.

This project was developed as an academic/institute project.

---

## 🚀 Features

- Real-time flame detection
- Fast response to fire incidents
- Audible alarm notification using a buzzer
- LED status indication
- Low-cost and easy-to-build design
- Suitable for homes, offices, laboratories, and small industries

---

## 🛠️ Components Used

- Arduino Uno
- Flame Sensor Module
- Buzzer
- LED
- Breadboard
- Jumper Wires
- USB Cable / Power Supply

---

## 🔌 Circuit Connections

| Component | Arduino Pin |
|------------|------------|
| Flame Sensor (DO) | Digital Pin 6 |
| Buzzer 1 | Digital Pin 2 |
| Buzzer 2 | Digital Pin 4 |
| LED | Digital Pin 13 |
| VCC | 5V |
| GND | GND |

---

## ⚙️ Working Principle

1. The flame sensor continuously monitors the surrounding environment.
2. When a flame is detected, the sensor sends a signal to the Arduino.
3. Arduino processes the signal and activates:
   - Buzzer alarm
   - LED indicator
4. The alarm remains active until the flame is no longer detected.

---

## 📂 Project Structure

```
Flame_Detector_System/
│
├── Arduino_Code/
│   └── Flame_Detector.ino
│
├── Presentation/
│   └── MICROCONTROLLER.pptx
│
└── README.md
```

---

## 💻 Installation & Usage

1. Clone the repository:

```bash
git clone https://github.com/yeaminhossainfuhad-cloud/Flame_Detector_System.git
```

2. Open the Arduino IDE.
3. Load the `Flame_Detector.ino` file.
4. Connect the Arduino board.
5. Upload the code.
6. Test the system by bringing a flame source near the sensor.

---

## 🎯 Applications

- Fire safety monitoring
- Home automation systems
- Industrial safety systems
- Laboratories
- Warehouses

---

## 🔮 Future Improvements

- SMS or mobile notification system
- Wi-Fi/IoT integration
- Fire suppression system integration
- Cloud monitoring dashboard

---

## 👨‍💻 Developed By

**Md. Yeamin Hossain Fuhad**

- Diploma in Engineering in Computer Science & Technology
- BSc in Computer Science & Engineering (Running)

---

## 📄 License

This project is developed for educational and learning purposes.

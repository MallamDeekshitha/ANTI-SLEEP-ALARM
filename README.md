# 🚗 Anti-Sleep Alarm with Alcohol Detection and Accident Prevention

This embedded system project is designed to enhance road safety by detecting drowsiness, alcohol presence, and preventing accidents using sensors and alert systems.
## 🔧 Features

- 🛑 *Alcohol Detection*: Detects alcohol in the driver's breath using the MQ3 sensor and activates a buzzer.
- 😴 *Drowsiness Detection*: Uses an IR eye blink sensor to monitor the driver’s eyes and detect signs of sleepiness.
- 🚨 *Accident Prevention*: Optional crash or tilt sensors to detect accidents and trigger immediate alerts.
- 💡 *Real-Time Alerts*: Provides instant alerts via buzzer and LCD when unsafe conditions are detected.
- 🔌 *Low Power Consumption*: Efficient use of components to ensure low power usage, ideal for in-vehicle applications.

## 🧰 Components Used

- Arduino Uno / Nano
- MQ3 Alcohol Sensor
- IR Eye Blink Sensor (or IR Obstacle Sensor)
- Buzzer
- LCD Display (16x2 with I2C module)
- Optional: Tilt Sensor / Vibration Sensor
- Jumper wires, Breadboard / PCB
- Power Supply or Battery Pack

## 🧾 Circuit Connections

| Component              | Arduino Pin     | Notes                               |
|------------------------|-----------------|--------------------------------------|
| MQ3 Alcohol Sensor     | A0              | Analog output to detect alcohol      |
| IR Eye Blink Sensor    | D2              | Digital signal for drowsiness check  |
| Buzzer                 | D8              | Beeps on detection                   |
| LCD I2C (SDA, SCL)     | A4 (SDA), A5 (SCL) | I2C LCD for displaying alerts     |
| Tilt Sensor (Optional) | D3              | Triggers alert on vibration/tilt     |
| VCC (All modules)      | 5V              | Power supply                         |
| GND (All modules)      | GND             | Common ground                        |


## ⚙️ Working Principle

1. *MQ3 Sensor* checks the driver's breath for alcohol content.
2. *IR Sensor* monitors eyelid movement and detects if the driver is drowsy or sleeping.
3. *Buzzer and LCD* are activated to alert the driver if any unsafe condition is detected.
4. *(Optional)* Tilt sensor triggers alert in case of an accident.

## 🗂️ Project Structure

anti-sleep-alarm/ ├── alcohol_detection.ino ├── drowsiness_detection.ino ├── combined_system.ino ├── README.md └── images/ └── circuit_diagram.png

## 🛠️ How to Use

1. Clone or download the repository.
2. Connect the sensors to the Arduino board as per the circuit diagram or the table above.
3. Upload combined_system.ino to the Arduino using the Arduino IDE.
4. Power the system and test with alcohol and simulate drowsiness.
5. Observe the buzzer alert and LCD output.

## 📸 Demo

> (You can add photos or a demo video link here)

## 📚 Applications

- In-vehicle driver safety systems
- Commercial transportation safety monitoring
- Student and academic embedded system projects
- Integration with Iot dashboards

## 📌 Future Improvements

- GSM/GPS module for sending SMS alerts on alcohol/drowsiness/accident detection
- Vehicle engine lock in case of high alcohol detection
- Real-time monitoring using mobile app or cloud dashboard
- Add camera based drowsiness detection (AI based)
- Data logging on SD card for event tracking

## 🧑‍💻 Author

*Name*:Mallam Deekshitha  
*Branch*:Electrical and Electronics Engineering |
*Focus Areas*:Embedded Systems,Automotive safety,Iot.

✨ Contributions, suggestions, and improvements are welcome!

---

⭐ If you like this project, feel free to *star* the repo!

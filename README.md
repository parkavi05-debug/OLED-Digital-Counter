# OLED-Digital-Counter
# Digital Counter System using Arduino and OLED Display

## Project Overview
This project implements a simple digital counter system using an Arduino microcontroller.  
Whenever the push button is pressed, the counter value increments by one, a buzzer provides audio feedback, and the updated count is displayed on an OLED screen in real time.

The project demonstrates the use of display interfacing, button input handling, buzzer control, and counter logic in embedded systems.

---

## Objective
To design an Arduino-based counter system that increments the count value on each button press and displays the result on an OLED display with buzzer indication.

---

## Components Required
- Arduino Uno / Nano  
- OLED Display (SSD1306 128x64 I2C)  
- Push Button  
- Buzzer  
- Breadboard  
- Jumper Wires  
- USB Cable  

---

## Working Principle
The push button acts as an input device.  
Each time the button is pressed:

1. The system detects the button press.  
2. Counter value increases by 1.  
3. The buzzer generates a short beep sound.  
4. OLED display updates and shows the new count value.  

The process repeats continuously for every button press.

---

## Circuit Connections

| Component | Arduino Pin |
|------------|-------------|
| Push Button | Pin 2 |
| Buzzer | Pin 8 |
| OLED SDA | A4 |
| OLED SCL | A5 |
| VCC | 5V |
| GND | GND |

*(For Arduino Uno I2C communication uses A4 → SDA and A5 → SCL)*

---

## Program Logic

The program performs the following operations:

1. Initialize OLED display using I2C communication.  
2. Configure button pin as input using internal pull-up resistor.  
3. Configure buzzer pin as output.  
4. Continuously monitor button state.  
5. Detect button press when signal changes from HIGH to LOW.  
6. Increase counter value by 1.  
7. Activate buzzer for audio feedback.  
8. Update OLED display with new counter value.  
9. Apply delay for button debounce.

---

## Code Explanation

### Library Inclusion

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
```

These libraries are used for OLED display communication and graphics handling.

---

### Pin Definitions

```cpp
const int buttonPin = 2;
const int buzzerPin = 8;
```

Defines input and output pins.

---

### Counter Variable

```cpp
int count = 0;
bool lastButtonState = HIGH;
```

Stores counter value and previous button state.

---

### Setup Function

```cpp
void setup()
```

Initializes display, button, and buzzer.

---

### Button Press Detection

```cpp
if (lastButtonState == HIGH && buttonState == LOW)
```

Detects when the push button is pressed.

---

### Counter Increment

```cpp
count++;
```

Increases count value by one.

---

### Buzzer Notification

```cpp
digitalWrite(buzzerPin, HIGH);
delay(100);
digitalWrite(buzzerPin, LOW);
```

Generates beep sound after button press.

---

### Display Update Function

```cpp
void updateDisplay()
```

Updates OLED display and shows current count value.

---

## Expected Output

- Initial display shows:

```text
Counter System
Count : 0
```

- After every button press:
  - Counter increases by 1  
  - Buzzer produces beep sound  
  - OLED updates count value instantly  

Example:

```text
Counter System
Count : 5
```

---

## Applications
- Digital event counter  
- Visitor counting systems  
- Attendance counting systems  
- Industrial production counters  
- Embedded systems learning projects  

---

## Technologies Used
- Arduino Programming  
- Embedded C/C++  
- I2C Communication  
- OLED Display Interfacing  
- Microcontroller Programming  

---
##OUTPUT
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/e9319b5d-ffa0-4ae5-802b-f87ff9a05e2f" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/4b8af852-6f91-41dd-b039-05b1f30779bd" />


## Future Improvements
- Add reset button  
- Store count in EEPROM memory  
- Wireless data transmission using WiFi/Bluetooth  
- Mobile app monitoring using IoT  

---

## Author
Arduino based Digital Counter System project developed for learning embedded systems, hardware interfacing, and real-time display control.

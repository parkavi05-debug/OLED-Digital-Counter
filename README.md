# OLED-Digital-Counter
# Digital Counter System using Arduino and OLED Display

## Project Overview
This project implements a simple digital counter system using an Arduino microcontroller.  
Whenever the push button is pressed, the counter value increments by one, a buzzer provides audio feedback, and the updated count is displayed on an OLED screen in real time.

The project demonstrates the use of display interfacing, button input handling, buzzer control, and counter logic in embedded systems.

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

# 2️⃣ Digital Visitor Counter

## Objective
Create a people counting system using two buttons.

## Components Used
- Arduino UNO  
- OLED Display  
- 2 Push Buttons  
- Breadboard  
- Jumper Wires  

## Features
✔ Button 1 → Person Entered  
✔ Button 2 → Person Left  
✔ OLED shows visitor count  
✔ Displays "Room Full" when count exceeds 20  

## Circuit Diagram
(Add circuit image here)

## Project 2 Digital visitor counter
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/dbd7d35a-8f86-453b-b0ca-482a887f845d" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/f56003b0-1124-47ee-b532-5e4908aba90b" />

## Learning Outcome
- Counter logic  
- Conditional statements  
- Multi-button input handling  

---

# 3️⃣ OLED Menu System

## Objective
Create a menu navigation system using buttons.

## Components Used
- Arduino UNO  
- OLED Display  
- Push Buttons  
- LED  
- Buzzer  

## Menu

```text
> LED Control
  Buzzer Test
  About
```

## Features
✔ Cursor navigation  
✔ LED ON/OFF control  
✔ Buzzer test option  
✔ About screen display  

## Circuit Diagram
(Add circuit image here)

## Project 3 OLED menue system
<img width="1200" height="1600" alt="image" src="https://github.com/user-attachments/assets/1b2051c4-6863-4be7-9d4f-efb70c654246" />
<img width="1200" height="1600" alt="image" src="https://github.com/user-attachments/assets/733cd463-666f-4198-b539-b14bcf2d0cab" />

## Learning Outcome
- Menu navigation  
- Cursor movement  
- Multiple screen handling  

---

# 4️⃣ Digital Stopwatch

## Objective
Create a stopwatch using millis() function.

## Components Used
- Arduino UNO  
- OLED Display  
- 2 Push Buttons  

## Features
✔ Start button  
✔ Stop button  
✔ Stopwatch display  
✔ Reset functionality  

## OLED Output

```text
Stopwatch
12.54 sec
```

## Circuit Diagram
(Add circuit image here)

## Project 4 Digital stowatch
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/e799e0e8-b112-4902-9ee1-d5c782a3b2f2" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/1f4e3039-3072-4907-99fe-7930aebedf15" />

## Learning Outcome
- millis() timer  
- Time calculations  
- State management  

---

# 5️⃣ Reaction Time Game 2.0

## Objective
Measure user reaction speed after random delay.

## Components Used
- Arduino UNO  
- OLED Display  
- Push Button  
- Buzzer  

## Flow

```text
Get Ready...
(wait random delay)
PRESS NOW!
```

## Performance Analysis

- <250 ms → Excellent  
- 250–500 ms → Good  
- >500 ms → Needs Practice  

## Circuit Diagram
(Add circuit image here)

## Project 5 Reaction time game 2.0_
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/53309a93-8ac0-420c-92c9-4317fb5ec912" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/08e108f1-a879-471d-91d3-df3a89389eb6" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/25e6733d-27fb-488f-8c53-6621764c4355" />


## Learning Outcome
- Random delay generation  
- Reaction time calculation  
- User interaction systems  

---

# 6️⃣ Password Protected OLED System

## Objective
Create a password-based security system.

## Example Password

```text
Button1 → Button1 → Button2 → Button1
```

## Components Used
- Arduino UNO  
- OLED Display  
- Push Buttons  
- Buzzer  

## Features
✔ Password input system  
✔ Access Granted / Denied  
✔ Buzzer feedback  

## Circuit Diagram
(Add circuit image here)

## Project 6 Password protected OLED system
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/85003c63-85b2-4f31-9dbc-c4b8c76cc13c" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/85c7c3a5-ed77-4a91-b74e-fad2b39f7d7c" />

## Learning Outcome
- Security logic  
- Pattern recognition  
- Conditional programming  

---

# 7️⃣ Smart Dashboard (Challenge Project)

## Objective
Create an integrated smart dashboard.

## OLED Display

```text
eARgle Labs
Counter : 10
Status : Active
Time : 25 sec
```

## Features
✔ OLED Display  
✔ Counter  
✔ Button Input  
✔ Buzzer Feedback  
✔ Timer using millis()  

## Components Used
- Arduino UNO  
- OLED Display  
- Buttons  
- Buzzer  
- LED  

## Circuit Diagram
(Add circuit image here)

## Project 7 Day_end evaluation_
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/91c20e2f-607c-45c4-be8c-9d6e3f9b3fd9" />

## Learning Outcome
- Combining multiple modules  
- Embedded UI design  
- Timer-based applications  
- Interactive system development  

---

# 📂 Folder Structure

```text
Day02/
│── OLED_Counter.ino
│── Visitor_Counter.ino
│── OLED_Menu.ino
│── Stopwatch.ino
│── Reaction_Game.ino
│── Password_System.ino
│── Smart_Dashboard.ino
│── README.md
│
└── images/
    ├── oled_counter.jpg
    ├── visitor_counter.jpg
    ├── oled_menu.jpg
    ├── stopwatch.jpg
    ├── reaction_game.jpg
    ├── password_system.jpg
    └── smart_dashboard.jpg
```

---

# 🛠 Technologies Used

- Arduino IDE  
- Embedded C/C++  
- SSD1306 OLED Library  
- Adafruit GFX Library  

---

# 🎯 Overall Learning Outcomes

By completing these projects, I learned:

- OLED Display interfacing  
- Digital Input/Output handling  
- Push button logic  
- Buzzer integration  
- Timer programming using millis()  
- Menu system design  
- Interactive embedded system development  
- Real-time user feedback systems  

---

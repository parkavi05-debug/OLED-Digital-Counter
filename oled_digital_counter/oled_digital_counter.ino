#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int buttonPin = 2;
const int buzzerPin = 8;

int count = 0;
bool lastButtonState = HIGH;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
  display.display();

  updateDisplay();
}

void loop()
{
  bool buttonState = digitalRead(buttonPin);

  // Detect button press
  if (lastButtonState == HIGH && buttonState == LOW)
  {
    count++;

    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);

    updateDisplay();

    delay(200);   // Debounce
  }

  lastButtonState = buttonState;
}

void updateDisplay()
{
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(0,0);
  display.println("Counter System");

  display.setCursor(0,25);
  display.print("Count : ");
  display.print(count);

  display.display();
}
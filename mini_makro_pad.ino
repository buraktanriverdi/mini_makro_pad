#include <Keyboard.h>

const int buttonPin1 = 2; // Button 1
const int buttonPin2 = 3; // Button 2
const int buttonPin3 = 4; // Button 3

int buttonState1 = LOW;
int buttonState2 = LOW;
int buttonState3 = LOW;

int previousState1 = LOW;
int previousState2 = LOW;
int previousState3 = LOW;

#define KP_0  0xb0
#define KP_1  0xb1
#define KP_2  0xb2
#define KP_3  0xb3
#define KP_4  0xb4
#define KP_5  0xb5
#define KP_6  0xb6
#define KP_7  0xb7
#define KP_8  0xb8
#define KP_9  0xb9

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  
  Keyboard.begin();
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  
  // Operation for Button 1
  if (buttonState1 == HIGH && previousState1 == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    Keyboard.releaseAll();
    delay(100);
  }
  previousState1 = buttonState1;
  
  // Operation for Button 2
  if (buttonState2 == HIGH && previousState2 == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    Keyboard.releaseAll();
    delay(100);
  }
  previousState2 = buttonState2;
  
  // Operation for Button 3
  if (buttonState3 == HIGH && previousState3 == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('z');
    Keyboard.releaseAll();
    delay(100);
  }
  previousState3 = buttonState3;
  
}
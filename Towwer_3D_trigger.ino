#include "DigiKeyboard.h"
const int buttonPin = 0;     // the number of the pushbutton pin
const int ledPin =  1;
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {                
  // initialize the digital pin as an output.
  DigiKeyboard.sendKeyStroke(0);
  pinMode(ledPin, OUTPUT); //LED on Model B
  pinMode(buttonPin, INPUT); //button  
}

// the loop routine runs over and over again forever:

//  DigiKeyboard.sendKeyStroke(0);
//  DigiKeyboard.delay(5000);
  
  




void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    DigiKeyboard.sendKeyPress(0,MOD_SHIFT_LEFT);
    //DigiKeyboard.println("Hello Digispark!");
    
    
    
  } else {
    // turn LED off:
    DigiKeyboard.sendKeyStroke(0);
    digitalWrite(ledPin, LOW);
  }
}  
  
  
  




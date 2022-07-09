#include <Keypad.h>//Including Keypad Library

const byte rows = 4; //number of rows of keypad
const byte cols = 4; //number of columns of keypad

char keys[rows][cols] = { //The Keys on the keypad in the same order of keypad is mentioned
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[rows] = {9, 8, 7, 6}; //pin number to which row pins of keypad are connected starting from pin A of keypad
byte colPins[cols] = {5, 4, 3, 2}; //pin number to which column pins of keypad are connected starting from pin 1 of keypad

Keypad custom_keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols); //Creating a instance of Keypad

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char custom_key = custom_keypad.getKey();//When a key is entered, its value is obtained
  
  if (custom_key){
    Serial.println(custom_key);
  }
}

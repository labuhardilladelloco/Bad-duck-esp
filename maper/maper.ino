#include <ArduinoKeyboard_LBDL.h>
#include <SPI.h>

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {


if(Serial.available()>0){
    String s = Serial.readString();

    for(int i=0;i< s.length();i++){
       //Keyboard.press(s[i]);
       if(byte(s[i])!= 195){
          Serial.println(byte(s[i]));
       }  
    }
  }



}

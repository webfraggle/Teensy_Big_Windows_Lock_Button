#include <JC_Button.h>              // https://github.com/JChristensen/JC_Button
//#include "Keyboard.h"

Button btnA(19,100);    // define the buttons


void setup(){
  Serial.begin(115200);
 
   btnA.begin();
   pinMode(18,OUTPUT);
   
   //Keyboard.begin();
}

void loop(){
  
  btnA.read();                   // read the buttons
  
  if (btnA.isPressed())
  {
     digitalWrite(18,HIGH);
  } else {
    digitalWrite(18,LOW);
  }
  if (btnA.wasPressed())
  {
    Serial.println("A");
    //Keyboard.press('a');
    //Keyboard.releaseAll();
    
    //Keyboard.press(MODIFIERKEY_GUI);
    Keyboard.set_modifier(MODIFIERKEY_GUI);
    Keyboard.set_key1(KEY_L);
    Keyboard.send_now();
    //Keyboard.print("l");
    delay(25);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    //Keyboard.release(MODIFIERKEY_GUI);
    
  }
  
}

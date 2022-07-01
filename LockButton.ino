#include <JC_Button.h>              // https://github.com/JChristensen/JC_Button
//#include "Keyboard.h"

Button btnBig(19,100);    // define the buttons
Button btnA(10,100,true,false);
Button btnB(9,100,true,false);
Button btnC(15,100,true,false);
Button btnD(16,100,true,false);

void setup(){
  //Serial.begin(115200);
 
   btnBig.begin();
   btnA.begin();
   btnB.begin();
   btnC.begin();
   btnD.begin();
   pinMode(18,OUTPUT);

   pinMode(9, INPUT_PULLUP);
   
   //Keyboard.begin();
}

void loop(){
  
  btnBig.read();                   // read the buttons
  btnA.read();
  btnB.read();
  btnC.read();
  btnD.read();
  
  if (btnBig.isPressed())
  {
     digitalWrite(18,HIGH);
  } else {
    digitalWrite(18,LOW);
  }
  if (btnBig.wasPressed() || btnA.wasPressed())
  {
    //Serial.println("Lock");
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
  if (btnBig.wasPressed() || btnA.wasPressed())
  {
    //Serial.println("Lock");
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

  if (btnB.wasPressed())
  {
    //Serial.println("B: Teams Mute");
    Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
    Keyboard.set_key1(KEY_M);
    Keyboard.send_now();
    delay(25);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }

  if (btnC.wasPressed())
  {
    //Serial.println("C: Teams Camera");
    Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
    Keyboard.set_key1(KEY_O);
    Keyboard.send_now();
    delay(25);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (btnD.wasPressed())
  {
    //Serial.println("D: End Call");
    Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
    Keyboard.set_key1(KEY_H);
    Keyboard.send_now();
    delay(25);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  
}

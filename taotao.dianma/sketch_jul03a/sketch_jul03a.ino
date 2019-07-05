
// #ifndef Morse_h 
//#include "Arduino.h" 
//A*-  B-***  C-*-*  D-**  E*  F**-*  G--*  H****  I**  J*---  K-*-  L*-**  M--  N-*  O---  P*--*  Q--*-  R*-*  S***  T-  U**-  V***-  W*--  X-**-  Y-*--  Z--**  
#include "Arduino.h"
#include "Morse.h"
#define Morse_h 
Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _dottime=250;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::c_space()
{
 digitalWrite(_pin,LOW);
 delay(_dottime*3);

}

void Morse::w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7);
}






void loop()//a
{
  morse.dot();
  morse.dash(); 
  delay(3000); 
}

void loop()//b
{
  morse.dash(); 
  morse.dot();
  morse.dot();
  morse.dot();
  delay(3000);
}

void loop()//c
{
  morse.dash(); 
  morse.dot();
  morse.dash(); 
  morse.dot();
  delay(3000);
}

void loop()//d
{
  morse.dash();
  morse.dot();
  morse.dot();
  delay(3000);
}

void loop()//e
{
 morse.dot();
 delay(3000);
}

void loop()//f
{
 morse.dot();
 morse.dot();
 morse.dash();
 morse.dot();
 delay(3000);
}

void loop()//g
{
 morse.dash();
 morse.dash();
 morse.dot();
 delay(3000);
}

void loop()//h
{
 morse.dot();
 morse.dot();
 morse.dot();
 morse.dot();
 delay(3000);
}

void loop()//i
{
 morse.dot();
 morse.dot();
 delay(3000);
}

void loop()//j
{
  morse.dot();
  morse.dash();
  morse.dash();
  morse.dash();
  delay(3000);
}

void loop()//k
{
 morse.dash();
 morse.dot();
 morse.dash();
 delay(3000);
}

void loop()//l
{
   morse.dot();
   morse.dash();
   morse.dot();
   morse.dot();
   delay(3000);
}

void loop()//m
{
 morse.dash();
 morse.dash();
 delay(3000);
}

void loop()//n
{
   morse.dash();
   morse.dot();
   delay(3000);
}

void loop()//o
{
  morse.dash(); 
  morse.dash(); 
  morse.dash();
  delay(3000);
}

void loop()//p
{
  morse.dot();
  morse.dash();
  morse.dash(); 
  morse.dot();
  delay(3000);
}

void loop()//q
{
  morse.dash(); 
  morse.dash();
  morse.dot();
  morse.dash();
  delay(3000);
}

void loop()//r
{
   morse.dot();
   morse.dash();
   morse.dot();
   delay(3000);
}

void loop()//s
{
  morse.dot();
  morse.dot();
  morse.dot();
  delay(3000);
}


void loop()//t
{
 morse.dash();
 delay(3000);
}

void loop()//u
{
  morse.dot();
  morse.dot();
  morse.dash();
  delay(3000);
}

void loop()//v
{
   morse.dot();
   morse.dot();
   morse.dot();
   morse.dash(); 
   delay(3000);
}

void loop()//w
{
   morse.dot(); 
   morse.dash();  
   morse.dash(); 
   delay(3000); 
}

void loop()//x
{
  morse.dash();
  morse.dot();
  morse.dot(); 
  morse.dash(); 
  delay(3000); 
}

void loop()//y
{
   morse.dash();
   morse.dot();
   morse.dash(); 
   morse.dash(); 
   delay(3000);  
}

void loop()//z
{
  morse.dash();
  morse.dash();
  morse.dot();
  morse.dot();
  delay(3000); 
}

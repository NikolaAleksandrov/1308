/*
  AnalogReadSerial
  Reads an analog input on pin A3, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A3, and the outside pins to ~3V and ground.
  
  Hardware Required:
  * MSP-EXP430G2 LaunchPad
  * 10-kilohm Potentiometer
  * hook-up wire

  This example code is in the public domain.
*/

#include "Arduino.h"

// the setup routine runs once when you press reset:
int outputValue;
int a[15]={14,36,35,30,10,9,7,29,28,27,15,19};
int r,g,v;
int i;
void setup() {
  // initialize serial communication at 9600 bits per second:
 for(i=0;i<=11;i++){
  pinMode(a[i],OUTPUT);}
  pinMode(26,OUTPUT);
 digitalWrite(26,LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A3:
  analogWrite(a[0],255);
  analogWrite(a[3],255);
  analogWrite(a[6],255);//cherven
  analogWrite(a[9],255);//cherven
 for( i=0;i<=255;i++)
 {
  analogWrite(a[1],i);//zeken
  analogWrite(a[4],i);
  analogWrite(a[7],i);
  analogWrite(a[10],i);
  delay(50);
  
 }
for(i=255;i>=0;i--)
 {
  analogWrite(a[0],i);
  analogWrite(a[3],i);
  analogWrite(a[6],i);
  analogWrite(a[9],i);
  delay(50);
  
 }
 for( i=0;i<=255;i++)
 {
  analogWrite(a[2],i);//zeken
  analogWrite(a[5],i);
  analogWrite(a[8],i);
  analogWrite(a[11],i);
  delay(50);
  
  
 }
for(i=255;i>=0;i--)
 {
  analogWrite(a[1],i);//zeken
  analogWrite(a[4],i);
  analogWrite(a[7],i);
  analogWrite(a[10],i);
  delay(50);
  
 }
 for( i=0;i<=255;i++)
 {
  analogWrite(a[0],i);
  analogWrite(a[3],i);
  analogWrite(a[6],i);
  analogWrite(a[9],i);
  delay(50);
  
 }
 for(i=255;i>=0;i--)
 {
  analogWrite(a[2],i);//zeken
  analogWrite(a[5],i);
  analogWrite(a[8],i);
  analogWrite(a[11],i);
  
  delay(50);
  
 }
 
 delay(100); // delay in between reads for stability
  
}

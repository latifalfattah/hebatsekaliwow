#include <dummy.h>

/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Ardu
  
  
  
  
  
  
  
  inos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
   // put your main code here, to run repeatedly
  if(digitalRead(4)==Low)
  sendSOS();
  delay(3000); // jeda antar pengiriman SOS
  }else{

  }
}

void sendSOS() {
  // Kirim S (...): 3 titik
  for (int i = 0; i < 3; i++) {
    dot();
  }



  // Kirim O (---): 3 garis
  for (int i = 0; i < 3; i++) {
    dash();
  }

  delay(300); // jeda antar huruf

  // Kirim S (...): 3 titik lagi
  for (int i = 0; i < 3; i++) {
    dot();
  }
}

// Fungsi titik: nyala pendek
void dot() {
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
}

// Fungsi garis: nyala lama
void dash() {
  digitalWrite(2, HIGH);
  delay(600);
  digitalWrite(2, LOW);
  delay(200);
}
     //sos
  }else{
    //matikan lampu
 }  
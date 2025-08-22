#include <Arduino.h>
#include <Mouse.h>

#define ENABLEPIN 2

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop()
{
  if (!digitalRead(ENABLEPIN))
    while (true) {
      delay(1000);
    }


  while (true) {




  }















}

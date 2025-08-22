#include <Arduino.h>
#include <Mouse.h>

#define ENABLEPIN 2
#define XPIN A0
#define YPIN A1

int centerX = 571;
int centerY = 547;

int scaleAxis(int reading) {



  return 0;
}


void disableRoutine() {
  int x = 0;
  int y = 0;

  Serial.begin(9600);
  while (true) {
  x = analogRead(XPIN);
  y = analogRead(YPIN);

  Serial.print(x); 
  Serial.print("  ");
  Serial.println(y);

  delay(100);
  }


}

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  int x = 0;
  int y = 0;


  if (!digitalRead(ENABLEPIN))
    disableRoutine();


  Mouse.begin();
  while (true) {
    x = scaleAxis(analogRead(XPIN));
    y = scaleAxis(analogRead(YPIN));


  }


}


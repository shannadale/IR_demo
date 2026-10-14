/*====================================================
                      IR DEMO 
======================================================
Description:
  This code uses an IR sensor to detect objects and
  increments the counter whenever an object is 
  detected. It displays the detection count on the 
  Serial Monitor with a 500 ms delay between counts.

Programmer:
  De Asis, Felicity M.
  Dela Torre, Shanna Dale R.
  Galpo, Rhile L.

Date:
  14 October 2026
----------------------------------------------------*/
//GPIO Pins
const byte IR = 36;

//variables
int input = 0; 
int count = 0;


void setup() {
  //adc pin
  pinMode(IR, INPUT);
  Serial.begin(9600);  //baud rate bps
}

void loop() {
  input = digitalRead(IR);
  if (!input == 1) {
    count++;
    Serial.printf("object detected: %d\n", count);
    delay(500);
  }
}
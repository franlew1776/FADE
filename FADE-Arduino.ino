/*
 Program to fade led using pulse with modulation.
 PWM pin set to pin 9
 
*/

int led = 9;           // LED set to pin 9
int brightness = 0;    // change brightness/dimness
int fadeAmount = 5;    // Set fade amount to go frm bright to dim 

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

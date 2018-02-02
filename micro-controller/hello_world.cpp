// // Performing health check on the arduino motherboard
// // Making the build in LED make light for 2 seconds
//
// #include "Arduino.h"
// // the setup function runs once when you press reset or power the board
// void setup() {
//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
// }
//
// // the loop function runs over and over again forever
// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//   delay(2000);                       // wait for two second
//   digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//   delay(2000);                       // wait for two second
// }


#include <iostream>

int main()
{
  int Zahleingabe;
  int Doppel;

  std::cout << "Bitte geben Sie eine Zahl ein!" << std::endl;
  std::cin >> Zahleingabe;
  Doppel = Zahleingabe * 2;
  std::cout << "Das Doppelte dieser Zahl ist "
      << Doppel << "." << std::endl;
}

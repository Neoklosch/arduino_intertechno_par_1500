#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);

  mySwitch.enableTransmit(2);
}

void loop() {
  // for A1 on -> 21, off -> 20
  // for A2 on -> 16405, off -> 16404
  // for A3 on -> 4117, off -> 4116

  // for B1 on -> 4194325, off -> 4194324
  // for B2 on -> 4210709, off -> 4210708
  // for B3 on -> 4198421, off -> 4198420

  // for C1 on -> 1048597, off -> 1048596
  // for C2 on -> 1064981, off -> 1064980
  // for C3 on -> 1052693, off -> 1052692

  // for D1 on -> 5242901, off -> 5242900
  // for D2 on -> 5259285, off -> 5259284
  // for D3 on -> 5246997, off -> 5246996
  mySwitch.send(4117, 24);
  Serial.println("on");
  delay(1500);  
  mySwitch.send(4116, 24);
  Serial.println("off");
  delay(1500);

  mySwitch.send(21, 24);
  Serial.println("on");
  delay(1500);  
  mySwitch.send(20, 24);
  Serial.println("off");
  delay(1500);
}

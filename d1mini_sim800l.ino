#include <SoftwareSerial.h>
SoftwareSerial sim800l(D1, D2); // RX, TX

void setup() {
 Serial.begin(115200);
 sim800l.begin(4800);

}

void loop(){
 if (sim800l.available())
 Serial.write(sim800l.read());

 if (Serial.available()) {
 while(Serial.available()){
 sim800l.write(Serial.read());
 }
 sim800l.println();
 }
}

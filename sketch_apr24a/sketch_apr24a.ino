#include <Servo.h>
int servoPin = 3;
int count = 1;
Servo servo; // Creating the servo object
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // The servo pin to be attached with the servo objcet before it can be used.
  servo.attach(servoPin);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  Serial.println("Writing to servo : 0");
  servo.write(0);
  delay(1000);

  Serial.println("Writing to servo: 90");
  servo.write(90);
  delay(1000);

  Serial.println("Writing to servo: 180");
  servo.write(180);
  delay(1000);

  //Serial.println("Looping " + count);
  // count++;
}

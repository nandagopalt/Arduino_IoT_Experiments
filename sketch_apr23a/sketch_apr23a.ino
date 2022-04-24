int blue = 2;
int red = 3;
int green = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT); digitalWrite(red, LOW);
  pinMode(green, OUTPUT); digitalWrite(green, LOW);
  pinMode(blue, OUTPUT); digitalWrite(blue, LOW);
}

void traffic() {
  Serial.println("Green LED: ON; GO");
  digitalWrite(green, HIGH);
  delay(5000);
  Serial.println("BLUE LED: ON; WAIT");
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  delay(5000);
  Serial.println("RED LED: ON; STOP");
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  delay(5000);
  digitalWrite(red, LOW);
  Serial.println("ALL LED OFF"); 
}

void loop() {
  // put your main code here, to run repeatedly:
  traffic();
  delay(10000);
}

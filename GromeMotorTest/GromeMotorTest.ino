//int leftP = 48;
//int leftN = 49;
//int rightN = 50;
//int rightP = 51;

int forwardPin = 7;
int reversePin = 6;
int speedPin = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(forwardPin, OUTPUT);
  pinMode(reversePin, OUTPUT);
  pinMode(speedPin, OUTPUT);
  //  pinMode(rightN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(forwardPin, HIGH);
  digitalWrite(reversePin, LOW);
  analogWrite(speedPin, 70);
  delay(3000);

  analogWrite(speedPin, 125);
  delay(3000);

  analogWrite(speedPin, 200);
  delay(3000);

  analogWrite(speedPin, 255);
  delay(3000);

  digitalWrite(forwardPin, LOW);
  digitalWrite(reversePin, LOW);
  delay(500);

  digitalWrite(forwardPin, LOW);
  digitalWrite(reversePin, HIGH);
  analogWrite(speedPin, 70);
  delay(3000);

  analogWrite(speedPin, 125);
  delay(3000);

  analogWrite(speedPin, 200);
  delay(3000);

  analogWrite(speedPin, 255);
  delay(3000);








  //
  //  digitalWrite(rightP, HIGH);
  //  digitalWrite(rightN, LOW);
  //  delay(7000);
  //  digitalWrite(leftP, HIGH);
  //  digitalWrite(leftN, HIGH);
  //  digitalWrite(rightP, HIGH);
  //  digitalWrite(rightN, HIGH);
  //
  //  delay(3000);
  //
  //  digitalWrite(leftP, LOW);
  //  digitalWrite(leftN, HIGH);
  //  digitalWrite(rightP, LOW);
  //  digitalWrite(rightN, HIGH);
  //  delay(7000);
  //  digitalWrite(leftP, HIGH);
  //  digitalWrite(leftN, HIGH);
  //  digitalWrite(rightP, HIGH);
  //  digitalWrite(rightN, HIGH);
  //
  //  delay(3000);


}

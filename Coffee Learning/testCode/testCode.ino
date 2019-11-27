
int redP = 11;
int greenP = 10;
int blueP = 9;
int incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(redP, OUTPUT);
  pinMode(greenP, OUTPUT);
  pinMode(blueP, OUTPUT);


}

void loop() {

  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    if (incomingByte == 'S') {
      digitalWrite(redP, 255);
      digitalWrite(blueP, 0);
      digitalWrite(greenP, 0);

    }
    if (incomingByte == 'C') {
      digitalWrite(redP, 0);
      digitalWrite(blueP, 0);
      digitalWrite(greenP, 255);
    }
  }
}

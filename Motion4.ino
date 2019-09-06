void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Sensor 1
  if (digitalRead(6) == HIGH) {
    Serial.println("Motion Detected in Sensor 1");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);

  if (digitalRead(7) == HIGH) {
    Serial.println("Motion Detected in Sensor 2");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);

  if (digitalRead(8) == HIGH) {
    Serial.println("Motion Detected in Sensor 3");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);

  if (digitalRead(9) == HIGH) {
    Serial.println("Motion Detected in Sensor 4");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);
}


 

void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print(digitalRead(2));
Serial.print(" ");
Serial.println(analogRead(A0));

}

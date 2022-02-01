void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(21, HIGH);   // turn the LED 1 on (HIGH is the voltage level)
   digitalWrite(15, HIGH);   // turn the LED 2 on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(21, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(15, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

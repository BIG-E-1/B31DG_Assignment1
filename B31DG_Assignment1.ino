//Constants
#define button1 22
#define button2 23
#define LED1 21
#define LED2 15

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);

  if(buttonState1 == HIGH){
    digitalWrite(LED1, HIGH);   // turn the LED 1 on (HIGH is the voltage level)
  }
  else{
    digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
  }

  if(buttonState2 == HIGH){
    digitalWrite(LED2, HIGH);   // turn the LED 2 on (HIGH is the voltage level)
  }
  else{
     digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  } 
}

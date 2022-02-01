//Constants
#define SigA_ 15
#define SigB_ 21
#define But1_ 22
#define But2_ 23

int But1_State = 0;         // variable for reading the pushbutton status
int But2_State = 0;         // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  // Initialise inputs and outputs to board.
    pinMode(SigA_, OUTPUT);   //Signal A
    pinMode(SigB_, OUTPUT);   //Signal B
    pinMode(But1_, INPUT);    //Button 1 Input
    pinMode(But2_, INPUT);    //Button 2 Input

  //Set LEDs off
    digitalWrite(SigA_, LOW);
    digitalWrite(SigB_, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // read the state of the pushbutton value:
    But1_State = digitalRead(But1_);
    But2_State = digitalRead(But2_);
         
  if(But1_State == HIGH){
    digitalWrite(SigA_, HIGH);   // turn the LED 1 on (HIGH is the voltage level)
  }
  else{
    digitalWrite(SigA_, LOW);    // turn the LED off by making the voltage LOW
  }

  if(But2_State == HIGH){
    digitalWrite(SigB_, HIGH);   // turn the LED 2 on (HIGH is the voltage level)
  }
  else{
     digitalWrite(SigB_, LOW);    // turn the LED off by making the voltage LOW
  } 
}

//Constants
#define SigA_ 15
#define SigB_ 21
#define But1_ 22
#define But2_ 23

#define A_ 800 //0.8
#define B_ 600 //0.6
#define C_ 17
#define D_ 2000 //2
#define Fiftyus 250 //0.05??

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

    // Enable Stream of Pulses & run as normal
    while  ((But1_State == LOW) &&(But2_State == LOW)){

      // read the state of the pushbutton value:
      But1_State = digitalRead(But1_);
      But2_State = digitalRead(But2_);

      //Conts
      int A_Count = A_ ;            //Resets A (pulse length) to original value

      //Produce B Pulse
      digitalWrite(SigB_, HIGH);    //Sig B high
      delay(Fiftyus);               //B signal length of 50us
      digitalWrite(SigB_, LOW);     //Sig B low

      //Loop for A pulse of C length
      for(int C_Loop = 1; C_Loop <= C_; C_Loop++){ 
        digitalWrite(SigA_, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(A_Count);              //Signal A new defined length
        A_Count = A_Count + Fiftyus; //Increments length of pulse A by 50us.   
        digitalWrite(SigA_, LOW);    //Signal A low
        delay(B_);                   //A signal length of B      
      }
      delay(D_);                     //After sequence of pulse. Length pause D.
    }

    //Disable stream of pulses 
    while  (But1_State == HIGH ){
      But1_State = digitalRead(But1_);
      But2_State = digitalRead(But2_);
      digitalWrite(SigA_, LOW); 
      digitalWrite(SigB_, LOW);
    }

    //Enable stream of pulses & run modified 
    while  ((But1_State == LOW) &&(But2_State == HIGH)){
      But1_State = digitalRead(But1_);
      But2_State = digitalRead(But2_);
      digitalWrite(SigA_, LOW); 
      digitalWrite(SigB_, LOW);             
    }
}

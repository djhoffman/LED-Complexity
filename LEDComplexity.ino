/*
LED Complexity
*/

//constant integer
  const int InternalLED = 13;
  const int ExternalLED = 12;

// A0 has the pushbutton attached to it. Give it a name:
  int pushButton = A0;

// the setup routine runs once when you press reset:
  void setup() {

// initialize serial communication at 9600 bits per second:
  Serial.begin(10000);

// make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(ExternalLED, OUTPUT);
  pinMode(InternalLED, OUTPUT);
  }

// the loop routine runs over and over again forever:
  void loop() {
    
// read the input pin:
  int buttonState = digitalRead(pushButton);
        
// print out the state of the button:
   Serial.println(buttonState);
   
// delay in between reads for stability
   delay(1);

   if(buttonState==1){
    digitalWrite(ExternalLED, HIGH);
    delay(100); //fast blink
    digitalWrite(ExternalLED, LOW);
    delay(100); //fast blink
    digitalWrite(ExternalLED, HIGH);
    delay(500); //pause blink
    
   } else {
    digitalWrite(ExternalLED, LOW);
   }
  }

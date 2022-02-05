const int controlPin2 = 12; // 
const int enablePin = 3;   // 
const int directionSwitchPin = 9;  // connected to the switch for direction
const int onOffSwitchStateSwitchPin = 5; // connected to the switch for turning the motor on and off
const int potPin = A2;  // connected to the potentiometer's output

// create some variables to hold values from your inputs
int onOffSwitchState = 0;  // current state of the On/Off switch
int previousOnOffSwitchState = 0; // previous position of the on/off switch
int directionSwitchState = 0;  // current state of the direction switch
int previousDirectionSwitchState = 0;  // previous state of the direction switch

int motorEnabled = 0; // Turns the motor on/off
int motorSpeed = 0; // speed of the motor
int motorDirection = 1; // current direction of the motor

int mot1;    // variable to read the value from the analog pin 
int mot2;

const int potPin3 = A0;  // analog pin used to connect the potentiometer
const int potPin4 = A1;  // analog pin used to connect the potentiometer

const int controlPin4 = 13; //
const int enablePin2 = 11;   // 
const int directionSwitchPin2 = 8;  // connected to the switch for direction
const int onOffSwitchStateSwitchPin2 = 6; // connected to the switch for turning the motor on and off
const int potPin2 = A3;  // connected to the potentiometer's output

// create some variables to hold values from your inputs
int onOffSwitchState2 = 0;  // current state of the On/Off switch
int previousOnOffSwitchState2 = 0; // previous position of the on/off switch
int directionSwitchState2 = 0;  // current state of the direction switch
int previousDirectionSwitchState2 = 0;  // previous state of the direction switch

int motorEnabled2 = 0; // Turns the motor on/off
int motorSpeed2 = 0; // speed of the motor
int motorDirection2 = 1; // current direction of the motor

void setup(){
  // intialize the inputs and outputs
  pinMode(directionSwitchPin, INPUT);
  pinMode(onOffSwitchStateSwitchPin, INPUT);

  pinMode(controlPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // pull the enable pin LOW to start
  digitalWrite(enablePin, LOW);
   
   // intialize the inputs and outputs
  pinMode(directionSwitchPin2, INPUT);
  pinMode(onOffSwitchStateSwitchPin2, INPUT);

  pinMode(controlPin4, OUTPUT);
  pinMode(enablePin2, OUTPUT);

  // pull the enable pin LOW to start
  digitalWrite(enablePin2, LOW);
    Serial.begin(9600);
}
void loop(){
  // read the value of the on/off switch
  onOffSwitchState = digitalRead(onOffSwitchStateSwitchPin);
  delay(1);
  
  // read the value of the direction switch
  directionSwitchState = digitalRead(directionSwitchPin);
  
  // read the value of the pot and divide by 4 to get 
  // a value that can be used for PWM
  motorSpeed = analogRead(potPin)/4; 

  // if the on/off button changed state since the last loop()
  if(onOffSwitchState != previousOnOffSwitchState){
    // change the value of motorEnabled if pressed
    if(onOffSwitchState == HIGH){
      motorEnabled = !motorEnabled;
    }
  }

  // if the direction button changed state since the last loop()
  if (directionSwitchState != previousDirectionSwitchState) {
    // change the value of motorDirection if pressed 
    if (directionSwitchState == HIGH) {
      motorDirection = !motorDirection;
    }
  }  
  // change the direction the motor spins by talking
  // to the control pins on the H-Bridge
  if (motorDirection == 1) {

    digitalWrite(controlPin2, LOW);
  } 
  else {
    digitalWrite(controlPin2, HIGH);
  }  
  // if the motor is supposed to be on
  if (motorEnabled == 1) {
    // PWM the enable pin to vary the speed
    analogWrite(enablePin, motorSpeed);
  }
  else { // if the motor is not supposed to be on
    //turn the motor off
    analogWrite(enablePin, 0);
  }
  // save the current On/Offswitch state as the previous 
  previousDirectionSwitchState = directionSwitchState;
  // save the current switch state as the previous
  previousOnOffSwitchState = onOffSwitchState;
   
   // read the value of the on/off switch
  onOffSwitchState2 = digitalRead(onOffSwitchStateSwitchPin2);
  delay(1);
  
  // read the value of the direction switch
  directionSwitchState2 = digitalRead(directionSwitchPin2);
  
  // read the value of the pot and divide by 4 to get 
  // a value that can be used for PWM
  motorSpeed2 = analogRead(potPin2)/4; 

  // if the on/off button changed state since the last loop()
  if(onOffSwitchState2 != previousOnOffSwitchState2){
    // change the value of motorEnabled if pressed
    if(onOffSwitchState2 == HIGH){
      motorEnabled2 = !motorEnabled2;
    }
  }
  // if the direction button changed state since the last loop()
  if (directionSwitchState2 != previousDirectionSwitchState2) {
    // change the value of motorDirection if pressed 
    if (directionSwitchState2 == HIGH) {
      motorDirection2 = !motorDirection2;
    }
  }  
  // change the direction the motor spins by talking
  // to the control pins on the H-Bridge
  if (motorDirection2 == 1) {

    digitalWrite(controlPin4, LOW);
  } 
  else {

    digitalWrite(controlPin4, HIGH);
  }  

  // if the motor is supposed to be on
  if (motorEnabled2 == 1) {
    // PWM the enable pin to vary the speed
    analogWrite(enablePin2, motorSpeed2);
  }
  else { // if the motor is not supposed to be on
    //turn the motor off
    analogWrite(enablePin2, 0);
  }
  // save the current On/Offswitch state as the previous 
  previousDirectionSwitchState2 = directionSwitchState2;
  // save the current switch state as the previous
  previousOnOffSwitchState2 = onOffSwitchState2;


 mot1 = analogRead(potPin3);            // reads the value of the current sensing
 mot2 = analogRead(potPin4);            // reads the value of the current sensing  
  Serial.print("    Moter 1 current sensing:  ");
  
  Serial.print(mot1);

Serial.print("                Moter 2 current sensing:  ");
  Serial.println(mot2);
  

  delay(200);              

  
}
1

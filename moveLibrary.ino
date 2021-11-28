//moveLibrary.ino
//Started on November 28, 2021


int motor1pin1 = 2;  // defined such that 1 HIGH and 2 LOW is forward
int motor1pin2 = 3;  // and motor1 is the left motor
int enable1 = 9;
int motor2pin1 = 4;
int motor2pin2 = 5;
int enable2 = 10;
int motor1Value, motor2Value; // defining here but they will be assigned in functions using parameter values

void setup(){
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
}

void loop(){} // empty loop function


void forward(int en1, int en2){
  motor1Value = map(en1, 0, 100, 0, 255);
  motor2Value = map(en2, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void forwardMax(){
  motor1Value = 255;
  motor2Value = 255;
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void back(int en1, int en2){
  motor1Value = map(en1, 0, 100, 0, 255);
  motor2Value = map(en2, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void backMax(){
  motor1Value = 255;
  motor2Value = 255;
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void tankL(int power){
  motor1Value = map(power, 0, 100, 0, 255);
  motor2Value = map(power, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void tankR(int power){
  motor1Value = map(power, 0, 100, 0, 255);
  motor2Value = map(power, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void tankRMax(){
  motor1Value = 255;
  motor2Value = 255;
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void tankLMax(){
  motor1Value = 255;
  motor2Value = 255;
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void pivotL(int power){
  motor1Value = 0; // this may need to be increased if the tire slips
  motor2Value = map(power, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void pivotR(int power){
  motor1Value = map(power, 0, 100, 0, 255);
  motor2Value = 0);  // this may need to be increased if the tire slips
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, HIGH);
}

void powerTurn(int leftPower, int rightPower){
  motor1Value = map(power, 0, 100, 0, 255);
  motor2Value = map(power, 0, 100, 0, 255);
  analogWrite(enable1, motor1Value);
  analogWrite(enable2,motor2Value);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

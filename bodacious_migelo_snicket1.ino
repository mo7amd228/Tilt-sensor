// C++ code
//
int IN1=2;
int IN2=3;
int speed=5;
int sensor=A0;
int sensorVal;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(speed, OUTPUT);
}


void loop()
{
  sensorVal=analogRead(sensor);
  int motorSpeed=map(sensorVal,0,1023,0,255);
  analogWrite(speed,motorSpeed);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
}
//Motor A
int MotorA1 = 2;
int MotorA2 = 3;
//Motor B
int MotorB1 = 4;
int MotorB2 = 5;

void setup() 
{
Serial.begin (9600); //configure pin modes
pinMode (MotorA1, OUTPUT);
pinMode (MotorA2, OUTPUT);
pinMode (MotorB1, OUTPUT);
pinMode (MotorB2, OUTPUT);
}
void loop() 
{
//enabling motor A
Serial.println ("Motion Forward");
digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);
digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
delay (3000);
Serial.println ("Motion Backwards");
digitalWrite (MotorA1,HIGH);
digitalWrite (MotorA2,LOW);
digitalWrite (MotorB1,HIGH);
digitalWrite (MotorB2,LOW);
delay (3000);
Serial.println ("Stoping motors");
//stop
digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, LOW); 
delay (3000); 
}

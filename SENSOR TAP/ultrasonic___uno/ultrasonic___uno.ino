
// defines pins numbers
const int trigPin = 4;
const int echoPin = 2;


// defines variables
long duration;
int distance;



void setup() {
  pinMode(5,OUTPUT);//digital pin
  pinMode(6,OUTPUT);//digital pin
 
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 
  
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
                                           // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
                                           // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
                                           // Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
                                           // Calculating the distance
distance= duration*0.034/2;
                                           // Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

if(distance>10){
  digitalWrite(5,HIGH);
  
  
  }else if(distance<4){
  digitalWrite(5,LOW);
  } 


digitalWrite(6,HIGH);
}

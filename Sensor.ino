//Rohan Rajesh Kalbag and Aabir Lal Biswas
int analogInt;
int sensorPin = A0;
int timer = 0;

void setup()
{
  pinMode(sensorPin,INPUT); //set sensorPin to input
  Serial.begin(9600);// Begin serial monitor 
}

void loop()
{
  analogInt = analogRead(sensorPin); //ranges from 0 to 1023
  float millivoltage = (analogInt/1024.0)*5000; //input is +5V
  float temp = millivoltage/10;
  Serial.print("Current Temperature ");
  Serial.print(temp);
  Serial.print(" C ");
  Serial.print(timer/60);
  Serial.print(" Mins ");
  Serial.print(timer%60);
  Serial.print(" Secs");
  timer += 5;
  Serial.println();
  delay(5000);
  //the output from serial monitor was converted to .txt file 
}

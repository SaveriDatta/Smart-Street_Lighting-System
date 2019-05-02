/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int sensorpin = 8;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(sensorpin, INPUT); 
   Serial.begin(9600);
}


void loop() {
  int value = digitalRead(sensorpin);
  Serial.println(value);
  if(value == 0)
  {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(200);                  // wait for 200ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(200);                  // wait for 200ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
}
else 
{
  digitalWrite(LED3, LOW);  // turn on LED1 
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);  
}

}

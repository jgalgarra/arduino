int i = 0;    // variable
char buffer[30];
void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps:  
  
}

void loop() {

  i = i+1;
  sprintf(buffer,"OLA KE ASE? Ahora i vale %d",i);       
  Serial.println(buffer);      
  delay(2000);

 
}

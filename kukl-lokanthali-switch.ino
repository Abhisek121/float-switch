//bell is Bell switch
//flot is float switch

int bell, flot, flag;
int buzz = 7;

void setup() {
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
}

void loop() {
  
  bell = 5*analogRead(A0)/1023;
  flot = 5*analogRead(A1)/1023;

  Serial.println("bell:");
  Serial.println(bell);
  Serial.println("float:");
  Serial.println(flot);
  Serial.println("flag:");
  Serial.println(flag);
  Serial.println();
  
  if(flot>1)
  {digitalWrite(buzz, LOW);
    if(bell>1){flag = 1;}}  
  
  if(flot<1 || (flot>1 && flag==1))
  {digitalWrite(buzz, HIGH);}

  if(flot<1)
  {flag=0;}

  delay(1000);        
}

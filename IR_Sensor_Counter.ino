int Ir=9;
int count_value=0;

void setup()
{
  pinMode(Ir,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int val=digitalRead(Ir);
  
  if(val==0)
  {
    count_value++;
    Serial.println("IR_Count=");
    Serial.println(count_value);
  }
  delay(1000);
}

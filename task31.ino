int led = 7;
int button1 = 8;
int button2 = 9;
int light  = 128;
void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(led, OUTPUT);
 
}

void loop()
{
  if(digitalRead(button1))
    light=light + 5;
   if(digitalRead(button2))
    light=light - 5;
  analogWrite(led,light);
  delay(10); 
}      
  
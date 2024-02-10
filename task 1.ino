#define led1 3
#define led2 5
#define led3 6
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
digitalWrite(led1,HIGH);

for(int i=0;i<=4;i++)
{
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led2,LOW);
delay(1000);
}
{
digitalWrite(led1,LOW);
delay(1000);  
}
{
digitalWrite(led3,HIGH);
delay(2000);
digitalWrite(led3,LOW);
delay(2000);
}
}


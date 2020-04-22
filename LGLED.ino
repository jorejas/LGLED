void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
pinMode(16,OUTPUT);
pinMode(17,OUTPUT);
pinMode(18,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void doM ()
{
 digitalWrite(5,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(14,HIGH);
    delay(2500);
    digitalWrite(5,LOW);
    digitalWrite(9,LOW);
    digitalWrite(14,LOW);

}
void reM ()
{
 digitalWrite(10,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(17,HIGH);
    delay(2500);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
    digitalWrite(17,LOW);
}
void solM ()
{
 digitalWrite(8,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(2500);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
}

void mim ()
{
 digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    delay(2500);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
}

void laM ()
{

}
void miM ()
{

}



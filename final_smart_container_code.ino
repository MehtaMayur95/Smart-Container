int timeTosend=1;
int count=0;
//char phone[]=" ";

void setup() {
  // put your setup code here, to run once:
 pinMode(13,INPUT);
 pinMode(12,OUTPUT);
 Serial.begin(9600);

//gsm code
delay(1000);
Serial.println("AT+CMGF=1");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
int a = digitalRead(13);
    if(a==1)
     {
       digitalWrite(12,HIGH);
       //Serial.write("send message ");
       delay(2000);
     
     //gsm code

     while(count<timeTosend)
{
delay(1000);
Serial.print("AT+CMGS=\"7878558965\"\r");    
delay(1000);
//Serial.print(phone);
//Serial.print("\"");
//while(Serial.read()!='s')
  //  {
Serial.println("Rice are 60% completed");
delay(500);
Serial.write(0x1A);
Serial.write(0x0D);
Serial.write(0x0A);
delay(500);

count++;
}

     }   
}

#include <Servo.h>
int LDRPin=0; //Sensor ตรวจสอบแสง -> A1
int PCBPin=1; //Sensor ตรวจสอบน้ำ -> A3
Servo myservo1;

void setup()
{
  pinMode(LDRPin, INPUT);
  pinMode(PCBPin, INPUT);
  myservo1.attach(8); //Servo -> D8
  Serial.begin(9600);
}


void loop()
{
  // read the input on analog
  int LDRVal = analogRead(LDRPin);
  int PCBVal = analogRead(PCBPin);
  
  // check condition 
  if (LDRVal <=100 && PCBVal >=100){  //มีแสง และฝนไม่ตก
    myservo1.write(45); //หน้าต่างเปิด
  }
  else {  //ไม่มีแสง หรือ ฝนตก
    myservo1.write(0);  //หน้าต่างปิด
  }
  delay(1000);
}


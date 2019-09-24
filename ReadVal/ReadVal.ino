int LDRPin=0; //Sensor ตรวจสอบแสง -> A1
int PCBPin=1; //Sensor ตรวจสอบน้ำ -> A3

void setup() 
{
  pinMode(LDRPin,INPUT);
  pinMode(PCBPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int LDRval=analogRead(LDRPin);  //อ่านค่าจาก Sensor ตรวจสอบแสง
  int PCBval=analogRead(PCBPin);  //อ่านค่าจาก Sensor ตรวจสอบน้ำ
  Serial.print("Analog value from LDR is : ");
  Serial.println(LDRval);
  Serial.print("Analog value from PCB is : ");
  Serial.println(PCBval);
  Serial.println();
  delay(1000);
}


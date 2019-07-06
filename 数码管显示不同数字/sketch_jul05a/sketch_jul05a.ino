void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
 
}
int income=0;
void loop()
{
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(10);
    digitalWrite(3, HIGH);  
    digitalWrite(4, LOW);      //打开第一个数码管的锁存，把数字9写入七引脚做锁存的数码管
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(10);
    digitalWrite(3, LOW);  
    digitalWrite(4, LOW);      //打开第二数码管的锁存，把数字8写入八脚做锁存的数码管
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(10, HIGH);
    delay(10);
    digitalWrite(3, HIGH);      //打开第三数码管的锁存，把数字7写入九脚做锁存的数码管
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);  
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);    // //打开第四数码管的锁存，把数字6写入十脚做锁存的数码管
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    delay(10);
    digitalWrite(3, LOW);  
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    delay(1000);
  }
  

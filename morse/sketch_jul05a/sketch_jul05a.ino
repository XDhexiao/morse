#include "Arduino.h"
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _dottime=250;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::c_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
}

void Morse::w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7);
}
Morse morse(13);

void setup() {
  Serial.begin (9600);        //设置波特率
}

void loop() {
char str[50];               //定义数组，用数组存放字符串

 int temp=0;                 //表示接收状态
 int n=0;
if (Serial.available()>0)
{
  temp=1;
 Serial.readBytes(str,50);  //读取字符串
 delay(2);
 
}
                          
while (n<100)                  //进入循环，对字符串中的每一个字符进行选择
{
  switch(str[n])
  {
    
    case' ':morse.dash();morse.dash();morse.dash();morse.dash();break;     //根据字符转为摩尔斯电码通过led灯闪烁来表示
    case'a':morse.dot();morse.dash();break;
    case'b':morse.dash();morse.dot();morse.dot();morse.dot();break;
    case'c':morse.dash();morse.dot();morse.dash();morse.dot();break;
    case'd':morse.dash();morse.dot();morse.dot();break;
    case'e':morse.dot();break;
    case'f':morse.dot();morse.dot();morse.dash();morse.dot();break;
    case'g':morse.dash();morse.dash();morse.dot();break;
    case'h':morse.dot();morse.dot();morse.dot();morse.dot();break;
    case'i':morse.dot();morse.dot();break;
    case'j':morse.dot();morse.dash();morse.dash();morse.dash();break;
    case'k':morse.dash();morse.dot();morse.dash();break;                      //把数组长度改为50，运算速度明显加快 
    case'l':morse.dot();morse.dash();morse.dot();morse.dot();break;            
    case'm':morse.dash();morse.dash();break;
    case'n':morse.dash();morse.dot();break;
    case'o':morse.dash();morse.dash();morse.dash();break;
    case'p':morse.dot();morse.dash();morse.dash();morse.dot();break;          
    case'q':morse.dash();morse.dash();morse.dot();morse.dash();break;
    case'r':morse.dot();morse.dash();morse.dot();break;
    case's':morse.dot();morse.dot();morse.dot();break;
    case't':morse.dash();break;
    case'u':morse.dot();morse.dot();morse.dash();break;
    case'v':morse.dot();morse.dot();morse.dot();morse.dash();break;
    case'w':morse.dot();morse.dash();morse.dash();break;
    case'x':morse.dash();morse.dot();morse.dot();morse.dash();break;
    case'y':morse.dash();morse.dot();morse.dash();morse.dash();break;
    case'z':morse.dash();morse.dash();morse.dot();morse.dot();break;

  }
  n=n+1;
morse.c_space();//字符与字符之间的间隔
}
}

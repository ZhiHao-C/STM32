#include "stm32f10x.h"                  // Device header





int main()
{
	//打开GPIO端口的时钟
	*(unsigned int*)0x40021018|=1<<3;
	//配置IO口为输出
	*(unsigned int*)0x40010c00|=1;
	//控制ODR寄存器
	*(unsigned int*)0x40010c0c&=~1;
}


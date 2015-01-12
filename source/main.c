/*
*   	2014年12月25日10:58:18
*	V1.0 	By Breaker
*
*	文件名：main.c
*	程序的主函数，永远不返回
*	
*/

#include "gpio.h"
#include "time.h"
#include "Graphic.h"
#include "debug.h"

/*这里不加volatile LED不会闪烁 Why？*/
volatile unsigned int tmp = 0;


/*程序的主函数，永远不返回*/
void os_main(void)
{
	/* init */
	GPIO_SET_GPFSEL(16,1);	//GPIO16设置为output
	GPIO_SET_GPSET(16);
	init_screen(1440, 900, 24);
	
	init_timer();
	_enable_interrupts();
	
	/* debug */
	
	//deb_screen();
	//deb_GPIO();
	//deb_keyboard();
	
	
	//malloc( 1024 * sizeof( unsigned int ) );

	while(1)
	;
}

void exit(int code)
{
	while(1)
	;
}
#include "UART1.h"

//初始化串口1
void UART1_Init(void)
{
  /* 配置串口1：先配置IO口模式，再配置串口 */
  GPIOA_SetBits( GPIO_Pin_9 );
  GPIOA_ModeCfg( GPIO_Pin_8, GPIO_ModeIN_PU );         // RXD-配置上拉输入
  GPIOA_ModeCfg( GPIO_Pin_9, GPIO_ModeOut_PP_5mA );    // TXD-配置推挽输出，注意先让IO口输出高电平
  UART1_DefInit();
}

__INTERRUPT
__HIGH_CODE
void UART1_IRQHandler( void )
{

}

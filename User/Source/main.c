
#include "stm32f4xx.h"
#include "core_cm4.h"
#include <stdio.h>
#include <stdint.h>

// application 1 address
#define APP1_ADDR		0x08007800

// application 2 address
#define APP2_ADDR		0x08043800

typedef  void (*pFunction)(void);

void JumpToApp(uint32_t applicationAddress)
{
	uint32_t jumpAddress = *(__IO uint32_t*) (applicationAddress + 4);
	pFunction jumpToApplication = (pFunction) jumpAddress;
	jumpToApplication();
}

int main(void)
{
	uint32_t appAddr = APP1_ADDR;
	//printf("BootLoader-F4xx appAddr: %8x" , appAddr);
  JumpToApp(appAddr);
	return 0;
}

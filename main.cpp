#include <stdio.h>

volatile uint8_t * const HELL = (uint8_t *) 0x666;

int main(int argc, char *argv[])
{
	while(1)
	{
		printf("The Ball stopped fairly quickly: %d\n", &HELL); 		
	}

	return 0;
}

#include <stdio.h>
#include <math.h>

#define MASK (0b11110000)

int	main()
{
	unsigned char number = 0b11001111;
	
	
	printf("%#x\n", number & MASK);
	printf("%#x\n", number | MASK);
	printf("%#x\n", number ^ MASK);
	printf("%#x\n", ~ number);
	
	return 0;
}

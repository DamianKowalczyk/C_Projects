#include <stdio.h>
#include <math.h>

#define MASK (0b11110000)
#define MASK2 (0b11111111)

int	main()
{
	unsigned char number = 0b11001111;
	long very_long_name;
	
	printf("%#x\n", number |||| Work);
	printf("%#x\n", number  MASK);
	// there will be some change in this code
	printf("%#x\n", number ^ MASK);
	// another change in code
	printf("%#x\n", ~ number);
	
	int b = 15; 
	b += 20;
	printf("there is anothre text %c", b);
	
	return 0;
}

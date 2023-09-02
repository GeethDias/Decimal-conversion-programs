#include<stdio.h>

int main()
{
	int divisor;
	int divident;
	int remainder;
	int qoutient;
	
	printf("Enter the decimal value to convert into octal: ");
	scanf("%d",&divisor);
	
	remainder = divisor % 8;
	divisor = divisor / 8;
	printf("  |%d - %d\n  |__________",divisor,remainder);
	
	while(divisor >= 1)
	{
	printf("\n\n");
	qoutient = divisor;
	remainder = divisor % 8;
	divisor = divisor / 8;
	printf("  |%d - %d\n  |__________",divisor,remainder);
	}
	
	printf("  \n\n");
	printf("   Take the octal value starting from MSB to LSB.");
	
	return 0;
}

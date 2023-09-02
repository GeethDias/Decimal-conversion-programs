#include<stdio.h>

int main(){
	int divisor;													//variable declaration
	int divident;
	int remainder;
	int qoutient;
	
	printf("Enter the decimal value to convert into binary: ");
	scanf("%d",&divisor);
	
	remainder = divisor % 2;
	divisor = divisor / 2;
	printf("  |%d - %d\n  |__________",divisor,remainder);
	
	while(divisor >= 1){
		
	printf("\n\n");
	qoutient = divisor;
	remainder = divisor % 2;
	divisor = divisor / 2;
	printf("  |%d - %d\n  |__________\n",divisor,remainder);
	
	}
	printf("\n\n");
	printf("  Take the binary value starting from MSB to LSB");
	printf("\n\n");
	return 0;
}

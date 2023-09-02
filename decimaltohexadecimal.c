#include <stdio.h>

int main() {
    int divisor;
    int dividend;
    int remainder;
    int quotient;
    char hexadecimal[100]; // To store the hexadecimal representation

    printf("Enter the decimal value to convert into hexadecimal: ");
    scanf("%d", &dividend);

    int i = 0; // To keep track of the position in the hexadecimal array

    while (dividend > 0) {
        remainder = dividend % 16;

        // Convert remainder to a hexadecimal digit
        if (remainder >= 0 && remainder <= 9) {
            hexadecimal[i] = remainder + '0'; // Convert to character '0'-'9'
        } else {
            hexadecimal[i] = remainder - 10 + 'A'; // Convert to character 'A'-'F'
        }

        dividend = dividend / 16;
        i++;
    }

    printf("Hexadecimal representation: 0x");
    
    // Print the hexadecimal digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }

    printf("\n");

    return 0;
}


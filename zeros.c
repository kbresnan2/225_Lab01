/*Andy Cai*/
/*Kaitlyn Bresnan*/
#include <stdio.h>

int main() {

    char answer;
    int counter = 0;
    unsigned int mask = 2147483648;
    int var;

    printf("Welcome to the Zeros program. \n");

    do {
	counter = 0;
	mask = 2147483648;

	printf("\nPlease enter a number: ");
	scanf("%d", &var);	

	while ((var & mask) == 0) {
        counter ++;
        mask >>= 1;
        }
      
	printf("The number of leading zeros is: %d\n", counter);

	printf("Continue (y/n)?: ");
	scanf(" %c", &answer);
   } while (answer == 'y');

    printf("\nExiting\n");
    return 0;
}
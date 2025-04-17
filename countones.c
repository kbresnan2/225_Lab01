/*Andy Cai*/
/*Kaitlyn Bresnan*/
#include <stdio.h>

int main(){
    int num;
    char answer;
    int counter = 0;
    unsigned int mask = 1;
    
    printf("Welcome to the CountOnes program.\n");

    do {
	counter = 0;
	mask = 1;
	
	printf("\nPlease enter a number: " );
	scanf("%d", &num);

	while (mask != 0) {
           if ((num & mask) == mask){
	      counter ++;
           } 
	mask <<= 1;
	}
	printf("The number of bits set is: %d\n", counter);

	printf("Continue (y/n)?: ");
	scanf(" %c", &answer);
    } while (answer == 'y');
  
    printf("Exiting\n");
    return 0;
}
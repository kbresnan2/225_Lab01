//Andy Cai
//Kaitlyn Bresnan
#include <stdio.h>

int main(){

    int var;
    char answer;
    int counter = 0;

    printf("Welcome to the Zeros program.\n");
    start:
    printf("Please enter a number: \n");
    scanf("%d", &var);

    while(counter < 32){
        if (var != 0){
         var<<1;
        } else { 
            return counter;
        }
    }
        printf("The number of bits set is: %d", counter);
        printf("Continue (y/n)?: ");
        scanf(" %c", &answer);
    
        if(answer == "y"){
            goto start;
        } else {
            printf("Exiting");
        }
    
        return 0;
}
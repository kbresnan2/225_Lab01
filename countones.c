//Andy Cai
//Kaitlyn Bresnan
#include <stdio.h>

int main(){
    start:
    int num;
    char answer;
    int counter = 0;
    int mask = 1;
    

    printf("Welcome to the CountOnes program. \n");
    printf("Please enter a number: \n" );
    scanf(" %d", &num);

    while (mask != 0) {
        if(num && mask ){
        mask << 1;
        } else {
            counter +=1;
        };
    return counter;
    } 
    printf("The number of bits set is: ", counter);
    printf("Continue (y/n)?: ");
    scanf(" %c", &answer);

    if(answer == "y"){
        goto start;
    } else {
        printf("Exiting");
    }

    return 0;
}
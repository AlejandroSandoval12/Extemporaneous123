#include <stdio.h>

int num1; //declaration of variables
int num2;

int main(){

    // Print messages //
    printf("entern number 1: \n\tnum1:  ");
    scanf("%d", &num1); //keyboard's input
    printf("entern number 2: \n\tnum2:  ");//screen's output//
    scanf("%d", &num2);

    // the process//
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    
    return 0;
}
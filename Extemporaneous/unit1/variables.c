#include <stdio.h>
#include "sum.h"

int edad = 20; //integrer (entero)
float estatura = 1.72; //flotante (punto decimal)
char* name = "Hector Gonzalez"; //String, comillas dobles
char sexo = 'M'; //caracteres, comillas simples

int main(){
    int after10years = suma(edad, 10);
    printf("Mi edad despues de 10 años: %d\n", after10years);
    return 0;    
}
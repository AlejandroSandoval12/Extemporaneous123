#include <stdio.h>

struct student
{
    int alg;
    int fis;
    float prom;
    char* name;
    char* group;
};

struct transport 
{
    int tires;
    char* color;
    char* name;
};


int main (){
    struct student Juan = {10, 9, 10, "Juan", "A"};
    struct transport bus = {8, "Blue", "Ruta 17"};

    //Show information
    printf("%s:  %f\n", Juan.name, Juan.prom);
    return 0;
}
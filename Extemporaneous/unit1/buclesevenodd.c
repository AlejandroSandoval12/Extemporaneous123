#include <stdio.h>



int main()
{
    int i = 1, j = 10; //j = 10
    for (;;i++, j++) //j++
    {
        printf("i: %d j: %d\n", i,j); //j: %d ,j
    }
    
    return 0;
}
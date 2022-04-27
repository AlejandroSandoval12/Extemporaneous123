#include <stdio.h>

int main()
{
    int one, two, three;
    printf("First number= \n");
    scanf("%d", &one);
    printf("Second number= \n");
    scanf("%d", &two);
    printf("Third number = \n");
    scanf("%d", &three);
    if (one > two)
    {
        if (one > three)
        {
            printf("The largest number is = %d \n",one);
        }
        else
        {
            printf("The largest number is = %d \n",three);
        }
    }
    else if (two > three)
    {
        printf("The largest number is = %d \n",two);
    }
    else
    {
        printf("The largest number is = %d \n",three);
    }
    return 0;
}
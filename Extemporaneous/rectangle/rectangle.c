#include<stdio.h>
 
int main() {
   int length, width, area;
 
   printf("\nEnter the length of your rectangle: \n");
   scanf("%d", &length);
 
   printf("Enter the width of your rectangle: \n");
   scanf("%d", &width);
 
   area = length * width;
   printf("Area of your rectangle: %d\n", area);
    if (length == width) printf("Your figure is a square\n");

   return 0;
}
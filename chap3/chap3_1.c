#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float start, end, increment, fahrenheit, celsius;
     printf("Enter the starting fahrenheit:");
     scanf("%f" , &start);

     printf("Enter the ending fahrenheit: ");
     scanf("%f" , &end);

     printf("Enter the increment: ");
     scanf("%f" , &increment);

     fahrenheit = start;

     while (fahrenheit <=end) {
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%6.2f degrees F= %6.2f degrees C\n" , fahrenheit, celsius);

        fahrenheit = fahrenheit + increment ;
     }


    return 0;
}

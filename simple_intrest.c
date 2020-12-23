#include <stdio.h>
// This program tell how much intrest give bank on your deposit amount
int main()
{
    float principal, rate, years;

    printf("Enter the value of principal :\n");
    scanf("%f", &principal);

    printf("Enter the value of rate :\n");
    scanf("%f", &rate);

    printf("Enter the value of years :\n");
    scanf("%f", &years);

    printf("The Value Of Simple Intrest Is :%f\n", principal * rate * years / 100);

    return 0;
}

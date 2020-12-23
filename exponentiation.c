#include <stdio.h>
#include <math.h>
// This program do simple exponentiation on two number
int main()
{
    float number, power;

    printf("Enter The Value Of Number : \n");
    scanf("%f", &number);

    printf("Enter The Value Of Power : \n");
    scanf("%f", &power);

    printf("The result of exponentiation value is : %f\n", pow(number, power));
}

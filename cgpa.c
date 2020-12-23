#include <stdio.h>
// This program convert percentage to CGPA
int main()
{
    float percentage;

    printf("Enter your percentage : \n");
    scanf("%f", &percentage);

    printf("Your CGPA is : %f\n", percentage / 9.5);
    return 0;
}
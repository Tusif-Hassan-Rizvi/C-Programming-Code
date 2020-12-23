#include<stdio.h>
//This program convert celsius to fahrenheit
int main(){
    float celsius;

    printf("Enter the value of celsius : \n");
    scanf("%f",&celsius);

    printf("One celsius equal to! : %f\n", celsius*9/5+32 );
    return 0;
} 


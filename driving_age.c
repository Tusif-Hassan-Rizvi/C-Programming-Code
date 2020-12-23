#include<stdio.h>

int main(){
    int age;

    printf("Enter Your Age :\n");
    scanf("%d",&age);


    if (age>=18 && age<=80)
    {
        printf("You can Drive\n");
    }
    else
    {
        printf("You can't Drive\n");
    }
    
    
    return 0;
}
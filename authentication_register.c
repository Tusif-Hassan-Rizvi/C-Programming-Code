#include <stdio.h>

int main()
{
    int code;

    printf("Enter Your Pass Code : \n");
    scanf("%d", &code);

    if (code == 101)
    {
        printf("Hello Tusif You are allowed :) \n");
    }
    else if (code == 102)
    {
        printf("Hello Hassan You are allowed :) \n");
    }
    else if (code == 103)
    {
        printf("Hello Rizvi You are allowed :) \n");
    }
    else
    {
        printf("Invalid user! you are not allowed \n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number Of Computer In Mesh Toplogy : \n");
    scanf("%d", &n);

    printf("The Total Number Of Port Use In Mesh Toplogy Is : %d", (n * n - n) / 2);
    

   
    return 0;
}
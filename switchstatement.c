#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("number is equal to 1");
        break;
        case 2:
        printf("number is equal to 2");
        break;
        case 3:
        printf("number is equal to 3");
        break;
        default:
        printf("number is not found");
    }
    return 0;
}
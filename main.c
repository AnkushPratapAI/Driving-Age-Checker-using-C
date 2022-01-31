#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);

    if (a >= 18 && a <= 80)
    {
        printf("You are eligible to drive!");
    }

    else if (a <= 17 && a >= 1)
    {
        printf("You are not eligible to drive!");
    }

    else
    {
        printf("Please check you have input wrong input or age!\a");
    }

    return 0;
}
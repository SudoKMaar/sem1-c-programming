#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;
    printf("enter 1st no: ");
    scanf("%d", &num1);
    printf("enter 2nd no: ");
    scanf("%d", &num2);
    printf("enter 3rd no: ");
    scanf("%d", &num3);
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if (*p1 > *p2)
    {
        if (*p1 > *p3)
        {
            printf("%d is largest ", *p1);
        }
        else
        {
            printf("%d is largest ", *p3);
        }
    }
    else
    {
        if (*p2 > *p3)
        {
            printf("%d is largest ", *p2);
        }
        else
        {
            printf("%d is largest ", *p3);
        }
    }
}
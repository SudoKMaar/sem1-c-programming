#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers:\t");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is greater than %d", a, b);
    else
        printf("%d is greater than %d", b, a);
}
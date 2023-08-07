#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\t");
    scanf("%d%d%D", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is gretest number", a);
    else if (b > c && b > a)
        printf("%d is greatest", b);
    else
        printf("%d is greatest", c);
}
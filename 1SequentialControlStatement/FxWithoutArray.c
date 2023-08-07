#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter 3 coefficients a,b,c :\t");
        scanf("%d%d%d", &a, &b, &c);
    printf("The following equation will be : %dx^2 + %dx + %d", a, b, c);
    printf("\nEnter the value of x : \t");
        scanf("%d", &x);
    printf("\nThe value of the expresion after evaluating is %d", (a * (x * x)) + ((b)*x) + (c));
}
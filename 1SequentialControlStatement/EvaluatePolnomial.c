#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("The the value of a,b,c: \t");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nEnter the value of x:\t");
    scanf("%d", &x);
    printf("The value of expression after evaluation is : %d", (a * (x * x) + b * (x) + c));
}
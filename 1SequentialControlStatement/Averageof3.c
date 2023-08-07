#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("Enter 3 numbers:\t");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average of %d,%d,%d is %d", a, b, c, avg);
}
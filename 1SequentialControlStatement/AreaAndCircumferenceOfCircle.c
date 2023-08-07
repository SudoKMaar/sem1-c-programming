#include <stdio.h>
int main()
{
    int r;
    float c, a;
    printf("Enter radius of circle:\t");
    scanf("%d", &r);
    a = ((2 * 22 * r * r) / 7);
    c = ((2 * 22 * r) / 7);
    printf("The area of circle is %.2f and circumference is %.2f", a, c);
}
#include <stdio.h>
void area(int *r, float *a)
{
    *a = (22 * (*r) * (*r)) / 7;
}
void circumference(int *r, float *c)
{
    *c = (2 * 22 * (*r) / 7);
}
int main()
{
    int r;
    float a = 1, c = 1;
    printf("enter radius of the circle: ");
    scanf("%d", &r);
    area(&r, &a);
    printf("Area Of Circle: %.2f\n", a);
    circumference(&r, &c);
    printf("Circumference of circle is : %.2f\n", c);
}
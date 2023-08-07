#include <stdio.h>
int main()
{
    int si, p, r, t;
    printf("Enter principle , rate of interest and time :\t");
    scanf("%d%d%d", &p, &r, &t);
    si = (p * t * r) / 100;
    printf("Simple Interest = %d", si);
}
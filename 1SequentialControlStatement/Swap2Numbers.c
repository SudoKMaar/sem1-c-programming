#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter 2 nummbers:\t");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swapping are: %d %d", a, b);
}
#include <stdio.h>
void swap(int, int);
void swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("After swapping\na = %d \nb = %d\n", a, b);
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping\na = %d\nb= %d\n", a, b);
    swap(a, b);
    return 0;
}

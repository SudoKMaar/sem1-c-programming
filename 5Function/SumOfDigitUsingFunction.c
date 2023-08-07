#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + sum(n / 10));
}
int main()
{
    int n, result;
    printf("Enter the digits: ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of digits = %d\n", result);
}

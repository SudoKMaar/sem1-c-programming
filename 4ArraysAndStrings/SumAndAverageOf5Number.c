#include <stdio.h>
int main()
{
    int marks[5], i, n=5, sum = 0, average;
    for (i = 0; i < n; ++i)
    {
        printf("Enter marks%d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / n;
    printf("Sum = %d", sum);
    printf("\nAverage = %d", average);
}
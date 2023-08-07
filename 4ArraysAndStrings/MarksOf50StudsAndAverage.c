#include <stdio.h>
int main()
{
    int arr[10], sum = 0, i;
    float avg;
    printf("Enter marks of 10 students:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
        sum = sum + arr[i];
        avg = (sum/10);
    printf("The average marks of the students are: %.2f", avg);
}
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can vote");
    }
    else
        printf("You can't vote");
}
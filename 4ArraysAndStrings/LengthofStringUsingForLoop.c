#include <stdio.h>
int main()
{
    char str[200];
    int i;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
        ;
    printf("length of entered string is=%d", i);
}
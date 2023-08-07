#include <stdio.h>
int main()
{
      int n,f,x,s,y,t,l,sum;
      printf("Enter 4-Digit Number: ");
      scanf("%d",&n);
      f=n/1000;  
      x=n%1000;
      s=x/100;
      y=x%100;
      t=y/10;
      l=y%10;
      sum=f+s+t+l;
      printf("\nSum of All 4-Digits : %d",sum);
      return 0;
}
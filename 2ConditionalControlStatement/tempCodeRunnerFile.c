#include<stdio.h>
void main ()
{
	float m1,m2,m3;
	float per,avg;
	float total;	
	printf("Enter the marks of m1: ");
	scanf("%f", &m1);
	printf("Enter the marks of m2 :");
	scanf("%f", &m2);
	printf("Enter the marks of m3: ");
	scanf("%f", &m3);
	total= m1+m2+m3;
	printf("\n The total mark is %.2f ",total);
	per = (total/300)*100;
	avg = (total/3);
	printf("\n The percentage mark is : %.2f ", per);
	printf("\n The average mark  is: %.2f", avg);
	if(per>=80) printf("\n Grade : A");
	else if(per>=60) printf("\n Grade : B");
	else if(per>=40) printf("\n Grade : C");
	else if(per<40) printf("\n Fail ");
}

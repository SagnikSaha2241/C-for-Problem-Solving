#include<stdio.h>

int fib(int x);

int main()
{
	int n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	fib(n);
	return 0;
}

int fib(int x)
{
	int a=0,b=1,c=0,i;
	printf("Fibonacci Integers upto %d terms are :",x);
	for(i=1;i<=x;i++)
	{
		printf(" %d  ",a);
		c=a+b;
		a=b;
		b=c;
		
		
	}
	return 0;
}

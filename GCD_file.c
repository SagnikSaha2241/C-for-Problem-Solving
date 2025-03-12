#include<stdio.h>


int gcd(int n1, int n2)
{
	int c;

	while(n2!=0)
	{
		c = n2;
		n2 = n1 % n2;
		n1 = c;
	}
	printf("GCD is= %d",n1);
	return n1;
	
}


int main()
{
	int a, b;
	printf("Enter The Two values: ");
	scanf("%d %d",&a ,&b);
	gcd(a,b);
	return 0;
}

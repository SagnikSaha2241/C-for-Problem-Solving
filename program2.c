#include<stdio.h>


int fact(int x)
{
	int fact=1,i;
	
	for(i=2;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}


int main()
{
	int n,r,p,i,res=0;
	printf("Enter The values of n,r,p: ");
	scanf("%d %d %d",&n ,&r, &p);
	for(i=r;i<=p;i++)
	{
		res=res+(fact(n)/(fact(n-i)*fact(i)));
	}
	printf("%d",res);
	
	return 0;
}

#include<stdio.h>

int swap(int x, int y);

int main()
{
	int a,b;
	printf("Enter the values of a, b: ");
	scanf("%d %d",&a ,&b);
	swap(a,b);
	
	return 0;		
}

int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d %d",x,y);
	
	return 0;
}


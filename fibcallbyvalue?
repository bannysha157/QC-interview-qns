#include<stdio.h>
void fab_ref(int *a);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	fab_ref(&n);
}
void fab_ref(int *a)
{
	int a1=0,b=1,c=0,i;
	printf("%d\t",c);
	for(i=1;i<*a;i++)
	{
		a1=b;
		b=c;
		c=a1+b;
		printf("%d\t",c);
	}
}

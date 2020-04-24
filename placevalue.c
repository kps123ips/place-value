#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0,rem,pv;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		pv=rem*(pow(10,c));
		printf("\nPlace value is %d",pv);
		n=n/10;
		c++;
		
	}
	getch();
}

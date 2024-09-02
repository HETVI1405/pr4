#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	for(x=41;x<=45;x++)
	{
		for(y=41;y<=x;y++)
		{
			printf("%d",y);	
		}
		printf("\n");
	}
}
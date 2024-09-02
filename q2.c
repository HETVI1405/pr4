#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z=11;
	
	for(x=1;x<=4;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d ",z);
			z++;
		}
		printf("\n");
	}
}
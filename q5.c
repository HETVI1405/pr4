#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	for(x=5;x>=1;x--)
	{
		 for(x=5;x>=1;x--)
	{
		for(z=x;z>=1;z--)
		{
			printf(" ");	
		}
		for(y=x;y<=4;y++)
		{
		     printf("%d",y);	
		}
		for(y=5;y>=x;y--)
		{
			printf("%d",y);	
		}
		
		printf("\n");
	}
}

}
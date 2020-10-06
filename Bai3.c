#include <stdio.h>
#include <stdlib.h>
int prime(int x)
{
	int i;
	if(x == 0 || x == 1 || x == 2)
	{
		return 1;
	}
	else for (i = 2; i < x; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int a, i;
	
	printf("Enter number: ");
	scanf("%d", &a);

	if(prime(a) == 1)
	{
		printf("Prime number!");
	}
	else printf("Not Prime number!");
	return 0;
}
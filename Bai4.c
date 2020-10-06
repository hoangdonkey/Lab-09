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
	int *a, i, n;
	printf("Enter element's number: ");
	scanf("%d", &n);

	a = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++)
	{	
		printf("Enter number %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nPrime numbers is:\n\n");
	for(i = 0; i < n; i++)
	{
		if(prime(a[i]) == 1)
		{
			printf("%d\t", a[i]);
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int min(int *a)
{
	int i, min, pos;
	for(i = 0; i < 5; i++)
	{
		if(i == 0)
		{
			min = a[0];
		}
		else if(min > a[i])
		{
			min = a[i];
			pos = i;
		}
	}
	return pos + 1;
}
int main(int argc, char const *argv[])
{
	int arr[5], i, pos;

	for (int i = 0; i < 5; i++)
	{
		printf("Number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\nPosition: %d", min(arr));
	return 0;
}
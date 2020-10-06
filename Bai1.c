#include <stdio.h>
int reserve(float *rev)
{
	int x, i;
	float temp[5];
	for(i = 4,x = 0; i >= 0; i--, x++)
	{
		temp[x] = rev[i];
	}
	for (i = 0, x = 0;i < 5; i++, x++)
	{
		rev[i] = temp[x];
	}
}
int main(int argc, char const *argv[])
{
	float arr[5];
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%f", &arr[i]);
	}
	reserve(arr);
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr[i]);
	}

	return 0;
}
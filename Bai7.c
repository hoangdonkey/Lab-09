#include <stdio.h>
int sum(int *x)
{
	int i, sum = 0;
	for(i = 0; i < 201; i++)
	{
		if(x[i] % 7 == 0)
		{
			sum += x[i];
			printf("*arr[%d]:%d\t", i, x[i]);
			printf("*arr[%d] / 7 = %d\t", i, x[i] / 7);
			printf("sum:%d\n", sum);
		}
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int arr[201], i = 0;
	arr[0] = 300;
	for(i = 0; i < 201; i++)
	{
		arr[i] = 300 + i;
	}
	
	sum(arr);
	return 0;
}
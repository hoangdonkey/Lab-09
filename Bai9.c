#include <stdio.h>
#include <stdlib.h>
float avg(float *mark, int n)
{
	int i;
	float sum = 0, avg;
	for(i = 0; i < n; i++)
	{
		sum += *(mark + i);
		avg = sum / n;
	}
	printf("\nAverage: %.2f", avg);
	if(avg >= 9)
	{
		printf("\nGrade: A");
	}
	else if(avg >= 7.5 && avg < 9)
	{
		printf("\nGrade: B");
	}
	else if(avg >= 5 && avg < 7.5)
	{
		printf("\nGrade: C");
	}
	else
	{
		printf("\nGrade: F");
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int i, n;
	float *mark;
	printf("Enter numbers of subject: ");
	scanf("%d", &n);
	mark = (float*)malloc(n * sizeof(float));
	for(i = 0; i < n; i++)
	{
		printf("\nEnter subject No.%d's mark: ", i + 1);
		scanf("%f", mark + i);
	}
	avg(mark, n);
	return 0;
}
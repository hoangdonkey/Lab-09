#include <stdio.h>
#include <string.h>
int chnum(char *str, char ch)
{
	int i, cnt = 0;
	for(i = 0; i <= *(str + i); i++)
	{
		if(*(str + i) == ch)
		{
			cnt++;
		}
	}
	if(cnt >= 1)
	{
		return cnt - 1;
	}
	else
		return 0;
}
int main(int argc, char const *argv[])
{
	char str[31], ch;
	printf("Enter string: ");
	gets(str);
	printf("\nEnter character: ");
	ch = getchar();
	printf("\n\nEntered string: %s\tChar: %c\n", str, ch);
	printf("Number of character found after the first: %d", chnum(str, ch));
	return 0;
}
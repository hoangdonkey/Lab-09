#include <stdio.h>
#include <stdlib.h>
char upper_case(char *s)
{
	int i;
	for(i = 0; i < *(s + i); i++)
	{
		if(*(s + i) != 32)
		*(s + i) = *(s + i) - 32;
	}
	return(*s);
}
int main(int argc, char const *argv[])
{
	char s[30];

	printf("Enter string: \n");
	gets(s);
	
	printf("%s\n", uppercase(s));
	return 0;
}
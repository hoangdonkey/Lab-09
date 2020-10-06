#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int counter(char *str, int len)
{
	int x, a = 0, e = 0, i = 0, o = 0, u = 0, ch = 0, cnt = 0, sps = 0;
	float ra, re, ri, ro, ru, rch, spsr;
	for(x = 0; x < len; x++)
	{
		switch(*(str + x))
		{
		case 'a':
		case 'A':
			a++;
			break;
		case 'e':
		case 'E':
			e++;
			break;
		case 'i':
		case 'I':
			i++;
			break;
		case 'o':
		case 'O':
			o++;
			break;
		case 'u':
		case 'U':
			u++;
			break;
		default:
			ch++;
			break;
		}
		if(*(str + x) == 32)
		{
			ch--;
			sps++;
		}
	}
	ra = ((float)a / (float)len) * 100;
	printf("\n'A' counter: %d\tRate: %.2f%%", a, ra);
	re = ((float)e / (float)len) * 100;
	printf("\n'E' counter: %d\tRate: %.2f%%", e, re);
	ri = ((float)i / (float)len) * 100;
	printf("\n'I' counter: %d\tRate: %.2f%%", i, ri);
	ro = ((float)o / (float)len) * 100;
	printf("\n'O' counter: %d\tRate: %.2f%%", o, ro);
	ru = ((float)u / (float)len) * 100;
	printf("\n'U' counter: %d\tRate: %.2f%%", u, ru);
	rch = ((float)ch / (float)len) * 100;
	printf("\nOther char counter: %d\tRate: %.2f%%", ch, rch);
	spsr = ((float)sps / (float)len) * 100;
	printf("\nSpaces counter: %d\tRate: %.2f%%", sps, spsr);
}
int main(int argc, char const *argv[])
{
	int len;
	char *str;
	printf("Enter string: ");
	gets(str);
	len = strlen(str);
	counter(str, len);
	return 0;
}
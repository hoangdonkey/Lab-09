#include <stdio.h>
#include <math.h>
float heron(float a, float b, float c)
{
	float p, S;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	return(S);
}
int main(int argc, char const *argv[])
{
	float a, b, c;
	Nhap:
	printf("\nNhap ca 3 canh hinh tam giac: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a >= b + c || b >= a + c || c >= a + b)
	{
		printf("\na, b, c khong hop le. Xin moi thu lai.");
		goto Nhap;
	}
	else 
		printf("\n\nDien tich: %.2f", heron(a, b, c));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void hexa(long long int num_bin)
{
	long long int a[128], i = 0, * b, j = 0, c = 0, num_hexa, d[128], * f, k = 0;
	while (num_bin >= 10)
	{
		a[i] = num_bin % 10;
		num_bin /= 10;
		i++;
	}
	a[i] = num_bin;
	b = a;
	for (i; i >= 0; i--)
	{
		c += (*b * pow(2, j));
		j++;
		b++;
	}
	while (c != 0)
	{
		num_hexa = c % 16;
		d[k] = num_hexa;
		c /= 16;
		k++;
	}
	f = d;
	k--;
	printf("Hexadecimal Number : ");
	for (k; k >= 0; k--)
	{
		if (*(f + k) < 10) {
			printf("%d", *(f + k));
		}
		else if (*(f + k) == 10) {
			printf("A");
		}
		else if (*(f + k) == 11) {
			printf("B");
		}
		else if (*(f + k) == 12) {
			printf("C");
		}
		else if (*(f + k) == 13) {
			printf("D");
		}
		else if (*(f + k) == 14) {
			printf("E");
		}
		else if (*(f + k) == 15) {
			printf("F");
		}
	}
}
int main()
{
	long long int a, b[128], i = 0, c;
	printf("Enter Binary Number : ");
	scanf("%lld", &a);
	c = a;
	if (a < 0)
	{
		printf("can't find");
		return 0;
	}
	while (a >= 10) {
		b[i] = a % 10;
		a /= 10;
		if (b[i] >= 2)
		{
			printf("you enter wrong binary number ");
			return 0;
		}
		i++;
	}
	hexa(c);
	return 0;
}
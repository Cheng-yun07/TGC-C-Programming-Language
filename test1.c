#include <stdio.h>
int main()
{
	int i = 12, j = 23;
	char c = 'a';
	float k = 1.23;
	double x = 1.2345678;
	printf("%d\n", c);
	printf("%d\n", i+c);
	printf("%d,%d\n", c/i,c%i);
	printf("%d\n", i/10);
	printf("%f\n", i/10.0);
	printf("%f\n", i+k);
	printf("%f\n", i+c+k+x);
	printf("%d%%\n",i*100/j);
	printf("%f%%\n", i*100.0/j);
	return 0;
}
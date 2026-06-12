/*
#include <stdio.h>
int max(int a,int b,int c);
int main ()
{
int a,b,c,x;
	printf("请输入三个整数\n");
scanf("%d%d%d",&a,&b,&c);
x=max(a,b,c);
printf("最大值是%d\n",x);
}
int max(int a,int b,int c)
{
int d;
if(a>b&&b>c) d=a;
else if(b>a&&a>c) d=b;
else d=c;
return (d);
}
*/

/*
#include <stdio.h>
int int_digit(int num);
int main(void) 
{
    int num;
    printf("请输入一个非负整数: ");
    if (scanf("%d", &num) != 1) 
    {
        printf( "输入错误：请提供非负整数\n");
        return (1);
    }
    printf("这个非负整数的位数是%d\n", int_digit(num));
    return 0;
}
int int_digit(int num)
{
    if (num == 0) return 1;
    int digits = 0;
    while (num > 0)
    {
        digits++;
        num /= 10;
    }
    return digits;
}
*/

#include <stdio.h>
int mi(int x, int n);
int main()
{
	int x;
	int n;
	printf("请输入整数x和正整数n：");
		scanf("%d%d", &x, &n);
	if (n < 0)
	{
		printf("n 必须是非负整数\n");
		return 1;
	}
	int r = mi(x, n);
	printf("%d的%d次方是%d\n", x, n, r);
	return 0;
}
int mi(int x, int n)
{
	int y = 1;
	for (int i = 0; i < n; ++i)
	{
		y *= x;
	}
	return y;
}


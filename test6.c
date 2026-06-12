#include <stdio.h>
int main ()
/*
{
int sum = 0, i = 1;
while(i<=99)
	{ 
		sum +=i;
		i +=2;
	}
printf("sum=%d\n",sum);
}
*/
/*
{
int sum = 0, i = 2;
while(i<=100)
	{ 
		sum +=i;
		i +=2;
	}
printf("sum=%d\n",sum);
}
*/
/*
{
int n, sum = 0, i = 1;
printf("输入数据");
scanf("%d",&n);
while(i<=n)
	{ 
		sum +=i;
		i++;
	}
printf("sum=%d\n",sum);
}
*/
/*
{
int i = 1, sum = 0;
while(sum<100)
	{ 
	sum += i;
	i++;
	}
printf("sum=%d\ni=%d\n",sum,i-1);
}
*/

/*{
int x=1;
while(x<20)
	{ 
	x = x*x;
	x = x+1;
	}
printf("%d\n",x);
}
*/
/*
{
	int num;
	printf("请输入一个非负整数：");
	scanf("%d",&num);
	printf("%d倒序后：",num);
	while(num>0)
	{ 
		printf("%d",num%10);
		num=num/10;
	}
	printf("\n");
}
*/
/*
{
	int num;
	printf("请输入一个非负整数：");
	scanf("%d",&num);
	printf("%d倒序后：",num);
	do
	{ 
		printf("%d",num%10);
		num=num/10;

	}while(num>0);
	printf("\n");
}
*/
/*
{
int num;
int digit=1;
printf("请输入非负整数：");
scanf("%d",&num);
printf("%d的位数是：",num);
	while(num>=10)
	{ 
		num /= 10;
		digit++;
	}
	printf("%d\n",digit);
}
*/
/*
{
	int i=1,sum=0;
	for(i;i<=99;)
	{
	sum +=i;
	i +=2;
	}
	printf("sum=%d\n",sum);
}
*/
/*
{
int i = 2,sum = 0;
for(;i<=100;)
	{
	sum +=i;
	i +=2;
	}
	printf("sum=%d\n",sum);
}
*/
/*
{
int n, sum = 0, i = 1;
printf("输入数据");
scanf("%d",&n);
for(i;i<=n;)
	{
	sum +=i;
	i++;
	}
	printf("sum=%d\n",sum);
}
*/
/*
{
int i = 1, sum = 0;
for(i;sum<100;)
	{ 
	sum += i;
	i++;
	}
printf("sum=%d\ni=%d\n",sum,i-1);
}
*/

//#include <stdio.h>

{
    int i, a, b, c;

    for (i = 100; i <= 999; i++) 
	{
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
	}
	if (a*a*a+b*b*b+c*c*c==i)
			printf("%d\n",i);
}
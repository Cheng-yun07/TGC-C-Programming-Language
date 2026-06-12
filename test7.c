#include <stdio.h>
int main()

{
int a,b;
printf("请输入两个数字");
scanf("%d%d",&a,&b);
if(a>b)
	{
	printf("最大值是:%d",a);
	}else
		{
		printf("最大值是:%d",b);
		}
}

/*
{
int a;
printf("请输入一个数字");
scanf("%d",&a);
if(a%5==0)
{
printf("输入的整数能被5整除\n");
}else
{
	printf("输入的整数不能被5整除\n");
}
}
*/
/*
{
int year;
printf("请输入年份\n");
scanf("%d",&year);
if((year%4==0&&year%100!=0||year%400==0)!=0)//((year%4==0&&year%100!=0)||year%400==0)
{printf("%d年是闰年\n",year);}
else{printf("%d年不是闰年\n",year);}
}
*/
/*
{
int x,y;
printf("请输入x的值\n");
scanf("%d",&x);
if(x>=0&&x<2) y=x;
else if(x>=2&&x<4) y=2*x-2;
else y=3*x-6;
printf("当x取%d时，y的值为%d\n",x,y);
}
*/
/*
{
int a,b;
scanf("%d%d",&a,&b);
if(a==b) printf("a=b");
else if(a>b) printf("a>b");
else printf("a<b");
}
*/
/*
{
int score1,score2;
printf("请输入理论成绩和实践成绩\n");
scanf("%d%d",&score1,&score2);//score1:理论成绩 score2:实践成绩
if(score1>=60&&score2>=60) printf("你过关\n");
else if(score1>=60&&score2<60) printf("请加强实践知识学习\n");
else if (score1<60&&score2>=60) printf("请加强理论知识学习\n");
else printf("请加强理论和实践知识学习\n");
}
*/
/*
{
int month;
printf("请输入月份\n");
scanf("%d",&month);
if(month>=3&&month<=5) printf("这个月份是春季\n");
else if(month>=6&&month<=8) printf("这个月份是夏季\n");
else if(month>=9&&month<=11) printf("这个月份是秋季\n");
else if(month=12||month<=2&&month>0) printf("这个月份是冬季\n");
else printf("请输入正确的月份！\n");
}
*/
/*
{
int a,b,c;
printf("请输入三个整数\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b==c) printf("这三个数都相等\n");
}
*/

/*
#include <stdio.h>
int main()
{
	printf("%d\n",sizeof("CHINA"));
	return 0;
}
*/


/*#include <stdio.h>

int main()
{
	char str [] = "china";

	printf("%d\n", sizeof(str));


	return 0;
}
*/


/*#include <stdio.h>
int main()
{
	//printf("%d\n",sizeof(char));
	//return 0;
	int a1=12,a2=34,a3=56,a4=123,a5=123,a6=123;
	float f1=1.23F,f2=-45.789F;
	char c1='a',c2='b';
	printf("a1=%d,a2=%d,a3=%d\n",a1,a2,a3);
	printf("a4=%d,a5=%d,a6=%d\n",a4,a5,a6);
	printf("f1=%f,f2=%f\n",f1,f2);
	printf("c1='%c',c2='%c'\n",c1,c2);
}
*/


/*
#include <stdio.h>
int main ()
{
	int a=917,bai1,shi1,ge1;
	int	b=4658,qian,bai2,shi2,ge2;
	bai1 = a/100;
	ge1 = a%10;
	a = a/10;
	shi1 = a%10;
	qian = b/1000;
	bai2 = (b/100)%10;
	shi2 = (b/10)%10;
	ge2 = b%10;
	printf("917对应的个，十，百位分别为：\n");
	printf("个位 =%d\n",ge1);
	printf("十位 =%d\n",shi1);
	printf("百位 =%d\n",bai1);
	printf("4658对应的个，十，百，千位分别为：\n");
	printf("个位 = %d\n",ge2);
	printf("十位 = %d\n",shi2);
	printf("百位 = %d\n",bai2);
	printf("千位 = %d\n",qian);
}
*/


/*
#include <stdio.h>
int main ()
{
	int a=7;
	float x=2.5,y=4.7;
	printf("%f\n",x+a%3*(int)(x+y)%2/4);

}
*/

#include <stdio.h>
int main()
{
	int a = 45, b = 20;
	printf("班级人数：%d\n", a);
	printf("优秀人数：%d\n", b);
	printf("优秀率：%.2f%%\n", (float/*double*/)b * 100 / a);
}

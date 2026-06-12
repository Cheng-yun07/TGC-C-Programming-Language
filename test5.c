/*
#include <stdio.h>
int main ()
{ 
char c1,c2,c3,c4,c5;
printf("请输入字符：");
c1 = getchar();
c2 = getchar();
c3 = getchar();
c4 = getchar();
c5 = getchar();
putchar(c1);
putchar('\n');
putchar(c2);
putchar('\n');
putchar(c3);
putchar('\n');
putchar(c4);
putchar('\n');
putchar(c5);
putchar('\n');
}
*/



#include <stdio.h>
int main ()
{ 
char name[50];
char sex;
int age;
float height;
printf("请输入你的姓名:\n");
scanf("%s",&name);
getchar();
printf("请输入你的性别:\n");
scanf("%c",&sex);
printf("请输入你的年龄:\n");
scanf("%d",&age);
printf("请输入你的身高:\n");
scanf("%f",&height);
printf("你的姓名是:%s\n",name);
printf("你的性别是:%c\n",sex);
printf("你的年龄是:%d\n",age);
printf("你的身高是:%.2f\n",height);
}
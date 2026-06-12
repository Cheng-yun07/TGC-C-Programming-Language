#include <stdio.h>
int mod_3(int x);
int main ()
{
    int str[5];
    int i;
    int a=0;
    printf("请输入五个正整数\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&str[i]);
    }
    for(i=0;i<5;i++)
    {
    a=mod_3(str[i]);
    printf("%d和3取余的结果是%d\n",str[i],a);
    }
}
int mod_3(int x)
{
    return(x%3);
}
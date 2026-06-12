#include <stdio.h>
double ave(float score[],int n);
int main ()
{
    float score[5];
    int i;
    double a=0;
    printf("请输入五个学生的语文成绩\n");
    for(i=0;i<5;i++)
    {
    scanf("%f",&score[i]);
    }
    ave(score,5);
    printf("五位学生的平均语文成绩为%.1f\n",ave(score,5));
}
double ave(float score[],int n)
{
    float sum=0.0;
    int i;
    for(i=0;i<n;i++)
    {
    sum+=score[i];
    }
    return(sum/5.0);
}

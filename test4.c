/*
#include <stdio.h>
int main ()
{ 
int a,b,c;
printf ("a=%d\n",a=b=c=3);
}
*/


/*
#include <stdio.h>
int main ()
{ 
int a=6;
printf("%d\n",a+=a-=a*a);
}
*/


/*
#include <stdio.h>
int main ()
{ 
int a=3,b=2,c=1;
printf("a=%d,b=%d,c=%d\n",a,b,c);
printf("关系表达式的值：1为真，0为假\n");
printf("a>b：%d\n",a>b);//1
printf("a>b+c：%d\n",a>b+c);//0
printf("a!=b+c：%d\n",a!=b+c);//0
printf("a>b>c：%d\n",a>b>c);//0
printf("a>b=c：%d\n",a>b==c);//1
return 0;
}
*/



/*
#include <stdio.h>
int main ()
{ 
int a=3,b=2,c=1,d=0,e=0;
char c1='a',c2='b';
printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
printf("c1='%c',c2='%c'\n",c1,c2);
printf("%d\n,a&&b");
printf("%d\n,c&&d");
}
*/


/*
#include <stdio.h>
int main ()
{ 
unsigned char a,b,c,r1,r2,r3,r4,r5,r6;
a=0x23;b=0x45,c=0x55;
r1=a&b;r2=a|b;r3=a^b;r4=~c;r5=a<<3;r6=a>>3;
printf("a=0x%x,b=0x%x,c=0x%x\n",a,b,c);
printf("a&b=0x%x\n",r1);
printf("a|b=0x%x\n",r2);
printf("a^b=0x%x\n",r3);
printf("~c=0x%x\n",r4);
printf("a<<3=0x%x\n",r5);
printf("a>>3=0x%x\n",r6);
}
*/



#include <stdio.h>
int main ()
{ 
double f;
f=((3.0,4.0,5.0),(2.0,1.0,0.0));
printf("f=%.1f\n",f);
}
/*
#include<stdio.h>
//#define PI 3.1415926535
int main ()
{
	double PI = 3.1415926535;
	printf("%.10lf\n",PI);
	return 0;
}



#include<stdio.h>
#define PI 3.14159

int main()
{
    int i;
    i = 1234;
    printf("ÕâÊÇÎÒÐ´µÄµÚ¶þ¸öC³ÌÐò\n");
    
    printf("i=%d\n", i);
    
    printf("i=%f\n", (double)i);
    
    printf("PI=%f\n", PI);

    /*
    unsigned char a;
    char b,c;
    unsigned short int d;
    short int e,f;
    a=0xff;b=0xff;c=-1;d=0xffff;e=0xffff;f=-1;
    printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",d,e,f);

    return 0; 
}
*/





#include<stdio.h>
int main()
{ 
	char c1,c2;
	c1='a';c2='b';
	c1=c1-32;c2=c2-32;
	printf("%c,%c\n",c1,c2);
	return 0;

}
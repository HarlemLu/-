#include<stdio.h>

int f(void);

int gAll=12;

int main(int argc,char const*argv[])
{
	printf("gAll=%d\n",gAll);
	f();
	printf("gAll=%d\n",gAll);
	return 0;
}

int f(void)
{
	printf("gAll=%d\n",gAll);
	gAll+=2;
	printf("gAll=%d\n",gAll);
	return gAll;
}

#include<stdio.h>

int f(void);

int gAll=12;

int main(int argc,char const*argv[])
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int all=1;
	printf("all=%d\n",all);
	all+=2;
	printf("all=%d\n",all);
	return all;
}

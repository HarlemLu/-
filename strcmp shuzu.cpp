#include<stdio.h>
#include<string.h>

int mycmp(const char*s1,const char*s2)
{
	int idx=0;
	while(s1[idx]==s2[idx]&&s1[idx]!='\0'){
		idx++;
	}
	return s1[idx]-s2[idx];
}

int main(int argt,char const *argv[])
{
	char s1[]="abc";
	char s2[]="bbc";
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;                           
}

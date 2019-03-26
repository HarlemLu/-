#include<stdio.h>
#include<string.h>

int mycmp(const char*s1,const char*s2)
{

   while( *s1==*s2&&*s1!='\0'){
   	   s1++;
       s2++;
   }
   return *s1-*s2;
}

int main(int argt,char const *argv[])
{
	char s1[]="abc";
	char s2[]="bbc";
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;                           
}

#include<stdio.h>
int main()
{struct Student
  {long int num;
   char name[20];
   char sex;
   char addr[20];
  }a={1642062113,"Lu Tao",'M',"555 Wangjiang Road"};
  printf("NO.:%1d\nname:%s\nsex:%c\naddress:%s\n",a.num,a.name,a.sex,a.addr);
  return 0;
}

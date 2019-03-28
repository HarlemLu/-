#include<stdio.h>
void printn(int N)
{
    int i;
    for(i =1;i<=N;i++)
    {
        printf("%d\n",i);
    }
    return;
}
int main ()
{
    printn(100000000000);
    return 0 ;
}

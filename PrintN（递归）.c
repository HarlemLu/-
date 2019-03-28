#include<stdio.h>
void printn(int N)
{if(N) {
        printn(N-1);
        printf("%d\n",N);
}
    return;
}
int main ()
{
    printn(10000);
    return 0 ;
}

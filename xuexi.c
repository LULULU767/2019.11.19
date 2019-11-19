#include<stdio.h>
int main (void)
{
    int f1,f2,f3,i;
    f1=1,f2=1;
    printf("%d %d",f1 ,f2);
    for(i=3;i<=20;i++)
    {
        f3=f1+f2;
        printf(" %d", f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}
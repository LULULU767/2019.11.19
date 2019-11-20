#include <stdio.h>
int main (void)
{
    int n,a,sum=0,i,b;
    printf("Enter n,a:\n");
    scanf("%d,%d",&n,&a);
    b=a;
    for(i=1;i<=n;i++){
        sum=sum+a;
        a=a*10+b;
    }
    printf("Sum is  %d.",sum);
    return 0;
}
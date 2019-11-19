#include<stdio.h>
int main (void)
{
    double fac=1,term,n,i,e=1;
    printf("Enter n:");
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
        fac=fac*i;
        term=1.0/fac;
        e=term+e;
    }
    printf("e is %lf.",e);
    return 0;
}
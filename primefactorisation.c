#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int a[1000000],noprimes;
void primegeneration(long long int n)
{
    long long int i,j;
    if(n>=2)
    {
        a[0]=2;
        noprimes=1;
        for(i=3;i<=n;i++)
        {
            for(j=0;j<noprimes;j++)
                if(i%a[j]==0)
                    break;
            if(j==noprimes)
                a[noprimes++]=i;
        }
    }
    
}
int prime(long long int n)
{
    long long int i;
    for(i=0;i<noprimes && a[i]<= sqrt(n);i++)
        if(n%a[i]==0)
            return 0;
    return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int n,i;
    scanf("%lld",&n);
    primegeneration(sqrt(n));
    while(!prime(n))
    {
        for(i=0;i<=noprimes;i++)
            if(n%a[i]==0)
            {
                printf("%lld ",a[i]);
                n/=a[i];
                break;
            }
    }
    printf("%lld",n);
    return 0;
}

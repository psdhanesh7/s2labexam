#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int a[1000000],noprimes;
void primegeneration(long long int n)
{
    long long int i,j,prime;
    if(n>=2)
    {
        a[0]=2;
        noprimes=1;
        for(i=3;i<=n;i++)
        {
		prime=1;
            for(j=0;a[j]<sqrt(i);j++)
                if(i%a[j]==0)
                {
			prime=0;
			break;
		}
            if(prime)
                a[noprimes++]=i;
        }
    }
    
}
int prime(long long int n)
{
    long long int i,sq=sqrt(n);
    for(i=0;a[i]<=sq;i++)
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

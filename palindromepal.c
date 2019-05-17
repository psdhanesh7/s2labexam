#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int palindrome(unsigned long long int n)
{
    unsigned long long int sum=0,t=n,d;
    while(n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n/=10;
    }
    if(sum==t)
        return 1;
    return 0;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int i,*n;
    n=(unsigned long long int *)malloc(sizeof(unsigned long long int));
    scanf("%lld",n);
    if(palindrome(*n))
        printf("no pal");
    else
    {
        for(i=1;;i++)
        {
            if(palindrome(*n+i)&& (!palindrome(*n-i)))
            {      
                printf("%lld",*n+i);
                break;
            }
            else if(palindrome(*n-i))
            {
                printf("%lld",*n-i);
                break;
            }
        }
    }
    return 0;
}


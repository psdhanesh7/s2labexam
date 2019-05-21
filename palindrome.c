#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int palindrome(long int n)
{
    long int s=n,d,r=0;
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(s==r)
        return 1;
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
    scanf("%ld",&n);
    if(palindrome(n))
        printf("1");
    else printf("0");
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int power(int x,int n)
{
    if(n==0)
        return 1;
    else
        return x*power(x,n-1);
    
}
int nod(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
int armstrong(int n,int nodigits)
{
    int t=n,d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum+=power(d,nodigits);
        n/=10;
    }
    if(t==sum)
        return 1;
    return 0;
}

int noarmstrong(int n1,int n2)
{
    int i,count=0;
    for(i=n1;i<=n2;i++)
        if(armstrong(i,nod(i)))
            count++;
    return count;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,armbtw1ton,armbtwnton2;
    //printf("Enter the value of n:");
    scanf("%d",&n);
    armbtw1ton=noarmstrong(1,n);
    armbtwnton2=noarmstrong(n,n*n);
    printf("%d",armbtw1ton-armbtwnton2);
    
    return 0;
}


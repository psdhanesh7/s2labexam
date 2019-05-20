#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int nodigits(long int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}
long int smallest(int a[],long int n)
{
    long int i,small=a[0],pos=0;
    for(i=0;i<n;i++)
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    return pos;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT*/
    long int i,j,nod,n,pos,small,temp;
    int a[1000000];
    scanf("%ld",&n);
    nod=nodigits(n);
    for(i=nod-1;i>=0;i--)
    {
        a[i]=n%10;
        n/=10;
    }
    for(i=0;i<nod;i++)
    {
        for(j=i;j<nod-1;j++)
            if(a[j]<a[j+1])
                break;
        if(j==nod-1)
        {
            pos=i-1;
            break;
        }
        
    }
    if(pos==-1)
        printf("-1");
    else
    {
        

        temp=a[nod-1];
        a[nod-1]=a[pos];
        a[pos]=temp;
        for(j=pos+1;j<nod-1;j++)
        {
            small=j+smallest(&a[j],nod-j);
            if(j!=small)
            {
                temp=a[small];
                a[small]=a[j];
                a[j]=temp;
            }

        }
        for(i=0;i<nod;i++)
            printf("%d",a[i]);
    }
        return 0;
}


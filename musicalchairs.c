#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swapanticlockwise(int a[],long int n)
{
    int i,temp=a[n-1];
    for(i=n-1;i>0;i--)
        a[i]=a[i-1];
    a[0]=temp;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int nostudents,i,j,k;
    int norounds,chairno[1000000],kforeachround[1000000];
    scanf("%ld",&nostudents);
    scanf("%d",&norounds);
    for(i=0;i<nostudents;i++)
        scanf("%d",&chairno[i]);
    for(i=0;i<norounds;i++)
        scanf("%d",&kforeachround[i]);
    for(i=0;i<norounds;i++)
    {
        for(j=1;j<=kforeachround[i];j++)
             swapanticlockwise(chairno,nostudents);
        for(j=0;j<nostudents;j++)
            printf("%d ",chairno[j]);
        printf("\n");
    }
    
    return 0;
}


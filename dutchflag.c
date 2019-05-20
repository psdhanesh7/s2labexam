#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[1000000],n,i,j;
    int static b[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            b[0]++;
        else if(a[i]==1)
            b[1]++;
        else if(a[i]==2)
            b[2]++;
    }
    for(i=0;i<3;i++)
        for(j=0;j<b[i];j++)
            printf("%d",i);
    return 0;
}


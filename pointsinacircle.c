#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float distance(float a[],float x,float y)
{
    return (float)sqrt((a[0]-x)*(a[0]-x)+(a[1]-y)*(a[1]-y));
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float a[1000000][2],r,x,y;
    int n,i,present=0;
    scanf("%f",&r);
    scanf("%d",&n);
    scanf("%f %f",&x,&y);
    for(i=0;i<n;i++)
        scanf("%f %f",&a[i][0],&a[i][1]);
    for(i=0;i<n;i++)
        if(distance(a[i],x,y)<=r)
        {
            printf("%d ",i);
            present=1;
        }
    if(!present)
        printf("-1");
            
    
    return 0;
}


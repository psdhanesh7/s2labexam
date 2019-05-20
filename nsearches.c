#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 1000000
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
}
int binarysearch(int a[],int n,int num)
{
    int top=0,bottom=n-1,middle;
    while(top<=bottom)
    {
        middle=(top+bottom)/2;
        if(a[middle]==num)
            return middle;
        else if(num<a[middle])
            bottom=middle-1;
        else 
            top=middle+1;
    }
    return -1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[max],b[max],m,n,i;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    bubblesort(a,m);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d ",binarysearch(a,m,b[i]));
    return 0;
}

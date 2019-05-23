#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int front=-1,rear=-1;
int enqueue(int a[],int size,int value)
{
    if((front==0 && rear==size-1) || rear==front-1)
        return -1;
    else if(front ==-1)
    {
        front=rear=0;
        a[front]=value;
    }
    else if(rear==size-1)
    {
        rear=0;
        a[rear]=value;
    }
    else
        a[++rear]=value;
    return 0;
}
int dequeue(int a[],int size)
{
    if(front==-1)
        return -1;
    else if(front==rear)
        front=rear=-1;
    else if(front==size-1)
        front=0;
    else
        front++;
    return 0;
}
void display(int a[],int size)
{
    int i;
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
            printf("%d ",a[i]);
    }
    else
    {
        for(i=front;i<=size-1;i++)
            printf("%d ",a[i]);
        for(i=0;i<=rear;i++)
            printf("%d ",a[i]);
    }
    printf("\n");
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int value,size,choice,a[1000000];
    scanf("%d",&size);
    while(1)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            scanf("%d",&value);
            printf("%d\n",enqueue(a,size,value));
        }
        else if(choice==2)
            printf("%d\n",dequeue(a,size));
        else if(choice==3)
            display(a,size);
        else if(choice==4)
            break;
    }
    return 0;
}


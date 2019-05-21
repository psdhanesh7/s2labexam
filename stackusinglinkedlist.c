#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    long int item;
    struct node *link;
}*list,*p;
int push(void)
{
    long int n;
    p=(struct node *)malloc(sizeof(struct node));
    scanf("%ld",&n);
    p->item=n;
    p->link=list;
    list=p;
    return 0;
}
int pop()
{
    if(list==NULL)
        return -1;
    else
    {
        p=list;
        list=list->link;
        free(p);
        return 0;
    }
    
}
long int top()
{
    if(list==NULL)
        return -1;
    else
        return list->item;
}
void display()
{
    p=list;
    while(p!=NULL)
    {
        printf("%ld ",p->item);
        p=p->link;
    }
    printf("\n");
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int choice;
    list=NULL;
    while(1)
    {
        scanf("%d",&choice);
        if(choice==1)
            printf("%d\n",push());
        else if(choice==2)
            printf("%d\n",pop());
        else if(choice==3)
            printf("%ld\n",top());
        else if(choice==4)
            if(list==NULL)
                printf("-1\n");
            else 
                display();
        else if(choice==5)
            break;
    }
    return 0;
}


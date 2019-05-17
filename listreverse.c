#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    int item;
    struct node* link;
}*list,*p;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,num;
    scanf("%d",&n);
    list=NULL;
    for(i=1;i<=n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->link=list;
        scanf("%d",&num);
        list=p;
        list->item=num;
    }
    while(list!=NULL)
    {
        printf("%d\n",list->item);
        p=list;
        list=list->link;
        free(p);
    }
    return 0;
}

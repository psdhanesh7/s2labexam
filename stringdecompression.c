#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char string[100000],decoded[10000000],ch;
    int i,j;
    scanf(" %s",string);
    int p1,p2=0,sum;
    for(p1=0;string[p1]!='\0';)
    {   
        sum=0;
        ch=string[p1];
        if(isdigit(string[p1+1]))
        {
            for(j=p1+1;isdigit(string[j]);j++)
            {
                sum=sum*10+(int)(string[j]-'0');
                p1++;
            }
            p1++;
            for(i=0;i<sum;i++)
                decoded[p2++]=ch;
        }
        else 
        {
             decoded[p2++]=ch;
                p1++;
        }   
    }
    printf("%s",decoded);
    
    return 0;
}


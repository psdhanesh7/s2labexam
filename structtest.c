#include<stdio.h>
#include<stdlib.h>

struct alphabet{
	char al;
	int count,pos;
};
void bubblesortcount(struct alphabet s[])
{
	int i,j;
	for(i=0;i<25;i++)
		for(j=0;j<25-i;j++)
			if(s[j].count<s[j+1].count)
			{
				struct alphabet temp;
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
}
void bubblesortpos(struct alphabet s[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(s[j].pos>s[j+1].pos)
			{
				struct alphabet temp;
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
}
void main()
{
	static struct alphabet s[26];
	char *p,ch;
	long int n,i;
	int j,l;
	printf("Enter the number of characters in the string:");
	scanf("%ld",&n);
	p=(char *)malloc((n+1)*sizeof(char));
	printf("Enter the string:");
	scanf(" %s",p);
	for(i=0;*(p+i)!='\0';i++)
	{
		l=(int)(*(p+i)-'A');
		if(!s[l].count)
		{
			s[l].al='A'+l;
			s[l].pos=i;
		}
		s[l].count++;
	}
	bubblesortcount(s);
	i=0;
	while(s[i].count && i<26)
	{
		j=1;
		while(s[i].count==s[i+j].count && (i+j)<26)
			j++;
		bubblesortpos(&s[i],j);
		i+=j;
	}
	for(i=0;s[i].count!=0;i++)
		printf("%c",s[i].al);
	printf("\n");
}

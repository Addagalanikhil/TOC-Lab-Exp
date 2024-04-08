#include<stdio.h>
#include<string.h>
#define MAX 50

int main()
{
int i,flag = 1,l;
char s[MAX];
	
printf("enter a string to check:");
scanf("%s",s);
l=strlen(s);

for(i=0;i<l;i++)
{
if(s[i]!='0' && s[i]!='1')
{
flag=0;
}
}

if(flag!=1)
printf("string is Not Valid\n");
if(flag==1)
{
if (s[0]=='0'&&s[l-1]=='0')
printf("string is accepted\n");
else
printf("string is Not accepted\n");
}

if (flag == 1)
{
if (s[0]=='1'&&s[l-1]=='1')
printf("string is accepted\n");
else
printf("string is Not accepted\n");
}
}

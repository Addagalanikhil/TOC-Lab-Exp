#include<stdio.h>
#include<string.h>
#define MAX 50
int main(){
char s[MAX];
int i,flag=1;
int l;

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
if (s[0]=='1'&&s[l-2]=='0' && s[l-1]=='1')
printf("string is accepted\n");
else
printf("string is Not accepted\n");
}
}


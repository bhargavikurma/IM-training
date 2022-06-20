#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char line[500],ch;
    printf("enter the string");
    scanf("%c",line);
    printf("enter the character");
    scanf("%c",&ch);
    
    for(i=0;i<strlen(line);i++)
    {
        if(ch==line[i])
        count=count+1;
    }
printf(the frequency is %c is %d ",ch,count);

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    FILE*fp=fopen("test.txt","r");
    int ch;
    while((ch=fgetc(fp))!=EOF)
    {
        
        ch=toupper(ch);
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
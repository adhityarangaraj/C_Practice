#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    FILE*fp=fopen("data.txt","w");
    int n;
    printf("No of words u wish to type:");
    scanf("%d",&n);
    char*str=malloc((n*sizeof(int)+1));
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,'\n')]='\0';
    fprintf(fp,"%s\n",str);
    fclose(fp);
    free(str);
    fp=fopen("data.txt","r");
    char ch,str1[n];
    while(fgetc(ch)!=EOF)
    {
        ch=toupper(ch);
    }
    while(fgets(str1,sizeof(str1),fp))
    {
        printf("%s",str1);
    }
    fclose(fp);
    return 0;
}
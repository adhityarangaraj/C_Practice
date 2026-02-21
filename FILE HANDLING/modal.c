#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the no of names u want to enter:");
    scanf("%d",&n);
    while(getchar()!='\n');
    char str[n][100];
    for(int i=0;i<n;i++)
    {
        printf("Enter Name %d:",i+1);
        fgets(str[i],100,stdin);
        str[i][strcspn(str[i],"\n")]='\0';
    }
    for(int j=0;j<n;j++)
    {
        puts(str[j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                char temp[100];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);

            }
        }
    }
     for(int j=0;j<n;j++)
    {
        puts(str[j]);
    }
    return 0;
    }
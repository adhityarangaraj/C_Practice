#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() 
{
    char test[100],rev[100];
    int j=0,i;
    printf("Enter a string to test:");
    scanf("%[^\n]%*c",test);
    for( i=strlen(test)-1;i>=0;i--,j++)
    {
        test[i]=tolower(test[i]);
        rev[j] = test[i];
    }
    rev[j] ='\0'; 
   
    int res=strcmp(test,rev);
    if(res==0)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
    
       
   

    return 0;
}
#include <stdio.h>
#include <string.h>
int main() 
{
    char test[100];
    int j=0;
    printf("Enter a string to test:");
    fgets(test,sizeof(test),stdin);
    for(int i=strlen(test)-1;i>=(strlen(test)/2);i--,j++)
    {
        int temp=test[i];
        test[i]=test[j];
        test[j]=temp;
    }
    printf("The rev of str is %s\n",test);

    return 0;
}
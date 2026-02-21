#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,tot=0;
    float avg;
    printf("No of days :");
    scanf("%d",&n);
    int books[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter No of books on Day %d:",i+1);
        scanf("%d",&books[i]);
    }
    FILE*fp=fopen("books.txt","w");
    if(fp==NULL)
        return 1;
    fprintf(fp,"No of books for %d days:\n",n);
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d ",books[i]);
    }
    fclose(fp);
    fp=fopen("books.txt","r");
    int temp[n];
    char str[1000];
    while(fgets(str,1000,fp)!=NULL)
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d",&temp[i]);
        tot+=temp[i];
    }
    avg=(float)tot/n;
    printf("Total no of books is :%d\n",tot);
    printf("Average no of books is :%f\n",avg);
    fclose(fp);
    
    return 0;
}
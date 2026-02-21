#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    printf("No of sales :");
    scanf("%d",&n);
    int sales[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Sales Amt for sale %d:",i+1);
        scanf("%d",&sales[i]);
    }
    FILE*fp=fopen("sales.txt","w");
    if(fp==NULL)
        return 1;
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d\t",sales[i]);
    }
    fclose(fp);
    fp=fopen("sales.txt","r");
    if(fp==NULL)
        return 1;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"\t%d",&temp[i]);
    }
    int max=temp[0],min=temp[0],total=0;
    for(int i=0;i<n;i++)
    {
        if(max<temp[i])
            max=temp[i];
        if(min>temp[i])
            min=temp[i];
        total+=temp[i];
    }
    printf("Max:%d\n",max);
    printf("Min:%d\n",min);
    printf("Total:%d\n",total);
    fclose(fp);
    return 0;

}
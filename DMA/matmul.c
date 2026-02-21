#include<stdio.h>
#include<stdlib.h>
void add(int**arr1,int**arr2,int**res,int r1,int c1,int r2,int c2)
{
    if(r1!=r2&&c1!=c2)
    {
        printf("Not comaptible for mat add\n");
        return;
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //PRINT WILL BE ADDED LATER WITH A DO WHILE ISK PATTERN IF THIS WORKS 
}
void mul(int**arr1,int**arr2,int**res,int r1,int c1,int r2,int c2)
{
    if(c1!=r2)
    {
        printf("Not compatible for mat mul\n");
        return;
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
     //PRINT WILL BE ADDED LATER WITH A DO WHILE ISK PATTERN IF THIS WORKS
}
int main()
{
    int r1,c1,r2,c2;
    printf("Enter rows and col of matrix1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and col of matrix2:");
    scanf("%d %d",&r2,&c2);
    int**arr1=malloc(r1*sizeof(int*));
    int**arr2=malloc(r2*sizeof(int*));
    if(arr1==NULL||arr2==NULL)
        return 1;
    for(int i=0;i<r1;i++)
    {
        arr1[i]=malloc(c1*sizeof(int));
        if(arr1[i]==NULL)
            return 1;
    }
    for(int j=0;j<r2;j++)
    {
        arr2[j]=malloc(c2*sizeof(int));
        if(arr2[j]==NULL)
            return 1;
    }
    int**res=calloc(r1,sizeof(int*));
    if(res==NULL)
        return 1;
    for(int i=0;i<r1;i++)
    {
        res[i]=calloc(c2,sizeof(int));
        if(res[i]==NULL)
            return 1;
    }
    printf("For Matrix 1:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("arr1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("For Matrix 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    return 0;
}
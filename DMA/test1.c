#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    printf("Enter rows and col of matrix:");
    scanf("%d %d",&r,&c);
    int **arr = malloc(r * sizeof(int*));
    if(arr == NULL)
        return 1;

    for(int i = 0; i < r; i++)
    {
        arr[i] = malloc(c * sizeof(int));
        if(arr[i] == NULL)
            return 1;
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements are:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
        free(arr[i]);
    free(arr);

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubblesort(int row,int cl,int arr[row][cl])
{
    int temp,c;
    for(int k=0;k<row;k++)
    {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cl-1;j++)
        {
            if(arr[i][j]>arr[i][j+1])
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
            }
        }
    }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<cl;j++)
        {
            printf("%d ",arr[i][j]);
        }

    }
}
int main() 
{
    srand(time(NULL));
    int rows,col;
    printf("NOTE:INCASE IT GOES BEYOND 4 WILL AUTO ASSIGN FOR THIS ONE TO NOT WASTE TIME INPUTTING\nEnter the rows and col. of ur matrix:");
    scanf("%d %d",&rows,&col);
    int arr[rows][col];
    if(rows>=4||col>=4)
    {
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                arr[i][j]=rand()%13;
            }
        }
    }
    else 
    {
         for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                printf("Enter value for arr[%d][%d]=",i,j);
                scanf("%d",&arr[i][j]);
                
                
            }
        }
        
    }
    bubblesort(rows,col,arr);
   // printf("Maximum value in the array is :%d\n",)
    return 0;
}
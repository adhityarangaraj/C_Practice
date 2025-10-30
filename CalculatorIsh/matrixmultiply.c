#include <stdio.h>

int main() 
{
  int row1,col1,row2,col2;
  printf("Enter the rows and col. of first matrix:");
  scanf("%d %d",&row1,&col1);
  printf("Enter the rows and col. of second matrix:");
  scanf("%d %d",&row2,&col2);
  int arr1[row1][col1];
  int arr2[row2][col2];
  if(col1!=row2)
  {
      printf("Cannot be multiplied\n");
      return 0;
  }
  int res[row1][col2]={0};
  for(int i=0;i<row1;i++)
  {
      for(int j=0;j<col1;j++)
      {
          printf("Enter value for arr1[%d][%d]=",i,j);
          scanf("%d",&arr1[i][j]);
      }
  }
  for(int i=0;i<row2;i++)
  {
      for(int j=0;j<col2;j++)
      {
          printf("Enter value for arr2[%d][%d]=",i,j);
          scanf("%d",&arr2[i][j]);
      }
  }
  for(int i=0;i<row1;i++)
  {
      for(int j=0;j<col2;j++)
      {
          for(int k=0;k<col1;k++)
          {
              res[i][j]+=arr1[i][k]*arr2[k][j];
          }
      }
  }
   for(int i=0;i<row1;i++)
  {
      for(int j=0;j<col2;j++)
      {
          printf("%d ",res[i][j]);
      }
  }

    return 0;
}

#include <stdio.h>
void arr1()
{
    int arr1[6]={1,2,3};
    for(int i=3;i<6;i++)
    {
        printf("Enter the remaining elements one by one:");
        scanf("%d",&arr1[i]); 
    }
    for(int j=0;j<6;j++)
    {
        printf("%d\n",arr1[j]);
    }
        
}
void sum()
{   
    int sum=0;
   int arr1[6]={1,2,3,4,5,6};
    for(int j=0;j<6;j++)
    {
        
        sum=sum+arr1[j];
    }printf("Sum is %d\n",sum);
}
void min()
{
   int arr1[6]={1,2,3,4,5,6};
   int max=arr1[0],min=arr1[0];
    for(int j=0;j<6;j++)
    {
        if(max<arr1[j])
            max=arr1[j];
        else if(min>arr1[j])
            min=arr1[j];
    }printf("Max and Min=%d and %d\n",max,min);
   
}
void rev()
{
  int arr1[6]={1,2,3,4,5,6};
  for(int i=5;i>=0;i--)
      printf("%d",arr1[i]);
  printf("\n");    
}
void search()
{
    int arr1[6]={1,2,3,4,5,6};
    int n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int j=0;j<6;j++)
    {
        if(n==arr1[j]){
            printf("The no is found at arr[%d]\n",j);
            break; 
        }
           
        c++;    
        
    }
    if(c>=6)
        printf("The no is not found\n");
    
}
int main() 
{
    
    arr1();
    sum();
    min();
    rev();
    search();
    return 0;
}
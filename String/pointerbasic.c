#include <stdio.h>
void rev(int num,int arr1[num])
{
    int *a=arr1;
    int k;
    for(int i=0;i<num/2;i++)
    {
        k=*(a+i);
        *(a+i)=*(a+(num-1-i));
        *(a+(num-1-i))=k;
    }
    printf("\n Reverse of the Array is [");
    for(int j=0;j<num;j++)
    {
        printf("%d",arr1[j]);
        if(j<num-1)
            printf(",");
        
    }
    printf("]\n");
}
int main() 
{
    int n;
    printf("Enter how many elemnets do u want the array to have:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray is [");
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
        if(j<n-1)
            printf(",");
        
    }
    printf("]\n");
    rev(n,arr);
    

    return 0;
}
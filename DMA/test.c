#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,n1;
    printf("Enter no of elements of array:");
    scanf("%d",&n);
    int *arr=calloc(n,sizeof(int));
    if(arr==NULL)
        return 1;
    for(int i=0;i<n;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int max=arr[0],max1=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max1=max;
            max=arr[i];
        }
        else if(max1<arr[i]&&arr[i]!=max)
            max1=arr[i];
    }
    printf("Largets and second is %d and %d\n",max,max1);
    printf("Enter the expanded size of array:");
    scanf("%d",&n1);
    int*temp=realloc(arr,n1*sizeof(int));
    if(temp!=NULL)
        arr=temp;
    else
        return 1;
    for(int i=n;i<n1;i++)
    {
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n1;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
    free(arr);
    return 0;

}
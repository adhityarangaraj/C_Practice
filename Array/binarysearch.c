
#include <stdio.h>
int bin(int key,int arr[],int low,int high)
{
    int mid;
    mid=(low+high)/2;
    int c=0;
    if(low>high)
    {
        return 0;
    }
    else if(arr[mid]==key)
    {
        printf("Search element is found at index %d",mid);
        c++;
    }
    else if(arr[mid]>key)
    {
       high=mid-1;
       bin(key,arr,low,high);
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
        bin(key,arr,low,high);
    }
    return c;
}
int main() 
{
 int arr[10]={10,11,23,45,67,91,102,113,145,290};
 int low=0,key;
 int high=(sizeof(arr)/sizeof(arr[0]))-1;
 int mid=(low+high)/2;
 printf("Enter the search element to be searched:");
 scanf("%d",&key);
 int c=bin(key,arr,low,high);
 if(c==0)
    printf("Search element not found\n");

    return 0;
}
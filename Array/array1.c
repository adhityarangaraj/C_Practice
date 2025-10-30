
#include <stdio.h>
void rev(int arr[],int n)
{
    printf("Reverse of the array is {");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("}\n");
}
void sorting(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp,c=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                c++; 
            }
        }
        if(c==0)
            break;
    }
     
}
int main() 
{
    int num,i,ch,sum=0,pr=1;
    printf("Enter the number of elements in ur array:");
    scanf("%d",&num);
    int arr[num],sort[num];
    for(i=0;i<num;i++)
    {
        printf("Enter value for arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Array={");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
        sum=sum+arr[i];
        pr=pr*arr[i];
    }
    printf("}\n");
    for(i=0;i<num;i++)
    {
        sort[i]=arr[i];
    }
    sorting(sort,num);
    do
    {
        printf("Choose the op. which u wish to perform with the array:\n 1.Finding Max value\n 2.Finding min value\n 3.Reversal of array\n 4.Sum and product of array elements\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("The maximum value in the array is :%d\n",sort[num-1]);
                    break;
            case 2:
                    printf("The min. value is :%d\n",sort[0]);
                    break;
            case 3:
                    rev(arr,num);
                    break;
            case 4:
                    printf("The sum and product is %d and %d\n",sum,pr);
                    break;
            default:
                    printf("Invalid Choice\n");
                    break;
                    
        }
        printf("Press 1 to continue\n Press any other key to exit\n");
        scanf("%d",&ch);
    }while(ch==1);
    

    return 0;
}
#include <stdio.h>
int main() 
{
   int num,s=0;
   float avg;
   printf("Enter no of students:");
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++)
   {
       printf("Enter grade of student %d:",i+1);
       scanf("%d",&arr[i]);
       if(arr[i]<0||arr[i]>100)
       {
           printf("Invalid Input\n");
           i=i-1;
           continue;
       }
       s+=arr[i];
   }
   printf("Sum of total students grade is %d\n",s);
   avg=s/num;
   printf("Average grade of class is %f\n",avg);
    
    return 0;
}
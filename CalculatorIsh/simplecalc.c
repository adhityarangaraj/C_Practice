#include <stdio.h>
float add(float a,float b);
float sub(float a,float b);
float multi(float a,float b);
float divs(float a,float b);
int main() 
{
    int ch;
    do
    {
    
   printf("Enter the operation you want to perform:\n"
       "1. Addition\n"
       "2. Subtraction\n"
       "3. Multiplication\n"
       "4. Division\n\n");

       
    scanf("%d",&ch);
    if(ch<0||ch>4)
    {
        printf("\n\nInvalid Input\n\n");
        continue;
    }
    int num1,num2;
    float result=0;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    
    if(ch==1)
    {
    result = add(num1,num2);
    printf("Addition Result: %.2f\n\n", result);
    }
    else if(ch==2)
    {
    result = sub(num1,num2);
    printf("Subtraction Result: %.2f\n\n", result);
    }
    else if(ch==3)
    {
    result = multi(num1,num2);
    printf("Multiplication Result: %.2f\n\n", result);
    }
    else if(ch==4)
    {
    result = divs(num1,num2);
    printf("Division Result: %.2f\n\n", result);
    }
    
    printf("Press 5 to continue\n\n"
            "6 to exit\n\n");
    scanf("%d",&ch);
    }while(ch>0&&ch!=6);
    
    
    
    return 0;
    
}
float add(float x,float y)
    {
     return x+y;
    }
float sub(float x,float y)
{
    return x-y;
}
float multi(float x,float y)
    {
     return x*y;
    }
float divs(float x,float y)
    {
     return x/y;
    }
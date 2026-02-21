#include<stdio.h>
void reverse(int*x)
{
    int temp=*x,r;
    while(temp>0)
    {
        r=r*10+(temp%10);
        temp/=10;
    }
    *x=r;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    reverse(&temp);
    if(n==temp)
        printf("It is a palindrome\n");
    else
       printf("It is not a palindrome\n"); 
}
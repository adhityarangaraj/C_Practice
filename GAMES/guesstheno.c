#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

srand(time(NULL));
int secret = rand() % 20 + 1;
int num, count = 0;

printf("You will have 4 tries to guess the number the computer chose.\n\n");

while(count < 4)
{
    Label:
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 0 || num > 20)
    {
        printf("Invalid choice, repeat again\n\n");
        goto Label;   
    }

    count++;   

    if(num == secret)
    {
        printf("U are Correct WONDERFULL!!\n");
        break;
    }
    else if(num == secret-1 || num == secret+1)
    {
        printf("Very Very close\n\n");
    }
    else if(num == secret-2 || num == secret+2)
    {
        printf("Warm\n\n");
    }
    else if(num == secret-3 || num == secret+3)
    {
        printf("Somewhat warm ish\n\n");
    }
    else if(num == secret-4 || num == secret+4 || num == secret-5 || num == secret+5)
    {
        printf("Cold\n\n");
    }
    else if(num == secret-6 || num == secret+6 || num == secret-7 || num == secret+7)
    {
        printf("Very Cold\n\n");
    }
    else
    {
        printf("Nowhere Near\n\n");
    }

} 
if(count == 4 && num != secret)
{
    printf("\nYour turns are over LOSER\n");
    printf("The number is %d\n", secret);
}
return 0;
}
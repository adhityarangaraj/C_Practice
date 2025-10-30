#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int userbat(int user,int bat,int comp,int target)
{
    while(bat==1||bat==100)
    {
        int hand,ch;
        printf("Enter the runs if both throw the same hands u are out GL\n");
        scanf("%d",&hand);
        while(hand<11&&user<target)
        {
            
            //printf("%d\n",hand);
            ch=rand()%11;
            printf("%d\n",ch);
            if(hand<0)
            {
                user=user-5;
                printf("NO CHEATING BOZO\n");
            }
                
            else if(hand==ch)
            {
                printf("You are out\n");
                break;
            }
            
            else
            {
                user=user+hand;
            }
            if(user>=target)
                break;
            
            scanf("%d",&hand);
        }
        printf("The final score is %d\n",user);
        if(bat==1)
        {
           printf("The TARGET for the computer is %d\n",user+1);
           return user+1;
        }
            
        else if(bat==100)
        {
            if(user>comp+1)
                printf("Congraulautions You Won!!\n");
            else if(user==comp)
                printf("WELL FOUGHT DRAW!!\n");
            else if(user<comp)
                printf("YOU LOST TO A COMPUTER HAHA!\n");
        }
        
        
        break;
    }
    return 0;
}
int compbat(int comp,int bat,int user,int target)
{
    int hand,ch;
    while(bat==0||bat==1000)
    {
        printf("You are bowling throw the same hand as computer to end the innings\n");
        scanf("%d",&hand);
        while(hand<11)
        {
            //printf("%d\n",hand);
            ch=rand()%11;
            printf("%d\n",ch);
            if(hand<=0)
            {
                comp=comp+5;
                printf("NO CHEATING BOZO\n");
            }
                
            else if(hand==ch)
            {
                printf("You have taken the wicket\n");
                break;
            }
            else
            {
                comp=comp+ch;
            }
            if(comp>=target)
                break;
            scanf("%d",&hand);
           
        }
        printf("The final score of comp. is %d\n",comp);
        if(bat==0)
        {
            printf("The TARGET for the user is %d\n",comp+1);
            return comp+1;
        }
        else if(bat==1000)
        {
            if(user>comp+1)
                printf("Congraulautions You Won!!\n");
            else if(user==comp)
                printf("WELL FOUGHT DRAW!!\n");
            else if(user<comp)
                printf("YOU LOST TO A COMPUTER HAHA!\n");
        }
        
        break;
    }
    return 0;
}
int main() 
{
    unsigned int toss,hand;
    int bat,user=0,comp=0,target;//bat=1 if true else bat=0
    srand(time(NULL));
    printf("GAME OF HAND CRICKET BEGINS\n");
    printf("Lets start the toss\n ODD OR EVEN YOUR CALL\nPress 1 for ODD\n Press 2 for EVEN\n");
    scanf("%d",&toss);
    if(toss>=3||toss==0)
    {
        printf("Invalid Toss RESTART\n");
        return 0;
    }
    printf("Throw Hands\n");
    scanf("%d",&hand);
    unsigned int ch=rand()%11;
    if(hand>10)
        return 0;
    printf("The computer chose %d\n",ch);
    switch(toss)
    {
        
        case 1:
                if((hand+ch)%2==0)
                {
                    printf("The computer won the toss\n");
                    ch=rand()%2;
                    if(ch==0)
                    {
                        printf("The comp. won the toss and elected to bat first\n");
                        bat=0;
                    }
                    else
                    {
                        printf("The comp. won the toss and elected to bowl first\n");
                        bat=1;
                    }
                }
                else 
                {
                    printf("You won the toss\n Press 1 to Bowl and 0 to Bat ");
                    scanf("%d",&ch);
                    if(ch>1)
                    {
                    printf("Invalid Input\n");
                    return 0;
                    }
                    else if(ch==0)
                    {
                        printf("You chose to bat first\n");
                        bat=1;
                    }
                    else
                    {
                        printf("You chose to bowl first\n");
                        bat=0;
                    }
                
                }
                break;
        case 2:
                if((hand+ch)%2==0)
                {
                    printf("You won the toss\n Press 1 to Bowl and 0 to Bat ");
                    scanf("%d",&ch);
                    if(ch>1)
                    {
                    printf("Invalid Input\n");
                    return 0;
                    }
                    else if(ch==0)
                    {
                        printf("You chose to bat first\n");
                        bat=1;
                    }
                    else
                    {
                        printf("You chose to bowl first\n");
                        bat=0;
                    }
                }
                else
                {
                    printf("The computer won the toss\n");
                    ch=rand()%2;
                    if(ch==0)
                    {
                        printf("The comp. won the toss and elected to bat first\n");
                        bat=0;
                    }
                    else
                    {
                        printf("The comp. won the toss and elected to bowl first\n");
                        bat=1;
                    }
                
                }
                
                break;
    }
    while(bat==1)
    {
        target=userbat(user,bat,comp,10000000);
        bat=1000;
    }
    while(bat==0)
    {
        target=compbat(comp,bat,user,10000000);
        bat=100;
    }
    while(bat==1000)
    {
       compbat(comp,bat,user,target); 
       break;
    }
    while(bat==100)
    {
        userbat(user,bat,comp,target);
        break;
    }
    
    
    
    
    return 0;
}
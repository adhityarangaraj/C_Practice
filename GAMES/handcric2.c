#include <stdio.h>
#include<stdlib.h>
#include <time.h>
typedef struct
{
    int user_score;
    int comp_score;
    
}player;
typedef struct
{
    player user;
    //int match_no;
    int result;
}match;
void update(int user, int comp, int res, match m[], int match_no) 
{
    m[match_no].user.user_score = user;
    m[match_no].user.comp_score = comp;
    m[match_no].result = res;
}

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
        return user;
        break;
    }
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
        return comp;
        break;   
    }
    
}
void playmatch(match m[],int match_no)
{
    unsigned int toss,hand;
    int bat,user=0,comp=0,user1=0,comp1=0,target,res=0;//bat=1 if true else bat=0,res=0 if comp wins 1 if user
   
    printf("GAME OF HAND CRICKET BEGINS\n");
    printf("Lets start the toss\n ODD OR EVEN YOUR CALL\nPress 1 for ODD\n Press 2 for EVEN\n");
    scanf("%d",&toss);
    if(toss>=3||toss==0)
    {
        printf("Invalid Toss RESTART\n");
        return;
    }
    printf("Throw Hands\n");
    scanf("%d",&hand);
    unsigned int ch=rand()%11;
    if(hand>10)
        return;
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
                    return;
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
                    return;
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
        user1=userbat(user,bat,comp,10000000);
        target=user1+1;
        printf("The TARGET for the computer is %d\n",target);
        bat=1000;
    }
    while(bat==0)
    {
        comp1=compbat(comp,bat,user,10000000);
        target=comp1+1;
        printf("The TARGET for the user is %d\n",target);
        bat=100;
    }
    while(bat==1000)
    {
       comp1=compbat(comp,bat,user,target);
       if(user1>comp1)
       {
         printf("Congraulautions You Won!!\n");
         res=1;
       }
            
       else if(user1==comp1)
       {
           printf("WELL FOUGHT DRAW!!\n");
           res=-1;
       }
            
       else if(user1<comp1)
            printf("YOU LOST TO A COMPUTER HAHA!\n");
       break;
    }
    while(bat==100)
    {
        user1=userbat(user,bat,comp,target);
         if(user1>comp1)
         {
             printf("Congraulautions You Won!!\n");
             res=1;
         }
            
         else if(user1==comp1)
         {
             printf("WELL FOUGHT DRAW!!\n");
             res=-1;
         }
         else if(user1<comp1)
            printf("YOU LOST TO A COMPUTER HAHA!\n");
        break;
    }
    update(user1,comp1,res,m,match_no);
}
void display(match m[], int num)
{
    int userWins = 0, compWins = 0, draws = 0;
    int highestUser = 0, highestComp = 0, sum = 0, sum1 = 0;

    for (int i = 0; i < num; i++) 
    {
        if (m[i].result == 1)
            userWins++;
        else if (m[i].result == 0)
            compWins++;
        else
            draws++;

        if (m[i].user.user_score > highestUser)
            highestUser = m[i].user.user_score;
        if (m[i].user.comp_score > highestComp)
            highestComp = m[i].user.comp_score;

        sum += m[i].user.user_score;
        sum1 += m[i].user.comp_score;
    }

    float avgc = (float)sum1 / num;
    float avgu = (float)sum / num;

    printf("\n--- SESSION SUMMARY ---\n");
    printf("User Wins: %d\nComputer Wins: %d\nDraws: %d\n", userWins, compWins, draws);
    printf("Highest User Score: %d\nHighest Computer Score: %d\n", highestUser, highestComp);
    printf("Average Score of Computer is %.2f\n", avgc);
    printf("Average Score of User is %.2f\n", avgu);
}

int main()
{
    srand(time(NULL));
    int num, match_no;

    printf("Enter the no of games you wish to play\n");
    printf("Cannot play more than 10\n");
    scanf("%d", &num);

    if (num < 0 || num > 10)
    {
        printf("INVALID INPUT\n");
        return 0;
    }

    match m[num];

    for (int i = 0; i < num; i++)
    {
        match_no = i;
        playmatch(m, match_no);
    }

    display(m, num);
    return 0;
}
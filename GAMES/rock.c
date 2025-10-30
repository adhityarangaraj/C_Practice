#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game1(int x)
{
    if(x==1)
    {
        printf("The computer chose Paper\n");
        printf("You Lost\n");
        return -1;
        
    }
    else if(x==2)
    {
        printf("The computer chose Sciscors\n");
        printf("Congrats You Won!!\n");
        return 1;
    }
     else if(x==0)
        {
            printf("And its a Draw!!!\n");
            return 0;
        }
}
int  game2(int x)
{
    if(x==0)
    {
        printf("The computer chose Rock\n");
        printf("Congrats You Won!!\n");
        return 1;
    }
    else if(x==2)
    {
        printf("The computer chose Sciscors\n");
        printf(" You Lost!!\n");
        return -1;
    }
     else if(x==1)
        {
            printf("And its a Draw!!!\n");
            return 0;
        }
}
int  game3(int x)
{
    if(x==1)
    {
        printf("The computer chose Paper\n");
        printf("Congrats You Won!!\n");
        return 1;
    }
    else if(x==0)
    {
        printf("The computer chose Rock\n");
        printf(" You Lost!!\n");
        return -1;
    }
     else if(x==2)
        {
            printf("And its a Draw!!!\n");
            return 0;
        }
}

int main() 
{
    static int user=0,comp=0;
    
    int res,ur,ch,num,t;
    static int count=1;
    printf("Welcome to the game \n Do u wish to test yourself in a match of best of 3 or 5 \n Press the no which u want:");
    scanf("%d",&num);
    
    
    Label:
    do
    {
        
        
        printf(" \n\nGAME %d OF ROCK PAPER SCISCORS\n",count);
        srand(time(NULL));
        ch=rand()%3;
        printf("\nChoose\n 0.Rock\n 1.Paper\n 2.Sciscors\n");
        scanf("%d",&ur);
        count++;
        if(ur<0||ur>2)
        {
            printf("Invalid Choice !! Try Again");
            continue;
        }
       
        else if(ur==0)
        {
            res=game1(ch);
            break;
        }
        else if(ur==1)
        {
            res=game2(ch);
            break;
        }
        else if(ur==2)
        {
            res=game3(ch);
            break;
        }
        
    
    }while(0);
    if(res==1)
        user++;
    else if(res==-1)
        comp++;
    if(num==3&&count<=3)
        goto Label;
    else if(num==5&&count<=5)
        goto Label;
    printf("And thus the final score is %d-%d\n",user,comp);
    if(user>comp)
        printf("You won the war.CONGRALUATIONS\n");
    else if(comp>user)
        printf("The computer is the winner.LOSER!!\n");
    else
    {
        if(count>6){
            printf("Once again its a draw\nIts better to end in a draw at this point\n");}
        else if(count<6)
        {
        printf("Well fought draw!!\n");
        printf("Press 1 for tiebreaker round");
        scanf("%d",&t);
        if(t==1)
            goto Label;
        }
    }    
    return 0;
}
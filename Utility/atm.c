
#include <stdio.h>
int main() 
{
    printf("BANK DETAILS\n");
    float bal=0,chg;
    int ch;
    printf("Enter initial bank balance:");
    scanf("%f",&bal);
    do
    {
        printf("State what u wish to do\n1.DEPOSIT\n2.WITHDRAW\n3.CHECK BANK BALANCE\n4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter the amt u wish to deposit:");
                    scanf("%f",&chg);
                    bal+=chg;
                    break;
            case 2:
                     printf("Enter the amt u wish to withdraw:");
                     scanf("%f",&chg);
                     if(chg>bal)
                     {
                         printf("Not enough amt\n");
                         break;
                     }
                     else
                     {
                       bal-=chg;
                       break;   
                     }
            case 3:
                    printf("Your balance is %f",bal);
                    break;
            case 4:
                    break;
            
            default:
                    printf("Invalid Choice\n");
                    break;
        }
    }while(ch>0&&ch<4);
    
    return 0;
}
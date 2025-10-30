/*
	Name:Adhitya R
	Reg No:129003012
	Date:16.09.25
	Problem:Add two numbers
*/
#include<stdio.h>
#include<math.h>
void fact();
void power();
void mul();
void sum();
void fib();
void pas();
void lcm();
void prime();
void dig();
void rev();
void pal();
void sum1();
void arm();
void leap();
void vow();
void disp();
int main()
{	
	int ch;
	do
	{
	 printf("Enter the choice\n 1.Factorial\n 2.Power\n 3.Multiplication\n 4.Sum of N natural numbers\n5.Fibonacci Series\n 6.Pascal Triangle\n 7.LCM and GCD\n 8.Print Prime Numbers in a Range\n 9.Count the number of digits in an integer\n 10.Reverse the digits of number\n 11.To check whether this number is palindrome\n 12.Sum of digits of a number\n 13. To check whether the given number is Armstrong number\n 14. To check whether it is leap year\n 15. To check character or vowel\n 16.To display armstrong numbers bet two intervals\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		fact();
	}
	else if(ch==2)
	{
		power();
	} 
	else if(ch==3)
	{
		mul();
	} 
	else if(ch==4)
	{
		sum();
	} 
	else if(ch==5)
	{
		fib();
	}
	else if(ch==6)
	{
		pas();
	} 
	else if(ch==7)
	{
		lcm();
	}
	else if(ch==8)
	{
		prime();
	} 
	else if(ch==9)
	{
		dig();
	} 
	else if(ch==10)
	{
		rev();
	}
	else if(ch==11)
	{
		pal();
	}  
	else if(ch==12)
	{
		sum1();
	}  
	else if(ch==13)
	{
		arm();
	}
	else if(ch==14)
	{
		leap();
	}  
	else if(ch==15)
	{
		vow();
	}  
	else if(ch==16)
	{
		disp();
	}     
	else
	{
		printf("Invalid Input\n");
	}
	printf("Press 17 to continue\n Press any key to Exit\n");
	scanf("%d",&ch);
	}while(ch==17);		
   
	return 0;
}
void fact()
{
	int i,n,factorial=1;
   printf("\nEnter the number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
       {factorial = factorial * i;}
   printf("\nFactorial of %d is %d",n,factorial );

}
void power()
{
	int base, exp;
    int value=1;
   printf("Enter base number and exponent ");
   scanf("%d%d", &base, &exp);
   while (exp!=0)
   {
       value *=base;
       --exp;
   }
   printf("Answer = %d\n", value);
}
void mul()
{
   int n, i;
   printf("Enter an integer: ");
   scanf("%d",&n);
   printf("***Multiplication Table of %d***\n",n);
   for(i=1;i<=20;++i)
       {
           printf("%d * %d = %d\n", i, n, n*i);
       }
}
void sum()
{
   int n, count, sum=0;
   printf("Enter an integer: ");
   scanf("%d",&n);
   count=1;
   while(count<=n)
       {
           sum +=count;
           ++count;
       }
   printf("Sum = %d\n",sum);
}
void fib()
{
   int first,second,sum,num,counter=0;
   printf("Enter the term : ");
   scanf("%d",&num);
   printf("\nEnter First Number : ");
   scanf("%d",&first);
   printf("\nEnter Second Number : ");
   scanf("%d",&second);
   printf("\nFibonacci Series : %d %d ",first,second);
   while(counter< num-2)
   {
       sum = first + second;
       printf("%d ",sum);
       first=second;
       second=sum;
       counter++;
   }
   printf("\n");
}
void pas()
{
   int bin=1,p,q=0,r,x;
   printf("Rows you want to input:");
   scanf("%d",&r);
   printf("\n Pascal's Triangle:\n");
   while(q<r)
   {
       for(p=40-3*q;p>0;--p)
           printf(" ");
       for(x=0;x<=q;++x)
           {
               if((x==0)||(q==0))
                   bin=1;
               else
                   bin=(bin*(q-x+1))/x;
               printf("%6d",bin);
           }
       printf("\n");
       ++q;
   }
}
void lcm()
{
   int num1, num2, gcd, lcm, remainder, numerator, denominator;
   printf("Enter two numbers:\n");
   scanf("%d %d", &num1, &num2);
   //To find numerator and denominator
   numerator = (num1>num2)?num1:num2;
   denominator = (num1<num2)?num1:num2;
   remainder = numerator % denominator;
   while (remainder != 0)
   {
       numerator   = denominator;
       denominator = remainder;
       remainder   = numerator % denominator;
   }
   gcd = denominator;
   lcm = num1 * num2 / gcd;
   printf("GCD of %d and %d = %d\n", num1, num2, gcd);
   printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}
void prime()
{
   int n1, n2, i, j, flag;
   printf("Enter two numbers(intevals): ");
   scanf("%d %d", &n1, &n2);
   printf("Prime nos in range %d - %d are: ", n1, n2);
   for(i=n1+1; i<n2;++i)
       {
           flag=0;
           for(j=2;j<=i/2;++j)
           {
               if(i%j==0)
               {
                   flag=1;
                   break;
               }
           }
           if((flag==0)&&(i!=1))
           printf("%d ",i);
       }
   printf("\n");
}
void dig()
{
   int n,count=0;
   printf("Enter an integer: ");
   scanf("%d", &n);
   do
       {
           n /=10;    //n = n/10
           ++count;
       }while(n!=0);
   printf("\number of digits: %d\n",count);
}
void rev()
{
   long int num,r,sum=0,giv;
   printf("Enter a number: ");
   scanf("%ld",&num);
   giv=num;
   while(num)
   {
       r = num%10;
       num = num/10;
       sum = sum*10+r;
   }
   printf("reverse of given number %ld is %ld\n",giv,sum);
}
void pal()
{
   long int num,r,sum=0,temp;
   printf("Enter a number: ");
   scanf("%ld",&num);
   temp=num;
   while(num)
   {
       r=num%10;
       num=num/10;
       sum=sum*10+r;
   }
   if(temp==sum)
       printf("%ld is a palindrome\n",temp);
   else
       printf("%ld is not a palindrome\n",temp);
}
void sum1()
{
   int sum=0,m,n,temp;
   printf("Enter an Integer input:");
   scanf("%d",&n);
   temp=n;
   while(n!=0)
       {
           m=n%10;
           n=n/10;
           sum=sum+m;
       }
   printf("Sum of digits in %d = %d\n",temp,sum);
}
void arm()
{
   long int num,r,sum=0,ams;
   printf("Enter a number: ");
   scanf("%ld",&num);
   ams=num;
   while(num)
   {
       r=num%10;
       num=num/10;
       sum=sum+r*r*r;
   }
   if(ams==sum)
       printf("%ld is a amstrong number\n",ams);
   else
       printf("%ld is not a amstrong number\n",ams);
}
void leap()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  // leap year if perfectly divisible by 400
  if (year % 400 == 0)
       { printf("%d is a leap year.", year); }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0)
       { printf("%d is not a leap year.", year); }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0)
       { printf("%d is a leap year.", year); }
  // all other years are not leap years
  else
       {printf("%d is not a leap year.", year); }
  
}
void vow()
{
char c;
int lowercase_vowel, uppercase_vowel;
printf("Enter an alphabet:");
scanf(" %c", &c);
lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (lowercase_vowel || uppercase_vowel)
printf("%c is a vowel.", c);
else
printf("%c is a consonant.", c);
  
} 
void disp()
{
 int low, high, number, originalNumber, rem, count = 0;
 double result = 0.0;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d", &low, &high);
 printf("Armstrong numbers between %d and %d are: ", low, high);
 // swap numbers if high < low
 if (high < low) {
   high += low;
   low = high - low;
   high -= low;
 }
  // iterate number from (low + 1) to (high - 1)
 // In each iteration, check if number is Armstrong
 for (number = low + 1; number < high; ++number) {
   originalNumber = number;
   // number of digits calculation
   while (originalNumber != 0) {
   originalNumber /= 10;
   ++count;
   }
   originalNumber = number;
   // result contains sum of nth power of individual digits
   while (originalNumber != 0) {
   rem = originalNumber % 10;
   result += pow(rem, count);
   originalNumber /= 10;
   }
   // check if number is equal to the sum of nth power of individual digits
   if ((int)result == number) {
   printf("%d ", number);
   }
   // resetting the values
   count = 0;
   result = 0;
 }
 printf("\n");
 
}










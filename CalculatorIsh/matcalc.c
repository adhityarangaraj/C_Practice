#include <stdio.h>

float add(float arr[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
float sub(float arr[],int n)
{
    float r=arr[0];
    for(int i=1;i<n;i++)
    {
        r-=arr[i];
    }
    return r;
}
float multi(float arr[],int n)
{
    float pr=1;
    for(int i=0;i<n;i++)
    {
        pr*=arr[i];
    }
    return pr;
}
float divs(float arr[],int n)
{
    float d=arr[0];
    for(int i=1;i<n;i++)
    {
        d/=arr[i];
    }
    return d;
}
int arith()
{
    int ch;
    float result;
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
        int n;
        printf("Enter the amount of nos u wish to use for this op\n NOTE:Pls enter in order to get correct answer\n:");
        scanf("%d",&n);
        float arr[n];
        for(int i=0;i<n;i++)
        {
            printf("Enter Number %d:",i+1);
            scanf("%f",&arr[i]);
        }
        if(ch==1)
        {
            result=add(arr,n);
            printf("Addition Result: %.2f\n\n",result);
        }
        else if(ch==2)
        {
            result=sub(arr,n);
            printf("Subtraction Result: %.2f\n\n",result);
        }
        else if(ch==3)
        {
            result=multi(arr,n);
            printf("Multiplication Result: %.2f\n\n",result);
        }
        else if(ch==4)
        {
            result=divs(arr,n);
            printf("Division Result: %.2f\n\n",result);
        }
        printf("Press 5 to continue in this menu\n\n"
               "6 to exit\n\n 9 to return to main menu\n\n");
        scanf("%d",&ch);
    }while(ch==5);
    return ch;
}
void readMatrix(int row,int col,float mat[row][col],int matNumber)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter value for matrix %d[%d][%d]: ",matNumber,i,j);
            scanf("%f",&mat[i][j]);
        }
    }
}
void print(int row,int col,const float arr[row][col])
{
    printf("The resultant array is\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%.2f ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void matadd(int row1,int col1,int row2,int col2,float mat1[row1][col1],float mat2[row2][col2])
{
    if(row1!=row2||col1!=col2)
    {
        printf("Matrix not compatible for Addition\n");
    }
    else
    {
        float res[row1][col1];
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                res[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        print(row1,col1,res);
    }
}
void matsub(int row1,int col1,int row2,int col2,float mat1[row1][col1],float mat2[row2][col2])
{
    if(row1!=row2||col1!=col2)
    {
        printf("Matrix not compatible for Subtraction\n");
    }
    else
    {
        float res[row1][col1];
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                res[i][j]=mat1[i][j]-mat2[i][j];
            }
        }
        print(row1,col1,res);
    }
}
void matmult(int row1,int col1,int row2,int col2,float mat1[row1][col1],float mat2[row2][col2])
{
    if(col1!=row2)
    {
        printf("Matrix Not Compatible for Multiplication\n");
    }
    else
    {
        float res[row1][col2];
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                res[i][j]=0;
                for(int k=0;k<col1;k++)
                {
                    res[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        print(row1,col2,res);
    }
}
void cofactor(int row,int col,int skip1,int skip2,float mat[row][col],float temp[row-1][col-1])
{
    
    int ti=0;
    for(int i=0;i<row;i++)
    {
        int tj=0;
        if(i==skip1)
            continue;
        
        for(int j=0;j<col;j++)
        {
             
            if(j==skip2)
                continue;
            else
            {
                temp[ti][tj]=mat[i][j];
                tj++;
            }
                
        }
        ti++;
    }
}
void matdet(int row1,int col1,float mat1[row1][col1] )
{
    if(row1!=col1)
        printf("Matrix Not Compatible for Determinant\n");
    else
    {
        if(row1==1)
            return mat1[0][0];
        else if(row1==2)
            return mat1[0][0]*mat1[1][1] - mat1[0][1]*mat1[1][0];
        else
        {
            float temp[row1-1][col1-1];
            for(int i=0;i<row1;i++)
            {
                for(int j=0;j<col;j++)
                {
                    
                }
            }
        }
    }
}
int mat()
{
    int ch,row1,col1,row2,col2;
    do
    {
        printf("Matrix Operations Menu:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Determinant\n\n");
        scanf("%d",&ch);
        if(ch<1||ch>4)
        {
            printf("Invalid Input\n");
            continue;
        }
        printf("NOTE:ONLY TWO MATRIX CAN BE USED FOR NOW\n\n");
        if(ch==1||ch==2||ch==3)
        {
            printf("Enter rows and columns for matrix 1: ");
            scanf("%d%d",&row1,&col1);
            printf("Enter rows and columns for matrix 2: ");
            scanf("%d%d",&row2,&col2);
            float mat1[row1][col1],mat2[row2][col2];
            readMatrix(row1,col1,mat1,1);
            printf("\n");
            readMatrix(row2,col2,mat2,2);
            if(ch==1)
            {
                matadd(row1,col1,row2,col2,mat1,mat2);
            }
            else if(ch==2)
            {
                matsub(row1,col1,row2,col2,mat1,mat2);
            }
            else if(ch==3)
            {
                matmult(row1,col1,row2,col2,mat1,mat2);
            }
        }
        else if(ch==4)
        {
            printf("Enter rows and columns for matrix: ");
            scanf("%d%d",&row1,&col1);
            float mat1[row1][col1];
            readMatrix(row1,col1,mat1,1);
            matdet(row1,col1,mat1);
        }
        printf("Press 5 to continue in this menu\n6 to exit\n9 to return to main menu\n:");
        scanf("%d",&ch);
    }while(ch==5);
    return ch;
}
int main()
{
    int ret,opt;
    do
    {
        printf("Enter\n1 for Arithmetic Operations\n2 for Matrix Operations\n:");
        scanf("%d",&opt);
        if(opt==1)
        {
            ret=arith();
        }
        else if(opt==2)
        {
            ret=mat();
        }
        else
        {
            printf("Invalid Input\n");
            ret=9;
        }
    }while(ret==9);
    return 0;
}
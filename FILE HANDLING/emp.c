#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct em {
    int id;
    char name[50];
    float salary;
};

int main()
{
   /* int n;
    printf("Enter no of employees:");
    scanf("%d",&n);

    struct em emp[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter id of emp-%d:",i+1);
        scanf("%d",&emp[i].id);

        while(getchar()!='\n');  // clear buffer BEFORE fgets

        printf("Enter name of emp-%d:",i+1);
        fgets(emp[i].name,50,stdin);
        emp[i].name[strcspn(emp[i].name,"\n")] = '\0';

        printf("Enter salary:");
        scanf("%f",&emp[i].salary);
    }*/

    FILE*fp1=fopen("output.txt","w");
     if(fp1==NULL) 
        return 1;
    FILE*fp=fopen("emp.txt","r");
    if(fp==NULL) 
        return 1;
    char ch;
    while(ch=fgetc(fp)!=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
  

    return 0;
}

#include<stdio.h>
int main()
{
    FILE*fp=fopen("test.txt","w");
    fprintf(fp,"Hi!This is my first c prog with files\n");
    fprintf(fp,"Hoping to have a favourable one\n");
    int n;
    printf("Enter the no u want to add to the file:");
    scanf("%d",&n);
    fprintf(fp,"%d\n",n);
    char ca;
    printf("Enter the char u wish to insert:");
    scanf(" %c",&ca);
    fputc(ca,fp);
    fclose(fp);
    fp=fopen("test.txt","r");
    char line[1000];
    while(fgets(line,1000,fp))
    {
        printf("%s",line);
    }
    fclose(fp);

    return 0;
}
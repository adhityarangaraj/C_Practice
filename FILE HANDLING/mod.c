#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char names[5][50];
    int i;

    // Open file for writing
    fp = fopen("names.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Read 5 names from user and write to file
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("names.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Read and display names
    printf("\nNames stored in file:\n");
    for (i = 0; i < 5; i++) {
        fscanf(fp, "%s", names[i]);
        printf("%s\n", names[i]);
    }

    fclose(fp);
    return 0;
}
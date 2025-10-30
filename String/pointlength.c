#include <stdio.h>

int string_length(char *ptr) {
    char *start = ptr;
    while (*ptr != '\0') {
        ptr++;
    }
    return (int)(ptr - start);
}

int main() {
    char str[100];
    int len;

    scanf("%s", str);

    len = string_length(str);

    printf("Length: %d\n", len);

    return 0;
}
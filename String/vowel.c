#include <stdio.h>
#include <ctype.h>

int main() 
{
    char word[50];
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    scanf("%s", word);

    while (word[i] != '\0') {
        char ch = tolower(word[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
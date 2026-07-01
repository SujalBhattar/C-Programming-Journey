#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a string");
    fgets(str, 100, stdin);
    int i;
    int letter_count = 0, vowel_count = 0, consonant_count = 0;
    int digit_count = 0, space_count = 0,special_count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            letter_count++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel_count++;
            }
            else
            {
                consonant_count++;
            }
        }
        else if (isdigit(str[i]))
        {
            digit_count++;
        }
        else if (isspace(str[i]))
        {
            space_count++;
        }
        else {
            special_count++;
        }
    }
    printf("Letters: %d\n", letter_count);
    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", consonant_count);
    printf("Digits: %d\n", digit_count);
    printf("Spaces: %d\n", space_count);
    printf("Special Characters: %d\n", special_count);
    return 0;
}
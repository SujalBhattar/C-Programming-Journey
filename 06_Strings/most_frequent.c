#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    int count[256] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] != ' ')
            count[(unsigned char)str[i]]++;
    }

    char most_frequent_char = '\0';
    int max_count = 0;

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            most_frequent_char = (char)i;
        }
    }

    printf("Most frequent character: %c\n", most_frequent_char);
    printf("Frequency: %d\n", max_count);

    return 0;
}
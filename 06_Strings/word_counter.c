#include <stdio.h>

int main()
{
    char str[100];
    int space_count = 0;
    printf("Enter a string");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==' ')
        {
            space_count++;
        }
    }
    printf("Number of words is %d", space_count + 1);
    return 0;
}
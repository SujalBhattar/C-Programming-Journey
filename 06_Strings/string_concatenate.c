#include <stdio.h>

int main()
{
    char str[100], nstr[100], fstr[100];
    printf("Enter first string");
    fgets(str, 100, stdin);
    printf("Enter second string");
    fgets(nstr, 100, stdin);
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        fstr[j] = str[i];
        i++;
        j++;
    }
    i = 0;
    while (nstr[i] != '\0')
    {
        fstr[j] = nstr[i];
        i++;
        j++;
    }
    fstr[j] = '\0';
    printf("Concatenated string: %s", fstr);
    return 0;
}
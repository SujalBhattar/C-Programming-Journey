#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    char ch;
    int count=0;
    printf("Enter a string");
    fgets(str,100,stdin);
    printf("Enter character to search");
    scanf("%c", &ch);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("The letter %c appears %d times", ch, count);
    return 0;
}
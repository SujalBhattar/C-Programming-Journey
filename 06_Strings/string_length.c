#include <stdio.h>

int main(){
    int letter=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        letter++;
    }
    printf("Length of the string %s is %d", str, letter);
    return 0;
}
#include <stdio.h>

int main(){
    int i=0;
    char str[100],nstr[100];
    printf("Enter first string");
    fgets(str,100,stdin);
    printf("Enter second string");
    fgets(nstr,100,stdin);
    while(str[i]==nstr[i] && str[i]!='\0'){
        i++;
    }
    if(str[i]=='\0' && nstr[i]=='\0'){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    return 0;
}
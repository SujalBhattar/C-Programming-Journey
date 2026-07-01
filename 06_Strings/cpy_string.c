#include <stdio.h>

int main(){
    char str[100],nstr[100];
    printf("Enter a string");
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        nstr[i]=str[i];
        i++;
    }
    nstr[i]='\0';
    printf("Copied string is %s", nstr);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100], nstr[100];
    printf("Enter a String");
    fgets(str,100,stdin);
    int i,j=0;
    for(i=0;str[i]!='\0';i++){
        if(!isspace(str[i])){
            nstr[j]=str[i];
            j++;
        }
    }
    nstr[j]='\0';
    printf("String after spaces removed is: %s", nstr);
    return 0;
}
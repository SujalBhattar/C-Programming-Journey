#include <stdio.h>

int main(){
    char str[100], temp;
    
    printf("Enter a string: ");
    fgets(str,100,stdin);

    int i=0;

    while(str[i]!='\0'){
        i++;
    }

    // remove newline from fgets
    if(str[i-1]=='\n'){
        str[i-1]='\0';
        i--;
    }

    for(int j=0; j<i/2; j++){
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char str[100],temp;
    printf("Enter the String");
    fgets(str,100,stdin);
    char og[100];
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    str[i-1]='\0';
    i--;
    strcpy(og,str);
    for (int j=0;j<i/2;j++){
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    for (i=0;str[i]!=0;i++){
        if (og[i]!=str[i]){
            printf("%s is not a Palindrome String", og);
            return 0;
        }
    }
    printf("%s is a Palindrome String", og);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character from str1
    str2[strcspn(str2, "\n")] = 0; // Remove newline character from str2
    int n=strlen(str1);
    int m=strlen(str2);
    int i=0;
    if(n!=m){
        printf("Strings are not anagrams.\n");
        return 0;
    }
    for(i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(str1[j]>str1[j+1]){
                    char temp=str1[j];
                    str1[j]=str1[j+1];
                    str1[j+1]=temp;
                }
            }
        }
        for(i=0;i<m-1;i++){
            for(int j=0;j<m-i-1;j++){
                if(str2[j]>str2[j+1]){
                    char temp=str2[j];
                    str2[j]=str2[j+1];
                    str2[j+1]=temp;
                }
            }
        }
    if(strcmp(str1,str2)==0){
        printf("Strings are anagrams.\n");
    }
    else{
        printf("Strings are not anagrams.\n");
    }
    return 0;
}
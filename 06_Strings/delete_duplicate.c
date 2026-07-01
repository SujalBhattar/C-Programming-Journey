#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i, j;
    for(i = 0; str[i] != '\0'; i++){
        for(j = i + 1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                int k;
                for(k = j; str[k] != '\0'; k++){
                    str[k] = str[k + 1];
                }
                j--;
            }
        }
    }
    printf("String after removing duplicates: %s", str);
    return 0;
}
#include <stdio.h>

int main(){
    int i,f,fact=1;
    printf("Enter a Number");
    scanf("%d", &i);
    while(i!=0){
        fact=fact*i;
        i--;
    }
    printf("Factorial: %d", fact);
    return 0;  
}
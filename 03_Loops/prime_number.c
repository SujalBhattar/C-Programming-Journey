#include <stdio.h>

int main(){
    int num,f=0;
    printf("Enter a number u want to check");
    scanf("%d", &num);
    for (int i=1;i<=num;i++){
        if (num%i==0){
            f++;
        }
    }
    if (f==2){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}
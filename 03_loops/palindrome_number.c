#include <stdio.h>

int main(){
    int num,d,r=0,og;
    printf("Enter a number to be checked: ");
    scanf("%d", &num);
    og = num;
    while(num!=0){
        d=num%10;
        r=r*10+d;
        num/=10;
    }
    if (og == r){
        printf("The number %d is palindrome", og);
    } else {
        printf("The number %d is not palindrome", og);
    }
    return 0;
}
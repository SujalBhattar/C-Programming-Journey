#include <stdio.h>

int reverse(int num){
    int d,r=0;
    while(num!=0){
        d=num%10;
        r=r*10+d;
        num/=10;
    }
    return r;
}
int main(){
    int num,rev;
    int og;
    printf("Enter a number");
    scanf("%d", &num);
    og=num;
    rev=reverse(num);
    printf("The reverse of %d is %d", og, rev);
    if(rev==og){
        printf("%d is palindrome", og);
    } else {
        printf("%d is not a palindrome number", og);
    }
    return 0;
}
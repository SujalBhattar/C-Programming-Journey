#include <stdio.h>

int main(){
    int num,arm=0;
    printf("Enter a number");
    scanf("%d", &num);
    int og = num;
    int digit;
    while (num!=0){
        digit=num%10;
        arm=arm+(digit*digit*digit);
        num/=10;
    }
    if (arm == og) {
        printf("%d is an Armstrong number.\n", og);
    } else {
        printf("%d is not an Armstrong number.\n", og);
    }
    return 0;
}
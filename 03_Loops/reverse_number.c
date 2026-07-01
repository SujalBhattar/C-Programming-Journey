#include <stdio.h>

int main(){
    int num,d,r=0,og;
    printf("Enter a number to be reversed: ");
    scanf("%d", &num);
    og = num;
    while(num!=0){
        d=num%10;
        r=r*10+d;
        num/=10;
    }
    printf("Reverse of the number %d is %d", og,r);
    return 0;
}
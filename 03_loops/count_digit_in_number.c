#include <stdio.h>

int main(){
    int num,d,og,count=0,sum=0,prod=1;
    printf("Enter a number");
    scanf("%d", &num);
    og = num;
    while(num!=0){
        d=num%10;
        count++;
        sum+=d;
        prod*=d;
        num/=10;
    }
    printf("Number of digits in %d is %d\n", og, count);
    printf("Sum of digits in %d is %d\n", og, sum);
    printf("Product of digits in %d is %d\n", og, prod);
    return 0;
}

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num%97==0)
    {
        printf("The Number is divisible by 97");
    }
    else
    {
        printf("The number is not divisible by 97");
    }
    return 0;
}

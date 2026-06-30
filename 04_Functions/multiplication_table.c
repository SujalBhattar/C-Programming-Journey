#include <stdio.h>
void table(int n){
    n=100;
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n", n,i,n*i);
    }
}

int main(){
    int num;
    printf("Enter a number whose table you want to print");
    scanf("%d", &num);
    table(num);
    printf("num = %d", num);
    return 0;
}
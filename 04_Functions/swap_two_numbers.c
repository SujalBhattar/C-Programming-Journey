#include <stdio.h>

void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swap the numbers are %d %d", a,b);
}
int main(){
    int a,b;
    printf("Enter two numbers you wan to swap");
    scanf("%d %d", &a, &b);
    swap(a,b);
    return 0;
}
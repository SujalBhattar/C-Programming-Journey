#include <stdio.h>

int maxnum(int a,int b){
    if (a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b,max;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    max=maxnum(a,b);
    if (max==0){
        printf("Both numbers are equal");
    }
    else {
    printf("%d is greater",max);
    }
    return 0;
}
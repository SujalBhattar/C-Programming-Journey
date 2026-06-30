#include <stdio.h>

int maxnum(int a,int b, int c){
    if (a>=b && a>=c){
        return a;
    }
    else if (b>=a && b>=c){
        return b;
    }
    else {
        return c;
    }
}
int main(){
    int a,b,c,max;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    max=maxnum(a,b,c);
    printf("The greatest among all is %d", max);
    return 0;
}
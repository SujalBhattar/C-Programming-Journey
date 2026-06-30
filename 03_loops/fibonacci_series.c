#include <stdio.h>

int main(){
    int i1=0,i2=1,i3;
    int m,n;
    printf("Enter how many numbers of fibonacci series u wanna print??");
    scanf("%d", &n);
    printf("%d %d", i1,i2);
    for(m=2; m<n; ++m){
        i3=i1+i2;
        printf(" %d",i3);
        i1=i2;
        i2=i3;
    }return 0;
}
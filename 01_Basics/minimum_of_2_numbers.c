#include <stdio.h>

int main(){
    int i,j;
    printf("Enter First Number");
    scanf("%d",&i);
    printf("Enter Second Number");
    scanf("%d",&j);
    if(i<j)
        printf("%d",i);
    else
        printf("%d",j);
    return 0;
}
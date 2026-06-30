#include <stdio.h>

int main(){
    int i;
    printf("Enter the number whose multiplication table u want to print");
    scanf("%d", &i);
    for(int j=1;j<=10;j++){
        printf("%d x %d = %d\n", i,j,i*j);
    }
    return 0;
}
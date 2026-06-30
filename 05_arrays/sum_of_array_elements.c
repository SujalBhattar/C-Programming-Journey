#include <stdio.h>

int main(){
    int marks[5],i,sum=0;
    printf("Enter the marks of 5 students: ");
    for (i=0;i<5;i++){
        scanf("%d", &marks[i]);
    }
    printf("The Sum of all elements is: ");
    for (i=0;i<5;i++){
        sum+=marks[i];
    }
    printf("%d",sum);
    return 0;
}
    
#include <stdio.h>

int main(){
    int n,i;
    printf("Enter how many numbers u want to enter?");
    scanf("%d", &n);
    int num[n];
    printf("Enter the numbers");
    for (i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    int max;
    max=num[0];
    for(i=0;i<n;i++){
        if(max<=num[i]){
            max=num[i];
        }
    }
    printf("The largest of all is: %d", max);
    return 0;
}
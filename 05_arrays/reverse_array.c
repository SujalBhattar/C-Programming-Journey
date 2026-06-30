#include <stdio.h>

int main(){
    int n,temp;
    printf("Enter how many number you want to enter??\n");
    scanf("%d", &n);
    int num[n];
    printf("Enter thr numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    printf("The Reversed Array is : \n");
    for(int i=0;i<n/2;i++){
        temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ", num[i]);
    }
    return 0;
}
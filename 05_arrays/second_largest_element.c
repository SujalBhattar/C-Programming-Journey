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
    int max1=num[0];
    int max2=num[0];
    for(i=1;i<n;i++){
        if(max1<num[i]){
            max2=max1;
            max1=num[i];
        }
        else if(num[i]>max2 && num[i]!=max1){
            max2=num[i];
        }
    }
    printf("The Second Largest Number is: %d", max2);
}
#include <stdio.h>

int main(){
    int n,f=0;
    printf("enter how many numbers you want to enter: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the Numbers");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    int numsea;
    printf("Enter the number you want to search");
    scanf("%d", &numsea);
    for(int i=0;i<n;i++){
        if(numsea==num[i]){
            f++;
        }
    }
    if (f==1){
        printf("%d is present in the list of numbers provided", numsea);
    }
    else {
        printf("%d is not present in the list of numbers provided", numsea);
    }
    return 0;
}
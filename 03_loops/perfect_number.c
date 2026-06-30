#include <stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int og=num;
    int i;
    int sum=0;
    while (num!=0){
        for (i=1;i<num;i++){
            if (og%i==0){
                sum+=i;
            }
        }
    if(sum==og){
        printf("The number %d is a perfect number",og);
    }
    else{
        printf("The number %d is not a perfect number",og);
    }
    }
    return 0;
}
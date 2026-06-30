#include <stdio.h>

int main(){
    float principal;
    printf("Enter Principal Amount: ");
    scanf("%f",&principal);
    float rate;
    printf("Enter Rate of Interest: ");
    scanf("%f",&rate); 
    int time;
    printf("Enter Time in Years: ");
    scanf("%d",&time);
    int in=(principal*rate*time)/100;
    printf("Simple Interest is: %d",in);
    float amt=principal+in;
    printf("Total Amount is: %f",amt);
    return 0;
}
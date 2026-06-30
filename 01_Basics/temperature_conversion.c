//Program to convert celsius degree to fahrenheit degree
#include <stdio.h>

int main(){
    float ce;
    printf("Enter temperture in celsius\n");
    scanf("%f", &ce);
    float fa=(ce*9/5)+32;
    printf("the temperature in farenheit scale is %f",fa);
    return 0;
}
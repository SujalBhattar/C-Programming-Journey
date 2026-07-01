#include <stdio.h>

int main(){
    int n;
    printf("Enter the number till where you want to print prime numbers: ");
    scanf("%d", &n);
    printf("Prime numbers till %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume number is prime
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
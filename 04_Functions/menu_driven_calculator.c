#include <stdio.h>

int factnum(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}
int prtnum(int num){
    int i,sum=0;
    int og=num;
    for (i=1;i<num;i++){
        if (num%i==0){
            sum+=i;
        }
    }
    if (sum==og){
        return 1;
    }
    else {
        return 0;
    }
}
int strnum(int num){
    int digit,sum=0;
    int og=num;
    while(num!=0){
        digit=num%10;
        int fact = factnum(digit);
        sum+=fact;
        num/=10;
    }
    if (sum==og){
        return 1;
    }
    else {
        return 0;
    }
}
int armnum(int num){
    int digit,sum=0;
    int og=num;
    while(num!=0){
        digit=num%10;
        sum+=(digit*digit*digit);
        num/=10;
    }
    if (og==sum){
        return 1;
    }
    else {
        return 0;
    }
}
int palnum(int num){
    int rev=0,d;
    int og=num;
    while(num!=0){
        d=num%10;
        rev=rev*10+d;
        num/=10;
    }
    if (rev==og){
        return 1;
    }
    else {
        return 0;
    }
}
int primenum(int num){
    int i,f=0;
    for (i=1;i<=num;i++){
        if(num%i==0){
            f++;
        }
    }
    return f;
}
int revnum(int num){
    int r=0;
    while(num!=0){
        int digit = num%10;
        r=r*10+digit;
        num/=10;
    }
    return r;
}
int dignum(int num){
    int i=0;
    while(num!=0){
        int digit = num%10;
        i++;
        num/=10;
    }
    return i;
}
int mulnum(int a, int b){
    int mu=a*b;
    return mu;
}
int diffnum(int a, int b){
    int minus=a-b;
    return minus;
}
int addnum(int a,int b){
    int add = a+b;
    return add;
}
int main(){
    int n;
    printf("1. for Finding Sum\n");
    printf("2. for Finding Difference\n");
    printf("3. for Finding Multiplication\n");
    printf("4. for Counting the Number of Digits\n");
    printf("5. for finding the reverse of a number\n");
    printf("6. for Factorial\n");
    printf("7. to check if NUmber is Prime\n");
    printf("8. to check if the number is Palindrome\n");
    printf("9. to check if the number is Armstrong\n");
    printf("10. to check if a number is Strong or not\n");
    printf("11. to check if a number is perfect or not\n");
    printf("Enter a Number\n");
    scanf("%d", &n);
    switch (n){
        case 1:
        {
            int a,b;
            printf("Enter Two Numbers");
            scanf("%d %d", &a, &b);
            int sum=addnum(a,b);
            printf("Sum of %d and %d is %d", a,b,sum);
            break;
        }
        case 2:
        {
            int a,b;
            printf("Enter Two Numbers");
            scanf("%d %d", &a, &b);
            int diff = diffnum(a,b);
            printf("Difference of %d and %d is %d", a,b,diff);
            break;
        }
        case 3:
        {
            int a,b;
            printf("Enter Two Numbers");
            scanf("%d %d", &a, &b);
            int mul= mulnum(a,b);
            printf("Multiplication of %d and %d is %d", a,b,mul);
            break;
        }
        case 4:
        {
            int num;
            printf("Enter a Number");
            scanf("%d", &num);
            int dig = dignum(num);
            printf("Number of digits in %d is %d", num, dig);
            break;
        }
        case 5:
        {
            int num;
            printf("Enter a Number");
            scanf("%d", &num);
            int rev = revnum(num);
            printf("The Reverse of %d is %d", num, rev);
            break;
        }
        case 6:
        {
            int num;
            printf("Enter a number");
            scanf("%d", &num);
            int fact = factnum(num);
            printf("The Factorial of %d is %d", num, fact);
            break;
        }
        case 7:
        {
            int num;
            printf("Enter a number");
            scanf("%d", &num);
            int prm = primenum(num);
            if (prm==2){
                printf("%d is Prime", num);
            }
            else {
                printf("%d is not a prime number", num);
            }
            break;
        }
        case 8:
        {
            int num;
            printf("Enter a number");
            scanf("%d", &num);
            int pal = palnum(num);
            if (pal==1){
                printf("%d is Palindrome", num);
            }
            else {
                printf("%d is not Palindrome", num);
            }
            break;
        }
        case 9:
        {
            int num;
            printf("Enter a number");
            scanf("%d", &num);
            int arm = armnum(num);
            if (arm==1){
                printf("%d is an Armstrong Number", num);
            }
            else {
                printf("%d is not an armstrong Number", num);
            }
            break;
        }
        case 10:
        {
            int num;
            printf("Enter a Number");
            scanf("%d", &num);
            int str = strnum(num);
            if (str==1){
                printf("%d is a Strong Number", num);
            }
            else {
                printf("%d is not a Strong Number", num);
            }
            break;
        }
        case 11:
        {
            int num;
            printf("Enter a number");
            scanf("%d", &num);
            int prt = prtnum(num);
            if (prt==1){
                printf("%d is a Perfect Number", num);
            }
            else {
                printf("%d is not a Perfect Number", num);
            }
            break;
        }
        default:
        {
            printf("------ Invalid Choice -----");
        }
    }
}
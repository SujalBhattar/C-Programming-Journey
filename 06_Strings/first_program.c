#include <stdio.h>

int main(){
    char name[50];
    printf("Enter Name");
    fgets(name,50,stdin);
    printf("Hello %s", name);
    return 0;
} 
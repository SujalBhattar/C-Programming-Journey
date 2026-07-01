#include <stdio.h>

int main(){
    int size,temp;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int num[size];
    printf("Enter the numbers\n");
    for (int i=0;i<size;i++){
        scanf("%d", &num[i]);
    }
    printf("Sorted array using Bubble Sort : \n");
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(num[j]>num[j+1]){
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
    for(int i=0;i<size;i++){
        printf("%d ", num[i]);
    }
    return 0;
}
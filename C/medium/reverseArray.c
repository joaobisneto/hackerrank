//HackerRank - C - Practice 11
//Bitwise Operators
//URL: https://www.hackerrank.com/challenges/reverse-array-c
//Joao Feitoza Bisneto

#include <stdio.h>
#include <stdlib.h>

int *reverseArray(int *arr, int size){
    int i, swp, j = size-1;

    for(i=0; i<size/2; i++){
        swp = arr[i];
        arr[i] = arr[j];
        arr[j] = swp;
        j--;
    }

    return arr;
}

int main(){
    int i, num;
    int *arr;

    scanf("%d", &num);
    arr = malloc(sizeof(int)*num);
    
    for(i=0; i<num; i++)
        scanf("%d", arr + i);

    arr = reverseArray(arr, num);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    
    return 0;
}

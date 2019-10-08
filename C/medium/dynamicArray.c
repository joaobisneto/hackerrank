//HackerRank - C - Practice 11
//URL: https://www.hackerrank.com/challenges/1d-arrays-in-c
//Joao Feitoza Bisneto

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int *allocArray(int size){
    int *arr;

    arr = malloc(sizeof(int)*size);
    
    if(arr == NULL)
        return NULL;

    return arr;
}

int sumArray(int *arr, int size){
    int i, result = 0;

    for(i=0; i<size; i++){
        result += arr[i];
    }

    return result;
}

int main() {

    int *arr;
    int i, n, size;

    scanf("%d", &size);

    arr = allocArray(size);

    for(i=0; i<size; i++){
        scanf("%d", &n);
        arr[i] = n;
    }

    printf("%d", sumArray(arr, size));

    return 0;
}

//HackerRank - C - Practice 14
//URL: https://www.hackerrank.com/challenges/printing-tokens-/problem
//Joao Feitoza Bisneto

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inicializeArr(int *arr){
    int i;
    for(i=0; i<10; i++){
        *(arr+i) = i;
    }
}

void printArr(int *arr){
    int i;
    for(i=0; i<10; i++){
        printf("%d ", *(arr+i));
    }
}



int main() {
    int i, j, n;
    int freq[10];

    inicializeArr(freq);

    scanf("%d", &n);


   
      
    return 0;
}

//HackerRank - C - Practice 8
//Bitwise Operators
//URL: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number
//Joao Feitoza Bisneto

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitsSum(int number, int digits){
    int i;
    int result = 0;
    int aux = number;
    
    for( i=0; i<digits; i++){
        result += aux%10;
        aux /= 10;
    }

    return result;
}

int main() {
    
    int n;
    scanf("%d", &n);

    printf("%d",digitsSum(n, 5));
    
    return 0;
}


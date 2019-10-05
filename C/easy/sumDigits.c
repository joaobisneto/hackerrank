//HackerRank - C - Practice 6
//Jo�o Feitoza Bisneto

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



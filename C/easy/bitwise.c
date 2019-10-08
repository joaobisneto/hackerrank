//HackerRank - C - Practice 9
//URL:https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
//Joao Feitoza Bisneto

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int i, j;
    int a, b;
    int aux1, aux2, aux3;
    int S[n];
    int and = 0, or = 0, xor = 0;

    for(i=1; i<=n; i++){
        S[i-1] = i;
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            aux1 = S[i] & S[j];
            aux2 = S[i] | S[j];
            aux3 = S[i] ^ S[j];
            if(aux1 < k && aux1 > and){ and = aux1; }
            if(aux2 < k && aux2 > or ){ or  = aux2; }
            if(aux3 < k && aux3 > xor){ xor = aux3; }
        }
    }

    printf("%d\n", and);
    printf("%d\n", or );
    printf("%d",   xor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

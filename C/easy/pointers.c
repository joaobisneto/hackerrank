//HackerRank - C - Practice 5
//Bitwise Operators
//URL: https://www.hackerrank.com/challenges/pointer-in-c
//Joao Feitoza Bisneto

#include <stdio.h>

void update(int *a,int *b) {
   
    *a = *a + *b;
    *b = *a - *b - *b;
    if(*b<0){
        *b *= -1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

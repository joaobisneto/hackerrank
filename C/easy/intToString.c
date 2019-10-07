//HackerRank - C - Practice 6
//Bitwise Operators
//URL: https://www.hackerrank.com/challenges/conditional-statements-in-c
//Joao Feitoza Bisneto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
    int n;
    char numbers[10][16] = {"Greater than 9.", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	scanf("%d", &n);

	(n >= 1 && n <= 9) ? printf(numbers[n]) : printf(numbers[0]);

    return 0;
}

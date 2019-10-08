//HackerRank - C - Practice 7
//URL: https://www.hackerrank.com/challenges/for-loop-in-c
//Joao Feitoza Bisneto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
    int i, a, b;
    char numbers[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char parity[2][5]   = {"even", "odd"};
	
	scanf("%d %d", &a, &b);

	for(i=a; i<=b; i++){
		if(i>=1 && i<=9){
			printf(numbers[i-1]);
			printf("\n");
		}else if(i > 9){
			printf(parity[i%2]);
			printf("\n");
		}
	}

    return 0;
}

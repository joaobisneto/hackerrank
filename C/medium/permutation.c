#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void xorSwap(char *a, char *b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b; 
}

/*
	Encontrar a lexicog. maior string não-incremental a partir do final do array;
	Se o array é todo não-incremental, então a permutação terminou == Return 0;
	Se a maior string for encontrada, então o pivo é a string anterior à maior string;
	O pivo separa a string em prefixo e sufixo;
	Encontrar a string mais a direita do prefixo que seja maior que o pivo;
	Trocar o pivo com essa string;
	Inverter o sufixo;
	Return 1;
*/
int next_permutation(int n, char **S){
    int i = n-1;
    while(strcmp(S[i-1], S[i])>=0 && i>0){    //S[i-1] is the pivot
        i--;
    }
    if(i<=0) 
		return 0;

    int j = n-1;
    while(strcmp(S[i-1], S[j])>=0)
        j--;
		
    swap(S[i-1], S[j]);
    
    j = n-1;
    
    while(i<j){
        swap(S[i], S[j]);
        i++;
        j--;
    }

    return 1;
}



int main(){
	char **s;
	int n;
	
	scanf("%d", &n);

	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++){//create the matrix
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	
	do{
		for(int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' '); //string + space||line
	}while(next_permutation(n, s));
	
	for(int i = 0; i < n; i++)//free allocated memory
		free(s[i]);
	free(s);
	
	return 0;
}

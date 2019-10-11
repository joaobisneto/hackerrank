//HackerRank - C - Practice 16
//URL:https://www.hackerrank.com/challenges/sorting-array-of-strings/problem
//Joao Feitoza Bisneto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int distintLetters(char* alphabet, const char* word, int letters){
	for(int i=0; i<strlen(word); i++){
		if(!strchr(alphabet, word[i])){
			if(alphabet[word[i]-97] != word[i]){
				alphabet[word[i]-97] = word[i];
				letters++;
			}
		}
	}
	return letters;
}

int lexicographic_sort(const char* a, const char* b) {
	return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
	return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
	char *aalph = malloc(26*sizeof(char*));
	char *balph = malloc(26*sizeof(char*));

    int a_letters = 0;
	a_letters = distintLetters(aalph, a, a_letters);
	int b_letters = 0;
	b_letters = distintLetters(balph, b, b_letters);

	if(a_letters == b_letters)
		return lexicographic_sort(a, b);
	else if(a_letters > b_letters)
		return 1;
	else
		return -1;
}

int sort_by_length(const char* a, const char* b) {
	if(strlen(a) == strlen(b))
		return lexicographic_sort(a, b);
	else if(strlen(a) > strlen(b))
		return 1;
	else
		return -1;
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)){

    char *aux;

    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(cmp_func(arr[i], arr[j]) > 0){
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

int main(){
	
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
	printf("\n");
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

	string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

	string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

}

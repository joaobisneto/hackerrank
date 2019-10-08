//HackerRank - C - Practice 15
//URL: https://www.hackerrank.com/challenges/dynamic-array-in-c/problem
//Joao Feitoza Bisneto

#include <stdio.h>
#include <stdlib.h>

int* total_number_of_books;

int** total_number_of_pages;

int *allocArray(int shelves){
    int *A;

    A = malloc(sizeof(int)*shelves);

    return A;
}

int **allocMatrix(int shelves){
    int i, j;
    int **A;

    A = malloc(sizeof(int*)*shelves);

    for(i=0; i<shelves; i++){
        A[i] = malloc(sizeof(int));
    }    

    return A;
}

int main(){

    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

	total_number_of_books = allocArray(total_number_of_shelves);

	total_number_of_pages = allocMatrix(total_number_of_shelves);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
		
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            total_number_of_books[x] += 1;
        	total_number_of_pages[x] = realloc(total_number_of_pages[x], total_number_of_books[x]*sizeof(int));
            total_number_of_pages[x][total_number_of_books[x]-1] = y;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][total_number_of_books[x] - 1]);
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}

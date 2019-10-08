//HackerRank - C - Practice 10
//URL: https://www.hackerrank.com/challenges/printing-pattern-2
//Joao Feitoza Bisneto

#include <stdio.h>

int main(){

    int n;
    int vertical, horizontal, x;

    scanf("%d", &n);

    int distance = 2*n-1;

    for(int row=1; row<=distance; row++){
        for(int col=1; col<=distance; col++){
            //gets the vertical distance of the shortest border 
            if(row<=distance-row){
                vertical=row-1;
            }else{ vertical=distance-row; }
            //gets the horizontal distance of the shortest border            
            if(col<=distance-col){
                horizontal=col-1;
            }else{ horizontal=distance-col; }
            //select the shortest of both
            if(vertical<=horizontal){
                x = vertical;
            }else{ x = horizontal; }
            //the number is equal to the input - shortest distance
            printf("%d ", n - x);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void printBoard(const int queens[] , int N);

bool isSafe(int queens[] ,int row , int col){
int i ;
    for(i = 0; i<row;i++){
        if(queens[i] == col){
            return false;
        }
        if(abs(i-row )==abs(queens[i] - col)){
            return false;
        }
   
    }
     return true;
}

bool solve(int queens[] , int row, int N){
if(row == N){
    return true;
}
int col;
for(col=0; col<N ; col++){
    if(isSafe(queens,row, col)){
        queens[row] = col;

         if(solve(queens , row+1, N)){
        return true;
    }
     queens[row] = -1; 
    }

}
return false;

}

void solveAll(int queens[] , int row, int N){
if(row == N){
    printBoard(queens, N);
    printf("\n");
    return;
}
int col;
for(col=0; col<N ; col++){
    if(isSafe(queens, row, col)){
        queens[row] = col;
        solveAll(queens, row + 1, N);
        queens[row] = -1; 
    }
}
}

void printBoard(const int queens[] , int N){
    int row;
    int col;
    for(row = 0; row<N ; row++){
        for(col= 0; col<N; col++){
if(queens[row] == col){
    printf("Q ");
}
else{
    printf(". ");
}
        }
        printf("\n");
    }
}

int main(){
int N;

scanf("%d" , &N);

int queens[N];

int i;
for(i= 0; i<N ; i++){
    queens[i] = -1;
}
solveAll(queens, 0, N);


    return 0;
}
#include <stdio.h>
int multiply(int x, int y, int A[x][y], int B[x][y], int C[x][y]);
int main(){

    int x, y, a,b;
    printf("Enter number of rows and colums for matrix A:\n");
    scanf("%d %d", &x, &y);
    printf("Enter number of rows and colums for matrix B:\n");
    scanf("%d %d", &a, &b);
    

    //define the matrices after taking user input for no of rows & cols.
    int A[100][100], B[100][100], C[100][100];

    //Take input for matrix A
    printf("Give values for Matrix A:\n");
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    //Print matrix A
    printf("Matrix A is: \n");
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Take input for matrix B
    printf("Give values for Matrix B:\n");
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    //Print matrix B
    printf("Matrix B is: \n");
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d  ", B[i][j]);
        }
        printf("\n");
    }

       printf("\n");

       for(int i = 0; i<x; i++){
        for(int j = 0; j<b; j++){
            C[i][j] = 0;
            for(int k = 0; k<a; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    //Print matrix C
    printf("The product of matrices A and B is: \n");
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }


}
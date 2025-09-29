#include <stdio.h>
int add(int x, int y, int A[x][y], int B[x][y], int C[x][y]);
int main(){

    int x, y;
    printf("Enter number of rows and colums:\n");
    scanf("%d\n%d", &x, &y);
    printf("%d, %d\n", x,y);

    //define the matrices after taking user input for no of rows & cols.
    int A[x][y], B[x][y], C[x][y];

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
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
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

    add(x,y,A,B,C);
    //Print matrix C
    printf("The sum of matrices A and B is: \n");
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }


}

int add(int x, int y, int A[x][y], int B[x][y], int C[x][y]){
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
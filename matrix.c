#include <stdio.h>
#include <stdbool.h>

int M = 4, N = 3;
int add();
int main(){
    //SEARCHING FOR AN ELEMENT IN A MATRIX
    bool is_Searching = false;

    int matrix[4][3] = {{1, 2, 3}, //first [] - rows and 2nd [] - columns
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}};
                      
    for(int i = 0; i < 4; i++){     //This for loop is in charge of ROWS
        for(int j = 0; j < 3; j++){     //This for loop is in charge of COLUMNS
            printf("%d ", matrix[i][j]);    //i - rows, j - columns
        }
        printf("\n");
    }
    
    int number = 1;
    for(int i = 0; i < 4; i++){     
        for(int j = 0; j < 3; j++){     
            if(matrix[i][j] == number){
                is_Searching = true;
                printf("The number %d was FOUND", number);      
            }
        }
    }
    if(is_Searching == false){
        printf("The number %d was NOT FOUND", number);
    }   
    
    printf("\n \n");

    //ADDITION OF 2 MATRICES
    int A[4][3] = { {1, 1, 1}, 
                    {2, 2, 2}, 
                    {3, 3, 3}, 
                    {4, 4, 4} };
    int B[4][3] = { {1, 1, 1}, 
                    {2, 2, 2}, 
                    {3, 3, 3}, 
                    {4, 4, 4} };
    int C[M][N];

    add(A, B, C);
    //while declaing func add, the attributes need to be declared what they are
    //i.e array, pointer etc.
    //while callint the func, only call the int variable. No need to specify array.
    printf("ADDITION OF 2 MATRICES: \n");

    for(int i = 0; i < 4; i++){     
        for(int j = 0; j < 3; j++){     
            printf("%d ", C[i][j]);    
        }
        printf("\n");
    }

    return 0;
}

int add(int a[M][N], int b[M][N], int c[M][N]){
    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
                c[i][j] = a[i][j] + b[i][j];
        }
    }

}

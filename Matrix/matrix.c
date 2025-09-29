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

    
}
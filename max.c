//MAXIMUM FUNC PROGRAM in C.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

        //MAXIMUM number for random array
    srand(time(NULL)); // NULL = 0. both can be used.
    int min = 1;
    int max = 50;
    int array[4];

    for(int i = 0; i<4; i++){

        array[i] = rand() % (max-min+1) + min;
        printf("%d, ", array[i]); //initating 4 random values in an array and printing them

        if(array[0] < array[i]){ // use '>' to display the largest number and
                                 //     '<' to display the smallest number
            array[0] = array[i];
        }
    }

    printf("\nThe largest number here is %d", array[0]);
    printf("\n");

    //MAXIMUM number for given array
    int arr[5] = {5, 10, 20, 30, 40};

    for(int i = 0; i<5; i++){

        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("\nThe largest number here is %d", arr[0]);


    return 0;

}

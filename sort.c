//SORTING PROGRAM in C.
#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

 
    for(int i = 0; i < n-1; i++){         //i,j,....n-2,n-1,n
        for(int j = i+1; j < n; j++){     
           if(arr[j] < arr[i]){
           int var = arr[i];
           arr[i] = arr[j];
           arr[j] = var;
           }

        }
    }

    for(int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }

    return 0; 

}

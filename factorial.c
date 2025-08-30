// FACTORIAL PROGRAM in C.
#include <stdio.h>
#include <math.h>

// Function to calculate factorial of a number.
int main() {
    
    int n;
    printf("Enter a number for its factorial: ");
    scanf("%d", &n);

    int res = 1;
    //5! = 1 * 2 * 3 * 4 * 5

        if(n > 0 && n != 1){
            for(int i = 1; i<=n; i++){
                res*=i;     //res = res * i
            }          
               
            printf("%d! = %d", n, res);
            
        }  
        else if(n<0){
            printf("INVALID");
        }      
        else{
            printf("Factorial is 1");
        }
    
    

}

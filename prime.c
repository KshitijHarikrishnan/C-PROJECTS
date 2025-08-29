#include <stdio.h>
#include <stdbool.h>

int main(){

    for(int i = 2; i<=100; i++){    

        int divisors = 0;

        for(int j = 2; j<i; j++){ 

            if(i % j == 0){ //if i divisible by j leaves a remainder 0 then{divisors++};
                divisors++;
            }
        }

    if(divisors == 0){
            printf("%d ", i);
        }

    }


    int number;
    int divisor = 0;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    
    if(number == 1 || number == 0){
        printf("Neither Prime nor Compposite.");
    }

    for(int i = 1; i<=number; i++){
        if(number % i == 0){
            divisor++;
        }
    }
  

    if(divisor == 2){
        printf("%d is a prime number\n", number);
    }
    else if(divisor > 2){
        printf("%d is a composite number\n", number);
    }

        return 0;

    }





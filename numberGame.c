#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
                //NUMBER GUESSING GAME
                

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 50;
    int answer = rand() % (max - min + 1) + min;

    printf("NUMBER GUESSING GAME\n");
    printf("Guess a number b/w %d - %d\n", min, max);

    do{
        scanf("%d", &guess);
        tries++; //tries = tries + 1

    if(guess > answer){
        printf("LOWER\n");
    }
    else if(guess < answer){
        printf("HIGHER\n");
    }
    else {
        printf("CORECT!!!\n");
    }
    }
    while (guess != answer);

    printf("The answer is %d. \n", answer);
    printf("You've used %d tries.\n", tries);
 
    return 0;
}
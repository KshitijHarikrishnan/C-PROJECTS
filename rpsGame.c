//ROCK PAPER SCISSORS GAME in C.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getUserChoice();
int getCompChoice();
void checkWinner();

int main(){
            //ROCK PAPER SCISSORS GAME

    srand(time(NULL));

    printf("ROCK PAPER SCISSORS GAME\n");

    int userChoice = getUserChoice(); 
    int compChoice = getCompChoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose ROCK\n");
        break;

    case 2:
        printf("You chose PAPER\n");
        break;
        
    case 3:
        printf("You chose SCISSORS\n");
        break;
    }

    switch (compChoice)
    {
    case 1:
        printf("Computer chose ROCK\n");
        break;

    case 2:
        printf("Computer chose PAPER\n");
        break;
        
    case 3:
        printf("Computer chose SCISSORS\n");
        break;
    }

    checkWinner(userChoice, compChoice);
    // printf("%d\n", userChoice);
    // printf("%d\n", compChoice);
}

int getUserChoice(){
    int choice = 0;

    do{
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Select ROCK, PAPER,or SCISSORS by typing 1, 2, or 3\n");
        scanf("%d", &choice);
    }
    while(choice < 1 || choice > 3);   
}

int getCompChoice(){

    return (rand() % 3) + 1;
}

void checkWinner(int userChoice, int compChoice){

    if(userChoice == compChoice){
        printf("Its a TIE.");
    }

    else if((userChoice == 1 && compChoice == 3) || 
            (userChoice == 2 && compChoice == 1) ||
            (userChoice == 3 && compChoice == 2)){
                printf("YOU Win.");
    }
    else if((userChoice == 1 && compChoice == 2) ||
            (userChoice == 2 && compChoice == 3) ||
            (userChoice == 3 && compChoice == 1)){
                printf("COMPUTER Wins.");
    }

}



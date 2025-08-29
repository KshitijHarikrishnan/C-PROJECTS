#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[3][100] = {"Q1. Which no. is the only even prime number?\n",
                            "Q2. Which planet is the largest in our solar system?\n",
                            "Q3. Is pi an irrational number?\n"};
                          
    
    char options[3][50] = {"A. 0\nB. 2\nC. 4\nD. 6\n",
                            "A. Earth\nB. Venus\nC. Jupiter\nD. Saturn\n",
                            "A. Yes\nB. No\nC. Maybe\nD. None\n"};
                        
    char answerKey[] = {'B', 'C', 'A'};

    
    int size = sizeof(questions)/sizeof(questions[0]);  

    //printf("%s\n", answerKey[0]);

    printf("QUIZ GAME\n");
    printf("Gain a point for every correct answer and lose a point for wrong answers.\n");
    printf("The score will be displayed in the end.\n");

    printf("\n");

    char choice = '\0';
    int score = 0;  

    for(int i = 0; i < size; i++){

        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &choice); //The space b4 %c is imp. It remove unnecessary indentation

        choice = toupper(choice);  //#include <ctype.h>

        if(choice == answerKey[i]){
            printf("CORRECT\n");
            score++;
        }
        else{printf("INCORRECT\n");
        }
    }        

    printf("Your score is %d out of %d points", score, size);
    
    return 0;
}
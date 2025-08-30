//PALINDROME PROGRAM in C.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    //Chk whether a given text is a palindrome or not.

    char word[100] = "" ;               
    bool isPalindrome = false;

    printf("Enter a word: ");
    scanf("%s", &word);
            //scanf can be replaced with below function:
            /* fgets(word, sizeof(word), stdin); 
             word[strlen(word) - 1] = '\0';*/


    for(int i = 0; i < strlen(word) / 2; i++){
        //Compare characters from the start and end of the string
    // and stop if a mismatch is found or the middle of the string is reached.

            if(word[i] == word[strlen(word) - 1 - i]){
              isPalindrome = true;
            }    
    }

        //ternary operator
        isPalindrome == true ? 
        printf("%s is a Palindrome", word) : printf("%s is not a Palindrome", word);


    return 0;

}

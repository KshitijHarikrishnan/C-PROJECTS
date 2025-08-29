#include <stdio.h>
#include <string.h>

int main(){

    //SHOPPING CART

    char item[30]= "";
    float price = 0.00;
    int quantity = 0;
    char currency ='$';
    float total = 0.00;


    printf("What item would you like to buy?");
    fgets(item, sizeof(item), stdin);

    //To remove new line character.
    item[strlen(item) - 1] = '\0'; //"\0" = null terminator character
                                                                          
    printf("What is the price of the item?");
    scanf("%f", &price);

    printf("How many would you like to buy?"); 
    scanf("%d", &quantity);
    
    total = price * quantity;

    printf("You have bought %d%s/s \n", quantity, item);
    printf("Hence your total is : %c%.2f", currency, total);

    return 0;
}
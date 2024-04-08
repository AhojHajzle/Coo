#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){

    //getting variables/ setting minimals
    int egg, milk, flour;
    int eggNeed = 1;
    int milkNeed = 200;
    int flourNeed = 200;
    //bool ingredients = false;
    //bool blin = false;
    
    //getting amounts
    printf("How many egg?\n");
    scanf("%d", &egg);
    printf("How many milk?\n");
    scanf("%d", &milk);
    printf("How many flour?\n");
    scanf("%d", &flour);
    //amount check
    printf("you have %d eggs,", egg);
    printf(" %dml milk,", milk);
    printf(" %dg flour\n\n\n", flour);
    
    //main code here
    if(egg < eggNeed || milk < milkNeed || flour < flourNeed){
        printf("you don't have enough shid \n");

    }
    else{
        egg = egg / eggNeed;
        printf("you have %d portions of eggs, ", egg);
        milk = milk / milkNeed;
        printf("%d portions of milk, ", milk);
        flour = flour / flourNeed;
        printf("%d portions of flour\n\n\n", flour);
    }

    int smallest;
    if(egg <= milk && milk <= flour){
        smallest = egg;
    }
    else if(milk <= egg && egg <= flour){
        smallest = milk;
    }
    else if(flour <= milk && flour <= egg){
        smallest = flour;
    }

    printf("you have %d portion of palatschinek", smallest);



        /*else if(egg < eggNeed){
            printf("you don't have enough eggs\n");
        }
    if(milk > milkNeed){
        printf("you have enough milk, \n");
    }
        else if(milk < milkNeed){
            printf("you don't have enough milk\n");
        }
    if(flour > flourNeed){
        printf("you have enough flour, \n");
    }
        else if(flour < flourNeed){
            printf("you don't have enough flour\n");
        }
    else{
        //blin = true;
        printf("you don't have enough ingredients, try again or leave\n");
    }*/
     

    

} 
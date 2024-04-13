#include <stdio.h>
#include <stdlib.h>

//learning arrays, because uhh idk but it'll be needed some day maybe
//program gets how many items you have, puts them in an array and then adds the items together to give you the total price of your shopping list, because why not
//extremely light weight solution for everyday needs
int main(){
    int arrayLength = 0;
    printf("How many items are you buying?\n");
    scanf("%d", &arrayLength);  //getting numbers of array elements, we insert that number of "floating" of sorts, decided by user input and saved under arrayLenght

    int price[arrayLength];     //array prepared for data insertion (can be any data type like int, float, double, char etc.)
    int total = 0;              //stores the final value, which is printed at the end
    for(int i = 0; i < arrayLength; i++){       //i cannot equal arrayLength because arrays start at 0, if it did equal it'd artificially increase the total amount
        printf("item number %d  \n\n", i);
        scanf("%d", &price[i]);
    }

    for(int i = 0; i < arrayLength; i++){       //printing back the value of each individual item
        printf("item number %d = %d\n", i, price[i]);
    }
    for(int i = 0; i < arrayLength; i++){       //printing price in czk seperately because why not need the typing excercise you feel?
        printf("%dczk\n\n", price[i]);
        total += price[i];                      //adding the prices together
    }
    printf("total price is %d", total);         //printing out tha value :cool:


    return 0;
}

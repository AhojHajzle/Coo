#include <stdio.h>
#include <stdbool.h>

//not working correctly chill
#define cisloAno 0
int main(){

    //user input, interface(?)
    int cisloOrig;
    

    printf("Remainder finder\nWrite your number\n\n");
    scanf("%d\n", &cisloOrig);

    printf("%d\n", cisloOrig);
    //variables se kteryma kod pracuje pro jasnost (snad)
    //int start = 1;
    int finish = cisloOrig-1;
    int step = 1;

    int cislo = cisloOrig;
    int finisher = 2;
    bool finishec = false;


    //main code (bro fr programuje ve dvou jazycich najednou)
    //pridat goto statement, vratit se z if do while,
    printf("%d = %d cislo -1\n\n", finish, cislo);
    while(cisloOrig > finisher && finisher <= finish && finishec == false){ //sem, loopec
        cislo = cislo % finisher;       //finisher se nepricita/neopakuje, porad deli nulou :(
        printf("funguju\n");  
        if(cislo != cisloAno){                                              //odsud 
            printf("nedelitene (zbytek %d)\n", cislo);
        }
        else if(cislo == cisloAno){                                         //pripadne odsud
            printf("%d delitelne", cislo);
            finishec = true; //nalezena delitelnost, koncime loop
        }
        finisher = finisher + step;
    }

    

    return 0;
}
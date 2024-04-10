#include <stdio.h>
#include <stdbool.h>

//working correctly chill
//hleda jestli cislo je nebo neni delitelne (prvocislo)
//TO DO poupravit komentz
#define cisloAno 0
int main(){

    //user input, interface(?)
    //z nejakejho douvoda musime zadat hodnotu dvakrat??? proc??? nechapu treba???
    int cisloOrig;
    

    printf("Remainder finder\nWrite your number\n\n");
    scanf("%d\n", &cisloOrig);

    printf("%d\n", cisloOrig); 
    //variables se kteryma kod pracuje pro jasnost (snad)
    int finish = cisloOrig-1; //patri k tutomu**
    int step = 1;

    int cislo = cisloOrig;
    int finisher = 2;
    bool finishec = false;


    //main code (bro fr programuje ve dvou jazycich najednou)
    //pridat goto statement, vratit se z if do while, (nee dement)
    printf("%d = %d cislo -1\n\n", finish, cislo); //jenom test jestli se da takhle pocitat odpoved ano da**
    while(cisloOrig > finisher && finisher <= finish && finishec == false){ //2. sem, loopec (loopec, to by asi se melo vratit ne??)*
        cislo = cislo % finisher;       //finisher se nepricita/neopakuje, porad deli nulou :( (chyba, finisher pricital ale cislo se neresetovalo tudiz najednou aha)
        printf("funguju\n");  
        if(cislo != cisloAno){                                              //1. odsud (nic se nemusi vracet)*
            printf("nedelitene (zbytek %d)\n", cislo);
        }
        else if(cislo == cisloAno){                                         
            printf("delitelne (zbytek %d), deleno cislem %d", cislo, finisher);
            finishec = true; //nalezena delitelnost, koncime loop
        }
        finisher = finisher + step;
        cislo = cisloOrig; //nove pridane, vyresilo vsechno, nyni funguje
    }

    

    return 0;
}
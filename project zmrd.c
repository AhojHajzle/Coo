#include <stdio.h>
#include <stdbool.h>

//working correctly chill
//hleda jestli cislo je nebo neni delitelne (prvocislo)
//TO DO poupravit komentz
#define cisloAno 0
int main(){

    int setter;
    printf("Choose your mode (0 for first, 1 for every)  ");
    scanf("%d", &setter);
    if(setter > 1){                     //te vyhodi protoze jsi dement a neumis vybirat ze dvou moznosti, upravit pro vraceni na vyber novejho cislo
        printf("kokot ses ztratil??");  
        return 1;
    }
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
    //udelat se swtichem by bylo asi vic cool ngl
    //druha verze, nachazi pouze delitele, nedelitele ignoruje, netiskne
    if(setter == 0){
        printf("%d = %d cislo -1\n\n", finish, cislo); //jenom test jestli se da takhle pocitat odpoved ano da**
    while(cisloOrig > finisher && finisher <= finish && finishec == false){ //2. sem, loopec (loopec, to by asi se melo vratit ne??)*
        cislo = cislo % finisher;       //finisher se nepricita/neopakuje, porad deli nulou :( (chyba, finisher pricital ale cislo se neresetovalo tudiz najednou aha)
        if(cislo == cisloAno){                                         
            printf("prvni delitej je %d\n\n", finisher);
            finishec = true;
            //nalezena PRVNI delitenost delitelnost, koncime loop.
        }
        else if(finisher == cislo - 1){     //ma vytisknout ze nema delitele protoze finisher max == cislo - 1 ale prej ne nebo to takhle nefunguje?????????????????????
            printf("Nema delitele");        
        }
        finisher = finisher + step;
        cislo = cisloOrig; //nove pridane, vyresilo vsechno, nyni funguje
    }
    }
    else if(setter == 1){
        printf("%d = %d cislo -1\n\n", finish, cislo); //jenom test jestli se da takhle pocitat odpoved ano da**
    while(cisloOrig > finisher && finisher <= finish && finishec == false){ //2. sem, loopec (loopec, to by asi se melo vratit ne??)*
        cislo = cislo % finisher;       //finisher se nepricita/neopakuje, porad deli nulou :( (chyba, finisher pricital ale cislo se neresetovalo tudiz najednou aha)
        if(cislo == cisloAno){                                         
            printf("delitelne cislem %d\n\n", finisher);
            //hledame dalsi delitelnosti nekoncime loop prehozenim finishec z false na true. hledame dalsi delitele a pritom tiskneme nedelitele
        }
        finisher = finisher + step;
        cislo = cisloOrig; //nove pridane, vyresilo vsechno, nyni funguje
    }
    }
    

    
    //prvni verze, nasla vsechny delitele I nedelitele, vsechny vytiskla
    /*printf("%d = %d cislo -1\n\n", finish, cislo); //jenom test jestli se da takhle pocitat odpoved ano da**
    while(cisloOrig > finisher && finisher <= finish && finishec == false){ //2. sem, loopec (loopec, to by asi se melo vratit ne??)*
        cislo = cislo % finisher;       //finisher se nepricita/neopakuje, porad deli nulou :( (chyba, finisher pricital ale cislo se neresetovalo tudiz najednou aha)
        if(cislo != cisloAno){                                              //1. odsud (nic se nemusi vracet)*
            printf("nedelitene cislem %d (zbytek %d)\n", finisher, cislo);
        }
        else if(cislo == cisloAno){                                         
            printf("delitelne cislem %d (zbytek %d)\n\n", finisher, cislo);
            //finishec = true; //nalezena PRVNI delitenost delitelnost, koncime loop. Bez najde vsechny delitele
        }
        finisher = finisher + step;
        cislo = cisloOrig; //nove pridane, vyresilo vsechno, nyni funguje
    }*/

    

    return 0;
}
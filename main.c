#include <stdio.h>
#include <stdlib.h>

#define CORVETTE_ID 1
#define CORVETTE_T 1
#define CORVETTE_NB 17
#define DESTROYER_ID 2
#define DESTROYER_T 3
#define DESTROYER_NB 2
#define CROISEUR_ID 3
#define CROISEUR_T 4
#define CROISEUR_NB 2
#define PORTEAVION_ID 4
#define PORTEAVION_T 6
#define PORTEABION_NB 1

void waitFor(unsigned int secs){ // attendre

    unsigned int retTime = time(0) + secs;
    while (time(0) < retTime);

}

void FilerWrite(){ //sauvergarde
    FILE* ftp = fopen("./test1.txt","a+");
    int i = 0;
    while(i < 1000){
        fprintf(ftp,"Hello world %d",i);
        i++;
    }
    fclose(ftp);
}

void FilerRead(){ //chargement
    FILE* fptr = fopen("./test1.txt","r");
    char c;
    while(1)
    {
        c = fgetc(fptr);
        if ( feof(fptr) )
        {
            break;
        }
        printf ("%c", c);
    }
    fclose(fptr);
}


int doRand(int startVal, int endVal){ // random pour viser

    waitFor(0.05);
    srand(time(NULL)*rand());
    if(startVal == 0 && endVal == 1){
        return rand() % 2;
    }else{
        return (rand() % ((endVal + startVal -1)) + startVal);
    }

}


int main()
{
    printf("Hello world!\n");
    return 0;
}

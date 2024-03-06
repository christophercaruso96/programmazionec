/*****************
    Author: Christopher Caruso
    Date: 2024/03/06
    Object: Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media aritmetica..

******************/

// Direttive al preprocessore

#include <stdio.h>

//Prototipo funzione average (passaggio per valore)
float average(int, int);

int main(){

    int firstnum, secondnum;

    printf("Inserisci un primo valore numerico qualsiasi\n");
    scanf("%d", &firstnum);

    printf("Inserisci un secondo valore numerico qualsiasi\n");
    scanf("%d", &secondnum);

    printf("La media aritmetica tra %d e %d da come risultato: %f\n",firstnum, secondnum, average(firstnum,secondnum));
    return 0;
}

//Definizione funzione average
float average(int firstop, int secondop){
    //eseguo il cast per ottenere la media aritmetica corretta nel caso in cui il risultato non sia un intero
    return (float)(firstop+secondop)/2;
}

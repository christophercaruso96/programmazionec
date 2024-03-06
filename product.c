/*****************
    Author: Christopher Caruso
    Date: 2024/03/06
    Object: Si scriva un programma che esegua l'operazione di moltiplicazione tra due numeri inseriti dall'utente.

******************/

// Direttive al preprocessore

#include <stdio.h>

//Prototipo funzione product (passaggio per valore)
float product(float, float);

int main(){

    float firstnum, secondnum;

    printf("Inserisci un primo valore numerico qualsiasi\n");
    scanf("%f", &firstnum);

    printf("Inserisci un secondo valore numerico qualsiasi\n");
    scanf("%f", &secondnum);

    printf("Il prodotto tra %f e %f da come risultato: %f\n",firstnum, secondnum, product(firstnum,secondnum));
    return 0;
}

//Definizione funzione product
float product(float firstop, float secondop){
    return firstop*secondop;
}
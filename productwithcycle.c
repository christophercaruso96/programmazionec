/*****************
    
    Author: Christopher Caruso
    Date: 2024/03/06
    Object: Si scriva un programma che esegua l'operazione di moltiplicazione tra due numeri inseriti dall'utente.
    Note: Prodotto tra interi con ciclo for


******************/

// Direttive al preprocessore

#include <stdio.h>

//Prototipo funzione product (passaggio per valore)
int product(int, int);

int main(){

    int firstnum, secondnum;

    printf("Inserisci un primo valore numerico qualsiasi\n");
    scanf("%d", &firstnum);

    printf("Inserisci un secondo valore numerico qualsiasi\n");
    scanf("%d", &secondnum);

    printf("Il prodotto tra %d e %d da come risultato: %d\n",firstnum, secondnum, product(firstnum,secondnum));
    return 0;
}

//Definizione funzione product
int product(int firstop, int secondop){
    int product = 0;
    
    for(int i=0; i < firstop; i++){
        product += secondop;
    }
    return product;
}
/*
Escreva um programa que verifica e mostra os números entre 0 e 1000 (inclusive) 
que, quando divididos por 11, produzam resto igual a 5.

Saida do programa:
5 16 27 38 49 60 71 82 93 104 115 126 137 148 159 170 181 192 203 214 225 236 247 
258 269 280 291 302 313 324 335 346 357 368 379 390 401 412 423 434 445 456 467 478 
489 500 511 522 533 544 555 566 577 588 599 610 621 632 643 654 665 676 687 698 709 
720 731 742 753 764 775 786 797 808 819 830 841 852 863 874 885 896 907 918 929 940 
951 962 973 984 995
*/

#include "stdio.h"

int main() {

    int i = 0;

    // Utilizando for
    for(i = 0; i <= 1000; i++) {
        
        // Verifico se o numero iterado (i) produz
        // resto igual a 5, quando dividido por 11
        if ((i % 11) == 5) {
            // Caso produza, mostre na tela!
            printf("%d ", i);
        }
    }

    /*
    // Utilizando while
    while(i <= 1000) {
        if ((i % 11) == 5) {
            // Caso produza, mostre na tela!
            printf("%d ", i);
        }
        i++; // Importante!!
    }
    */

    return 0;
}
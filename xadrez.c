#include <stdio.h>


void moverRecursivo(int passo, int limite, const char *direcao) {
    if (passo > limite)
        return;

    printf("%s, movimento %d\n", direcao, passo);
    moverRecursivo(passo + 1, limite, direcao);
}

void movimentoBispo() {
    const char *direcoes[] = {"Bispo direita", "bispo cima"};

    for (int d = 0; d < 2; d++) {
        for (int i = 0; i < 1; i++) { 
            moverRecursivo(1, 4, direcoes[d]);
        }
    }
}


void moverTorre(int passo, int limite) {
    if (passo > limite)
        return;

    printf("Torre direita, movimento: %d\n", passo);
    moverTorre(passo + 1, limite);
}


void moverRainha(int passo, int limite) {
    if (passo > limite)
        return;

    printf("Rainha esquerda, movimento: %d\n", passo);
    moverRainha(passo + 1, limite);
}


void movimentoCavalo() {
    for (int cima = 1; cima <= 2; cima++) {

        if (cima == 2) {
            printf("Cavalo cima, movimento: %d\n", cima);

            for (int direita = 1; direita <= 2; direita++) {

                if (direita == 2)
                    break;   

                if (direita == 0)
                    continue; 

                printf("Cavalo direita, movimento: %d\n", direita);
            }
        } 
        else {
            printf("Cavalo cima, movimento: %d\n", cima);
        }
    }
}


int main() {

    printf("MOVIMENTO BISPO \n\n");
    movimentoBispo();


    printf("\n\n*************\n\n");
    printf("MOVIMENTO TORRE\n\n");
    moverTorre(1, 8);


    printf("\n\n*************\n\n");
    printf("MOVIMENTO RAINHA\n\n");
    moverRainha(1, 8);


    printf("\n\n*************\n\n");
    printf("MOVIMENTO CAVALO\n\n");
    movimentoCavalo();

    return 0;
}
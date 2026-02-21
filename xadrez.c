#include <stdio.h>


// =====================================================
// FUNÇÃO RECURSIVA - TORRE
// Move horizontalmente para a direita
// =====================================================
void moverTorre(int casas) {

    // caso base → parar recursão
    if(casas == 0)
        return;

    printf("Direita\n");

    // chamada recursiva diminuindo 1 casa
    moverTorre(casas - 1);
}



// =====================================================
// FUNÇÃO RECURSIVA - RAINHA
// Move horizontalmente para a esquerda
// =====================================================
void moverRainha(int casas) {

    if(casas == 0)
        return;

    printf("Esquerda\n");

    moverRainha(casas - 1);
}



// =====================================================
// FUNÇÃO RECURSIVA - BISPO
// Recursão controla os "passos"
// Loops aninhados controlam a diagonal:
// externo → vertical (Cima)
// interno → horizontal (Direita)
// =====================================================
void moverBispo(int casas) {

    if(casas == 0)
        return;

    int v, h;

    // loop vertical (externo)
    for(v = 0; v < 1; v++) {
        printf("Cima\n");

        // loop horizontal (interno)
        for(h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}



// =====================================================
// CAVALO - LOOPS COMPLEXOS
// 2 casas para Cima + 1 para Direita (movimento em L)
// usando múltiplas variáveis + continue + break
// =====================================================
void moverCavalo() {

    int cimaMax = 2;
    int direitaMax = 1;

    int i, j;

    for(i = 0; i <= cimaMax; i++) {

        // ignora a última iteração do for
        if(i == cimaMax)
            continue;

        printf("Cima\n");

        // executa o movimento horizontal apenas
        // depois de terminar o vertical
        if(i == cimaMax - 1) {

            for(j = 0; j < direitaMax; j++) {

                printf("Direita\n");

                break; // garante apenas 1 passo horizontal
            }
        }
    }
}



// =====================================================
// MAIN
// =====================================================
int main() {

    int casasTorre  = 5;
    int casasBispo  = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);


    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);


    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);


    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

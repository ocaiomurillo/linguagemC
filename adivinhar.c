#include <stdio.h>

int main() {

    //imprime o cabeçalho do nosso jogo
    printf("****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhar *\n");
    printf("****************************************\n");


    int chute;

    printf("Qual seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);
}

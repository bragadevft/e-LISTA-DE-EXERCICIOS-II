#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;
    srand(time(NULL));
    numeroSecreto = rand() % 50 + 1;

    do {
        printf("Adivinhe o número secreto (entre 1 e 50): ");
        scanf("%d", &palpite);

        if (palpite < numeroSecreto) {
            printf("O número secreto é maior!\n");
        } else if (palpite > numeroSecreto) {
            printf("O número secreto é menor!\n");
        }
    } while (palpite != numeroSecreto);

    printf("Parabéns! Você acertou o número secreto!\n");
    return 0;
}
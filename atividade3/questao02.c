#include <stdio.h>

int main() {
    int N, soma = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i * i;
    }

    printf("A soma dos quadrados dos primeiros %d números inteiros é: %d\n", N, soma);
    return 0;
}
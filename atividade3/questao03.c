#include <stdio.h>

int main() {
    int soma = 0, valor;
    while (soma < 20) {
        printf("Digite o valor do dado: ");
        scanf("%d", &valor);
        soma += valor;
        printf("Soma atual: %d\n", soma);
    }
    printf("A soma atingiu ou ultrapassou 20!\n");
    return 0;
}
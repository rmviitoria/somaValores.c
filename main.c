/******************************************************************************

Crie um programa que solicita para o usuário que ele digite 10 valores inteiros. 
Ao final, imprima a soma de todos os valores digitados. 

*******************************************************************************/
#include <stdio.h>


int main() {
    int valores[10];
    int i, soma = 0;


    // Solicita e lê os 10 valores inteiros
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; // Adiciona o valor atual à soma total
    }


    // Imprime a soma dos valores digitados
    printf("\nA soma dos valores digitados é: %d\n", soma);


    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}


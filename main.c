#include <stdio.h>

// Cabeçalho
void header(){
    printf("--------------------------------------\n");
    printf("\tCalculadora de Minutos\n");
    printf("--------------------------------------\n\n");
}

int main(){
    // Variaveis
    int valor1, valor2;

    // Cabeçalho
    header();

    // Entrada
    printf("Digite \n* Horas: ");
    scanf("%d", &valor1);
    printf("* Minutos: ");
    scanf("%d", &valor2);

    // Saida
    if (valor2 > 60){
        printf("\nERRO: Valor de minutos incorreto!\n");
    }else {
        printf("\nValor Total (em minutos): %d\n", (valor1*60)+valor2);
    }

    return 0;
}
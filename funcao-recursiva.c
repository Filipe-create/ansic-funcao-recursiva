#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void pular_uma_linha(void);
int fatorial(int x);

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int numero;
    int resultado;

    printf("Digite um número inteiro...: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d é...: %d", numero, resultado);

    pular_uma_linha();

    system("pause");

    return (0);
}

int fatorial(int x){

    int resultado;

    if(x == 0)
        resultado = 1;

    else
        resultado = x * fatorial(x - 1);

    return resultado;
}

void pular_uma_linha(void){

    printf("\n");
}

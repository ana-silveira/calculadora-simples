/* Avalia��o � Trabalho da Disciplina [AVA 1]

Situa��o problematizadora: Uma empresa necessita de um programa que simule uma calculadora para poder ajudar
o setor financeiro a realizar as opera��es triviais  (soma, subtra��o, multiplica��o e divis�o).
� importante que a calculadora calcule de forma simult�nea todas as quatro opera��es e exiba os seus respectivos valores.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declara��o das vari�veis
    float valor1, valor2, soma, sub, div, mult;

    system("cls");

    // Entrada:
    printf("======== Programa de Calculadora desenvolvido pela aluna Ana Carolina. ======== \n");
    printf("\n");

    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    // Processamento:
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;


    printf("\n");
    printf("========================================\n");
    printf("\n");

    // Sa�da :
    printf("Os resultados para os valores %.2f e %.2f s�o: \n", valor1, valor2);
    printf("=> Soma: %.2f\n", soma);
    printf("=> Subtra��o: %.2f\n", sub);
    printf("=> Multiplica��o: %.2f\n", mult);
    printf("=> Divis�o: %.2f\n", div);

    printf("\n");

    system("pause");

}

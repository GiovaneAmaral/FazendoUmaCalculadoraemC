#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite a operação desejada (+, -, *, /, %%): ");
    scanf("%c", &operador);

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
                return 1; // Retorna um código de erro
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                resultado = (int)num1 % (int)num2;
            } else {
                printf("Erro: Resto da divisão por zero não é permitido!\n");
                return 1; // Retorna um código de erro
            }
            break;
        default:
            printf("Erro: Operador inválido!\n");
            return 1; // Retorna um código de erro
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}

//Escreva uma função que receba um byte c (que pode representar um caractere ASCII, por exemplo) 
//e transforme-o em uma string, ou seja, devolva uma string de comprimento 1 tendo c como único elemento.

#include <stdio.h>
#include <string.h>                 
#include <stdlib.h>

int main(){
    char c;
    char *str;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    str = (char *) malloc(2 * sizeof(char)); // Aloca espaço para 2 caracteres (1 caractere + '\0')
    if (str == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    str[0] = c; // Atribui o caractere à primeira posição
    str[1] = '\0'; // Adiciona o terminador nulo

    printf("A string resultante é: %s\n", str);

    free(str); // Libera a memória alocada
    return 0;
}
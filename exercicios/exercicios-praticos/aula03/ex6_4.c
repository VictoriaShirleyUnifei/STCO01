// Escreva uma função que receba duas strings ASCII, 
// str e del, e apague de str todos os bytes que estão em del. 
// Por exemplo, se str é  "aaa*$-bbb#ccc*"  e del é  "$#*",  o estado final de str deve se  "aaa-bbbccc".  
// Procure escrever uma função que seja eficiente. Sua função não deve alocar nenhum vetor novo.

#include <stdio.h>
#include <string.h>

void apaga_chars(char str[], const char del[]) {
    int len_str = strlen(str);
    int len_del = strlen(del);
    int write_index = 0;

    for (int read_index = 0; read_index < len_str; read_index++) {
        int to_delete = 0;
        for (int j = 0; j < len_del; j++) {
            if (str[read_index] == del[j]) {
                to_delete = 1;
                break;
            }
        }
        if (!to_delete) {
            str[write_index++] = str[read_index];
        }
    }
    str[write_index] = '\0'; // Termina a string resultante
}

int main() {
    char str[] = "aaa*$-bbb#ccc*";
    const char del[] = "$#*";

    apaga_chars(str, del);
    printf("%s\n", str); // Saída esperada: "aaa-bbbccc"

    return 0;
}
//Segmento máximo de zeros.  
//Escreva uma função que calcule o comprimento do mais longo 
//segmento de zeros (ou carreira de zeros) em um vetor de números inteiros. 
//Procure examinar o menor número possível de elementos do vetor.

int max_segmento_zeros(int n, int v[]) {
    int max_length = 0;
    int current_length = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 0;
        }
    }

    return max_length;
}
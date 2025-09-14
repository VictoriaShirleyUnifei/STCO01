//Um ponteiro pode ser usado para dizer a uma 
//função onde ela deve depositar o resultado de seus cálculos. 
//Escreva uma função hm que converta minutos em horas-e-minutos. 
//A função recebe um inteiro mnts e os endereços de duas variáveis inteiras,
// digamos h e m, e atribui valores a essas variáveis de modo que m 
//seja menor que 60 e que 60*h + m seja igual a mnts.  
//Escreva também uma função main que use a função hm.

#include <stdio.h>

void hm(int mnts, int *h, int *m) {
    if(h != NULL && m != NULL){
        *h = mnts / 60;
        *m = mnts % 60;
    }
    return;
}

int main(void) {
    int totalMinutos = 130;
    int horas, minutos;

    hm(totalMinutos, &horas, &minutos);
    printf("%d minutos = %d horas e %d minutos\n", totalMinutos, horas, minutos);

    return 0;
}

//SAÍDA ESPERADA
//130 minutos = 2 horas e 10 minutos
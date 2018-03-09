
#include <stdio.h>



int main() {
    int Aux, i, L1, L2;
    int Lado[3];

    for (int i = 1; i < 4; ++i) {
        printf("Digite o tamanho do lado: \n");
        scanf("%d", & Lado[i]);
    }

    if (Lado[1] < Lado[2]){
        Aux = Lado[1];
        Lado[1] = Lado[2];
        Lado[2] = Aux;
    }

    if (Lado[1] < Lado[3]) {
        Aux = Lado[1];
        Lado[1] = Lado[3];
        Lado[3] = Aux;
    }
    if (Lado[2] < Lado[3]) {
        Aux = Lado[2];
        Lado[2] = Lado[3];
        Lado[3] = Aux;
    }
        
        L1 = Lado[1]*Lado[1];
        L2 = (Lado[2]*Lado[2]) + (Lado[3]*Lado[3]);

        if ( L1 == (L2)) {
            printf("As medidas inseridas PODEM formar um triangulo retângulo.");
        }
        else
            printf("As medidas inseridas NÃO podem formar um triângulo retângulo.");


    return 0;
}

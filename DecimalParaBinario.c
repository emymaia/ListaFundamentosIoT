#include <stdio.h>

int main(void){
    int N1, Resultado, Contador,C1;
    int Resto[N1];
    printf("Digite o número: \n");
    scanf("%d", &N1);
    Contador = 0;
    Resultado = N1;



    while (Resultado >= 1) {
        Resultado = N1 / 2;
        Resto[Contador] = N1%2;
        N1 = Resultado;
        Contador += 1;
        if(Resultado<=0) {
            printf("%d\n", Resultado);
            for (C1 = Resto[Contador]; C1 == Resto[0]; C1 -= 1) {
                printf("%d\n", Resto[Contador]);
            }
        }
        else{}
        }



    getchar();
    return 0;

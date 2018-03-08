#include <stdio.h>

int main(){
    int N1, Resultado, Contador;
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
        if(Resultado == 0) {
            Contador = Contador - 1;
            while (0 <= Contador) {
                printf("%d", Resto[Contador]);
                Contador = Contador - 1;
        }
      }
    }



    getchar();
    return 0;
}

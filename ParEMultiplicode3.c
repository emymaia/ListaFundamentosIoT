#include <stdio.h>
#include <elf.h>



int main() {
    int N1, N2, Resto, Contador, T1;
    printf("Digite o primeiro número do intervalo: \n");
    scanf("%d", &N1);
    printf("Digite o segundo número do intervalo: \n");
    scanf("%d", &N2);

    printf("Os números pares e múltiplos de 3 contidos no intervalo entre %d e %d são: ", N1, N2);

    Resto = (N1 % 2);

    if (Resto == 0) {
        for (Contador = N1; Contador <= N2; Contador +=2){
            T1 = Contador % 3;
            if (T1 == 0){
                printf("%d\n", Contador);}
        }
    }

    else {
        N1 = N1 + 1;
        for (Contador = N1; Contador <= N2; Contador +=2){
            T1 = Contador % 3;
            if (T1 == 0) {
                printf("%d\n", Contador);}
        }
    }

getchar();
    return 0;
}
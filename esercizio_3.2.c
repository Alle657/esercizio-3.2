#include <stdio.h>

int main() {
    float numero;
    printf("inserisci un numero\n");
    scanf("%f", &numero);
    if(numero >= 0){
        printf("Il numero e' positivo");
    }else{
        printf("Il numero e' negativo");
    }
    return 0;
}

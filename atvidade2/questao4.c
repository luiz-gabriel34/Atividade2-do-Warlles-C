#include <stdio.h>


int main(){

    int num1, num2;

    printf("Informe o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Informe o segundo numero: \n");
    scanf("%d", &num2);

    if(num1 % num2 == 0){
        printf("O numero: %d e multiplo do numero: %d \n", num1, num2);
    }else{
        printf("Os numeros: %d e %d nao sao mltiplos \n", num1, num2);
    }

    return 0;
}
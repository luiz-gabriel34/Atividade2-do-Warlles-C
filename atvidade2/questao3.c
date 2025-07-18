#include <stdio.h>
            
int main() {
  int num1;

  printf("Informe um numero: \n");
  scanf("%d", &num1);

  if (num1 % 2 == 0){
    printf("O numero e par \n");
  } else{
    printf("O numero e impar \n");
  }

  return 0;
}
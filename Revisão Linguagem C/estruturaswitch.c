#include <stdio.h>
 
int main(void) {
  float produto = 100;
  int parcelas = 5;
  float valor_final;
 
  switch(parcelas){
    case 1:
      valor_final = produto * 0.9;
      break;
    case 2:
      valor_final = produto;
      break;
    case 5:
      valor_final = produto * 1.03;
      break;
    case 3:
      valor_final = produto * 1.05;
      break;
    default:
      valor_final = produto * 1.2;
      break;
  }
  printf("Valor final: R$%f\n", valor_final);
  return 0;
}

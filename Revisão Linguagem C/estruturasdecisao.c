#include <stdio.h>
 
int main(void) {
  
  float dinheiro, preco_almoco, preco_sobremesa;
  dinheiro = 35.0;
  preco_almoco = 20.0;
  preco_sobremesa = 16;
 
  //Sai para almoçar
  
  dinheiro = dinheiro - preco_almoco;
  if (dinheiro >= preco_sobremesa){
    printf("Hoje tem sobremesa!\n");
    dinheiro = dinheiro - preco_sobremesa;
  }
  
  printf("Voltando para o trabalho!\n");
  printf("Sobrou R$%f\n", dinheiro);
  return 0;
}

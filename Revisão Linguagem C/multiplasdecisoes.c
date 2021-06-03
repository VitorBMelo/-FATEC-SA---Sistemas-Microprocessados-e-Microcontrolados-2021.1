#include <stdio.h>
 
int main(void) {
  float dinheiro = 1500;
  float placa_mae = 700;
  float memoria_ram = 800;
  float processador = 700;
  float ssd = 350;
  float placa_de_video = 480;
 
  if(dinheiro >= placa_mae){
    printf("Comprar placa-mae!\n");
    dinheiro = dinheiro - placa_mae;
  }
 
  if(dinheiro >= memoria_ram){
    printf("Comprar memoria ram!\n");
    //dinheiro = dinheiro - memoria_ram;
    dinheiro -= memoria_ram;
  }
 
  if(dinheiro >= processador){
    printf("Comprar processador!\n");
    dinheiro -= processador;
  }
 
  if(dinheiro >= ssd){
    printf("Comprar ssd!\n");
    dinheiro -= ssd;
  }
 
  if(dinheiro >= placa_de_video){
    printf("Comprar placa_de_video!\n");
    dinheiro -= placa_de_video;
  }
 
  printf("Sobrou: R$%f\n", dinheiro);
  return 0;
}

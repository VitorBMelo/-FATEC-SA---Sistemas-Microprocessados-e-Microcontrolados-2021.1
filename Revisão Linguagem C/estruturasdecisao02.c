#include <stdio.h>

int main(void) {
    float dinheiro = 20;
    float preco_cinema = 35.0;
    float preco_2_lanches = 16.90;
    
    if(dinheiro >= preco_cinema) {
      printf("Hoje tem cinema!\n");
    } else if(dinheiro >= preco_2_lanches) {
      printf("Hoje tem lanche!\n");
    } else {
      printf("Hoje tem lolzinho mesmo\n");
    }
    
    return 0;


}

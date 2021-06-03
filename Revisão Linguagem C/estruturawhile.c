#include <stdio.h>

int main(void) {
  int senha = 123456;
  int palpite = rand() % 1000000;
  while(senha != palpite){
    palpite = rand() % 1000000;
    printf("Tentando quebrar: %i\n", palpite);
  }
  printf("Senha quebrada com sucesso: %i", palpite);
  return 0;
}

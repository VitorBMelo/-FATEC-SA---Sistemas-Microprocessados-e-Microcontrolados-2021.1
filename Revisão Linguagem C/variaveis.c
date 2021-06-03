#include <stdio.h>

int main(void) {
  
//Variável para armazenar numeros inteiros
int altura;

// Atribuição - ordem para colocar algo dentro de uma variável

altura = 184;

//Exibição do valor da variável
printf("O valor da minha altura é: %i \n", altura);

//Variável para armazenar um número real

float peso; // Numero real de 32 bits
double imc; // Numero real de 64 bits


//Ajuste da unidade de altura

float altura_metros;
altura_metros = altura/100.0;
peso = 105.47;
imc = peso/(altura_metros*altura_metros);
printf("Valor do IMC para altura %i e peso %f: %lf\n",altura, peso,imc);
return 0;

}

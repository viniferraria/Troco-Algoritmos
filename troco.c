#include "troco.h"
#include <stdio.h>

#define len(x) sizeof(x)/sizeof(x[0])

void troco(float recebido){
  float moedas[5] = {0.5000, 0.2500, 0.1000, 0.0500, 0.0100};
  int quantitade[5] = {0, 0, 0, 0, 0};
  float troco = 1 - recebido;
  for(int i = 0; i < len(quantitade); i++){
    if(troco >= moedas[i]){
      int quantidadeMoeda = 0;
      quantidadeMoeda = troco/moedas[i];
      quantitade[i] = quantidadeMoeda;
      printf("troco: %.4f\nquantidade %d\nmoeda: %.2f\n", troco,quantidadeMoeda, moedas[i]);
      troco = troco - quantidadeMoeda * moedas[i]; 
      printf("\nafter: %.4f\n", troco);
    }
  }
  // for(int resultado = 0; resultado < len(quantitade); resultado++){
  //   printf("Moeda de %.2f: %d\n", moedas[resultado], quantitade[resultado]);
  // }
  
}
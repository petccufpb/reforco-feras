#include <stdio.h>

union PesoVolume {
  float volume;
  unsigned int peso;
};
struct Produto {
  char *nome;
  float preco;
  union PesoVolume peso_volume;
};

int main(void) {
  struct Produto produto[3];

  produto[0].nome = "Refrigerante";
  produto[0].preco = 6.40;
  produto[0].peso_volume.volume = 2.5;

  produto[1].nome = "Carne";
  produto[1].preco = 16.20;
  produto[1].peso_volume.peso = 8;

  produto[2].nome = "Leite";
  produto[2].preco = 2.40;
  produto[2].peso_volume.volume = 1;

  for(int i = 0 ; i < 3 ; ++i){
    printf("Produto: %s\n", produto[i].nome);
    printf("Preço: %.f\n", produto[i].preco);
    printf("Volume: %.f \n", produto[i].peso_volume.volume);
    printf("Peso: %d\n===\n", produto[i].peso_volume.peso);
  }
  
  return 0;
}
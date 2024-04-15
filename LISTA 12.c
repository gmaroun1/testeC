#include <stdio.h>

/*

int idade() {
  printf("\nQual a sua idade?");
  int idade;
  scanf("%i", &idade);
  return idade;
}

void diasVividos(int *x, float *dias_vividos) {
  *dias_vividos = *x * 365.25;
}

int main(void) {
  printf("Dias vividos\n\n");
  float dias_vividos;
  int Idade = idade();
  diasVividos(&Idade, &dias_vividos);
  printf("\n\n%.1f", dias_vividos);
  
  return 0;
}

*/

float leia() {
  printf("\n\nDigite um valor real: ");
  float n;
  scanf("%f", &n);
  return n;
}

void ordenar(float *x, float *y, float *z) {
  if (*x > *y) {
    float aux = *y;
    *y = *x;
    *x = aux;
  } 

  if (*x > *z) {
    float aux = *z;
    *z = *x;
    *x = aux;
  }

  if (*y > *z) {
    float aux = *z;
    *z = *y;
    *y = aux;
  }
  
}

void escrevaResultado (float x, float y, float z) {
  printf("%f", y);
}


int main () {
  printf("Digite 3 numeros para saber o segundo maior: ");
  float a = leia();
  float b = leia();
  float c = leia();
  ordenar(&a, &b, &c);
  escrevaResultado(a, b, c);
  return 0;
}
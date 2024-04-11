#include <stdio.h>

int main(void) {
  float v1, v2;
  int op;
  printf("\n\tDigite o 1º valor: ");
  scanf("%f", &v1);
  printf("\n\tDigite o 2º valor: ");
  scanf("%f", &v2);

  printf("\n\tTabela de Operações:");
  printf("\n\t1 - Soma\n\t2 - Subtração\n\t3 - Multiplicação\n\t4 - Divisão");
  printf("\n\tEscolha uma operação: ");
  scanf("%d", &op);

 
   

  if (op == 1) {
    printf("\n\tResultado da soma de %.2f e %.2f é %.2f", v1, v2, v1 + v2);
  } else if (op == 2) {
    printf("\n\tResultado da subtração de %.2f e %.2f é %.2f", v1, v2, v1 - v2);
  } else if (op == 3) {
    printf("\n\tResultado da multiplicação de %.2f e %.2f é %.2f", v1, v2, v1 * v2);
  } else if (op == 4) {
    if (v2 == 0) {
      puts("\n\tNão é possível dividir por zero.\n");
    } else {
      printf("\n\tResultado da divisão de %.2f e %.2f é %.2f", v1, v2, v1 / v2);
    }
  }


  return 0;
}

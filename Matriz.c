#include <stdio.h>

int main(void) {
  int m[2][3];
  //preencher a matriz
  int x, y;
  for (x = 0; x < 2; x++){
    for (y = 0; y < 3; y++){
      printf ("Digite o valor da posição %d,%d\n", x, y);
      scanf ("%d", &m[x][y]);
    }
  }

  int maior = m[0][0];
  for (x = 0; x < 2; x++){
    for (y = 0; y < 3; y++){
      if (m[x][y] > maior)
         maior = m[x][y]; 
    }
  }

  printf ("O maior é: %d\n", maior);




  return 0;
}

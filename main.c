#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A = 0;
  printf("Choisir un nombre ?\n");
  scanf("%d", &A);
  printf("Choisir un diviseur de %d ?\n", A);
  int B = 0;
  scanf("%d", &B);
  printf("\nDivision euclidienne de %d par %d :\n", A,B);
  int quotient = 0;
  quotient = A/B;
  printf("Quotient : 0%d\n", quotient);
  int reste = 0;
  reste = A%B;
  printf("Reste : %d\n", reste);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice = 0;
  printf("=== Fonctions ===\n");
  printf("1. Restaurant\n");
  printf("2. Conditions\n");
  printf("Votre Choix ?\n");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
    printf("\nVous avez choisi la Fonction : Restaurant\n");
    restaurant();
    break;
  case 2:
    printf("\nVous avez choisi la Fonction : Conditions\n");
    conditions();
    break;
  default:
    printf("Choix invalable\n");
    break;
  }

  return 0;
}

int restaurant()
{
  int choice = 0;
  printf("=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Max\n");
  printf("Votre Choix ?\n");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
    printf("\nVous avez choisi le Royal Cheese\n");
    break;
  case 2:
    printf("\nVous avez choisi le Mc Deluxe\n");
    break;
  case 3:
    printf("\nVous avez choisi le Mc Bacon\n");
    break;
  case 4:
    printf("\nVous avez choisi le Big Mac\n");
    break;
  default:
    printf("\nVotre choix est incorret. Vous ne mangerez donc rien!\n");
    break;
  }

  return 0;
}

int conditions()
{
  int age = 3;
  int majeur = (age >= 18) ? 18 : 0;
  printf("Majeur : %d", majeur);
  return 0;
}

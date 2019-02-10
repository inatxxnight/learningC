#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int choice = 0;
  printf("=== Fonctions ===\n");
  printf("1. Restaurant\n");
  printf("2. Conditions\n");
  printf("3. Jeu 'Plus ou Moins'\n");
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
  case 3:
    printf("\nVous avez choisi la Fonction : Jeu 'Plus ou Moins'\n");
    firstgame();
    break;
  default:
    printf("Choix invalable\n");
    main();
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
    restaurant();
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

int firstgame()
{
  int choice = 0, nombreMystere = 0, mynumber = 0, compteur = 0, MAX = 100, MIN = 1;
  srand(time(NULL));
  printf("=== Niveau de Difficulte ===\n");
  printf("1. Normal\n");
  printf("2. Avance\n");
  printf("3. Expert\n");
  printf("Votre Choix ?\n");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
    printf("\nVous avez choisi le Niveau : Normal\n");
    MAX = 100, MIN = 1;
    break;
  case 2:
    printf("\nVous avez choisi le Niveau : Avance\n");
    MAX = 1000, MIN = 1;
    break;
  case 3:
    printf("\nVous avez choisi le Niveau : Expert\n");
    MAX = 10000, MIN = 1;
    break;
  default:
    printf("\nVotre choix est incorret\n");
    main();
    break;
  }

  int choice2 = 0;
  srand(time(NULL));
  printf("=== Nombre de Joueurs ===\n");
  printf("1. 1 Joueur\n");
  printf("2. 2 Joueurs\n");
  printf("Votre Choix ?\n");
  scanf("%d",&choice2);

  switch(choice2)
  {
  case 1:
    printf("\nVous avez choisi le mode : 1 Joueur\n");
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Le Nombre mystere est entre %d et %d\n", MIN, MAX);

    do
    {
        printf("Quel est le nombre mystere ? ");
        scanf("%d", &mynumber);
        compteur++;
        if(mynumber > nombreMystere)
        {
            printf("C'est moins !\n");
        }
        else if(mynumber < nombreMystere)
        {
            printf("C'est plus !\n");
        }
        else
        {
            printf("\nVous avez gagne bien joue !\n");
            printf("Vous avez gagne en %d coups\n", compteur);
        }
    }while(mynumber != nombreMystere);
    break;
  case 2:
    printf("\nVous avez choisi le mode : 2 Joueurs\n");
    printf("Joueur 1 : Definissez le Nombre Mystere\n");
    scanf("%d", &nombreMystere);
    printf("\r\r**");
    printf("Joueur 2 : Le Nombre mystere est entre %d et %d\n", MIN, MAX);

    do
    {
        printf("Joueur 2 : Quel est le nombre mystere ? ");
        scanf("%d", &mynumber);
        compteur++;
        if(mynumber > nombreMystere)
        {
            printf("C'est moins !\n");
        }
        else if(mynumber < nombreMystere)
        {
            printf("C'est plus !\n");
        }
        else
        {
            printf("\nJoueur 2 : Vous avez gagne bien joue !\n");
            printf("Joueur 2 : Vous avez gagne en %d coups\n", compteur);
        }
    }while(mynumber != nombreMystere);
    break;
  default:
    printf("\nVotre choix est incorret\n");
    main();
    break;
  }

  return 0;
}

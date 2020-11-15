#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char stringa_da_cifrare[128];
int opzione;
char chiave[128];
int controllo = 0;
char stringa_decifrata[128];
char stringa_cifrata[128];
int main (void)
{

  do
  {
    printf("inserisci la stringa da cifrare:");
    fgets(stringa_da_cifrare,128,stdin);

  } while(strlen(stringa_da_cifrare)-1 > 128);

  printf("digitare 1 per generare una chiave casuale, 2 per inserirne una manualmente ");
  scanf("%d", &opzione);

do {
  switch (opzione)
  {
    case 1:
    printf("hai scelto di generare casualmente una chiave\n");
    srand((unsigned) time(NULL));

    for(int g = 0; g < strlen(stringa_da_cifrare)-1; g++)
      {
        chiave[g] = (33 + rand() %96);
        printf("%c", chiave[g]);
      }
      printf("\n");
    controllo = 1;
    break;

    case 2:
    printf("inserisci la chiave di crpitaggio di lunghezza pari o inferiore alla stringa da cifrare\n");
    fflush(stdin);
    printf("%s", chiave);
    printf("la chiave inserita e': ");
    printf("%s",chiave);
    printf("\n");
    controllo = 1;
    break;
  }
} while(controllo != 1);


  for(int v=0; v < strlen(stringa_da_cifrare)-1; v++)
    {
      stringa_cifrata[v] = stringa_da_cifrare[v] ^ chiave[v];
      stringa_decifrata[v] = stringa_cifrata[v] ^ chiave[v];
    }
    printf("la stringa cifrata e': ");
    scanf("%s",stringa_cifrata);
    printf("\n");
    printf("la stringa decifrata e': ");
    scanf("%s",stringa_decifrata);
    printf("\n");
}

#include <stdio.h>
#include <string.h>

void introduce_cadena(char cadena[]);
int recorrer_espacios(char cadena[], int posicion);
int recorrer_palabra(char cadena[], int posicion);
int palabra(int resultado);


typedef struct{
char caracteres[80];
}lista;

lista guardar_plbr(void);

int main(void) {
  int posicion,resultado=0;
  char cadena[100]; 
  lista palabr[25];

    while(cadena[posicion]!=0){
  int b=0;

      introduce_cadena(cadena);
      palabr[b]= guardar_plbr();
      
   printf("\n%s ", palabr->caracteres);
    b++;
    
  }
   
 
  
     while(cadena[posicion]!=0){
       
      posicion=recorrer_espacios(cadena,posicion);
       
        if(cadena[posicion]!=0){
    
        posicion=recorrer_palabra(cadena, posicion);
         resultado++;
          
          
  }
    }


   palabra(resultado);

  
 
  
  return 0;
}

void introduce_cadena(char cadena[])
{
     printf("introduce tu cadena\n");
  scanf("%[^\n]s", cadena);
}
int recorrer_espacios(char cadena[], int posicion)
{
  while(cadena[posicion]==' ' && cadena[posicion]!=0){
    posicion++;

  }return (posicion);
}
int recorrer_palabra(char cadena[], int posicion)
{
   int b=0;//indice para el arreglo lista
  while(cadena[posicion]!=' ' && cadena[posicion]!=0){
      
    posicion++;

  
  }return (posicion);

  
}

lista guardarCadena()
{
 lista guardar_plbr; 
      printf("ingresa cadena\n");
      scanf(" %[^\n]s",guardar_plbr.caracteres);

    return guardar_plbr;
  
}
int palabra(int resultado)
{
  
 printf(" encontre %i palabras\n", resultado);
}





----


  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  #define MAX_PLAYERS 100

  // Estructura para representar a un jugador
  struct Player {
      char name[50];
      int number;
  };

  // Función para determinar al ganador
  struct Player findWinner(struct Player players[], int numPlayers) {
      struct Player winner = players[0];

      for (int i = 1; i < numPlayers; i++) {
          if (players[i].number > winner.number) {
              winner = players[i];
          }
      }

      return winner;
  }

  int main() {
      int numPlayers;
      struct Player players[MAX_PLAYERS];

      printf("Bienvenido al juego de encontrar al jugador con el número más grande.\n");
      printf("Ingrese el número de jugadores: ");
      scanf("%d", &numPlayers);

      if (numPlayers <= 0 || numPlayers > MAX_PLAYERS) {
          printf("Número de jugadores no válido. Debe estar entre 1 y %d.\n", MAX_PLAYERS);
          return 1;
      }

      // Ingresar los datos de los jugadores
      for (int i = 0; i < numPlayers; i++) {
          printf("Ingrese el nombre del jugador %d: ", i + 1);
          scanf("%s", players[i].name);
          printf("Ingrese un número del 1 al 100 para %s: ", players[i].name);
          scanf("%d", &players[i].number);

          if (players[i].number < 1 || players[i].number > 100) {
              printf("Número no válido. Debe estar entre 1 y 100.\n");
              return 1;
          }
      }

      // Encontrar al ganador
      struct Player winner = findWinner(players, numPlayers);

      // Mostrar al ganador
      printf("El ganador es %s con el número %d.\n", winner.name, winner.number);

      return 0;
  }

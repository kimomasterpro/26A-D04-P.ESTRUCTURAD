#include <stdio.h>
#include <string.h> 

int main() {
    int tablero[5][5];
    int fila, columna;
    char jugador[20];
    char barco[10] = "Destructor"; 

    //Pedir nombre del jugador antes de iniciar
    printf("Nombre del jugador: ");
    fgets(jugador, sizeof(jugador), stdin);  
  
    jugador[strcspn(jugador, "\n")] = 0;

    // Inicializar tablero
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tablero[i][j] = 0;
        }
    }

    // Colocar barcos manualmente
    tablero[1][2] = 1;
    tablero[3][4] = 1;
    tablero[0][0] = 1;

    // Mostrar tablero inicial
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("~ ");
        }
        printf("\n");
    }

    // Ciclo de turnos
    for(int turno = 0; turno < 5; turno++) {
        //Mostrar nombre en cada turno
        printf("\nTurno de %s\n", jugador);

        printf("Fila: ");
        scanf("%d", &fila);
        printf("Columna: ");
        scanf("%d", &columna);

        // Evaluar si hay barco o agua
        if (tablero[fila][columna] == 1) {
            // mensaje personalizado cuando impacte 
            printf("%s impactó un %s\n", jugador, barco);
            tablero[fila][columna] = 3;
        } else {
            printf("agua\n");
            tablero[fila][columna] = 2;
        }

        // actualización del tablero
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(tablero[i][j] == 0 || tablero[i][j] == 1) {
                    printf("~ ");
                } else if(tablero[i][j] == 2) {
                    printf("o ");
                } else if(tablero[i][j] == 3) {
                    printf("X ");
                }
            }
            printf("\n");
        }
    }

    // mensaje final 
    printf("\n%s termino la partida.\n", jugador);

    return 0;
}


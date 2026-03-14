#include <stdio.h>
#include <string.h>

int main() {
    int tablero[5][5];
    int fila, columna;

    char jugador[20];

    char barco[10] = "Fragata";

    // pedir nombre del jugador
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

    // Ciclo de turnos
    for(int turno = 0; turno < 5; turno++) {
        // Mostrar nombre en cada turno
        printf("\nTurno de %s\n", jugador);

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

        printf("Fila: ");
        scanf("%d", &fila);
        printf("Columna: ");
        scanf("%d", &columna);

        // evaluar si hay barco o agua
        if (tablero[fila][columna] == 1) {
            //mostrar mensaje personalizado al impactar
            printf("\n%s impacto un %s\n", jugador, barco);
            tablero[fila][columna] = 3;
        } else {
            printf("\nAgua\n");
            tablero[fila][columna] = 2;
        }
    }

    // mostrar mensaje final
    printf("\n%s gano la partida\n", jugador);

    return 0;
}

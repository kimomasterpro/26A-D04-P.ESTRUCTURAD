#include <stdio.h>
#include <stdlib.h>

/*
void mostrar (int v [3][3])

{

        int i,j;
        for(i=0;i<3;i++){

            for(j=0;j<3;j++){

                printf("%d ", v[i][j]);
            }
            printf("\n");
}





int main()
{
    int arrey [3][3]={1,2,3,4,5,6,7,8,9};
    mostrar (arrey);




    printf("Hello world!\n");
    return 0;
} */


    void captura (int m[3][3])
{

    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){

                printf("ingresa los numeros de la matriz: \n");

                scanf("%d", &m[i][j]);

            }
        }

    }

    void mostrar (int m [3][3])

{

        int i,j;
        for(i=0;i<3;i++){
                

            for(j=0;j<3;j++){

                printf("%d", m[i][j]);
            }
            printf("\n");
} }

void diagonal (int m[3][3])
{



  int i,j,suma;
        for(i=0;i<3;i++){

            for(j=0;j<3;j++){

                if (i==j)
                    suma+=m[i][j];


            }

            printf("\n");


        }
        printf("resultado: %d", suma);

}

    void guardado (int m [3][3], FILE *f ){

        int i,j;

        for(i=0;i<3;i++){

            for(j=0;j<3;j++){

                    fprintf(f,"%d", m[i][j]);
            }    fprintf(f,"\n");
        }




    }

    int main(){



    FILE *f;

    f=fopen("tablero.txt","w");


    int array [3][3];

    captura (array);
    mostrar (array);
    diagonal (array);
    guardado (array, f);

    return 0;

    }

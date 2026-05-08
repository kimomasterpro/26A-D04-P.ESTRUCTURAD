#include <stdio.h>
#include <stdlib.h>


/*

que es un puntero? es la direccion de memoria donde se aloja una variable

int f_doble(int a)
{

    if (a>0 && a<=100){
        a*=2;
        printf("%d\n", a);

    }   else{

        printf("¡¡¡debe de ser un numero del 1 al 100!!!");

        }
           return a;
    }

 */

int f_triple(int a)
{
    if (a>0 && a<=100){


        a*=3;
        int a=&a;

        printf("%d", a);

    } else{

        printf("¡¡¡debe de ser un numero del 1 al 100!!!");

        }



}



int main()
{

    int a;
    /*
    int x=5;
    int *p;
    p=&x;

    printf("%d\n", x);
    printf("%d\n", p);
    printf("%d\n", *p);
*/

 printf("dame un nnumero del 1 al 100\n");
    scanf ("%d", &a);
    f_triple(a);

    return 0;
}



int main(){
    
    
    int *v;
    
    v=(int*)malloc(5*sizeof(int));
    
    
    /* free(v); es una palabra reservada que sirve para liberar los espacios de memoria asignados anteriormente con malloc , malloc es memory alocation, alocacion es de memoria 





#include <stdio.h>
#include <stdlib.h>
int buscalinear(int *vetor_des, int n, int elemen);
int buscaordenada(int *vetor_ord, int n, int elemen);

int main(){

int vetor_des[10] = {7,3,1,5,6,2,8,4,9,0};
int vetor_ord[10] = {0,1,2,3,4,5,6,7,8,9};
int elemen = 5;
int n = 10, i, j;

printf ("---BUSCA LINEAR\n---Vetor:");
    for (i=0;i<n;i++){
        printf("[%d]", vetor_des[i]);
}

printf("--- o elemento 5 foi encontrado na posicao: %d",j+1, j = buscalinear(vetor_des, 10, 5));

printf ("\n\n---BUSCA ORDENADA\n---Vetor:");
    for (i=0;i<n;i++){
        printf("[%d]", vetor_ord[i]);
}

printf("--- o elemento 5 foi encontrado na posicao: %d",j+1, j = buscaordenada(vetor_ord, 10, 5));

printf ("\n\n---BUSCA BINARIA\n---Vetor:");
    for (i=0;i<n;i++){
        printf("[%d]", vetor_ord[i]);
}

printf("--- o elemento 5 foi encontrado na posicao: %d\n",j+1, j = buscabinaria(vetor_ord, 10, 5));




system("pause");
return(0);
}

int buscalinear(int *vetor_des, int n, int elemen)
{
    int i;
    for (i=0;i<n;i++){
        if(elemen==vetor_des[i]){
            return i;
        }
    }
    return -1;
}

int buscaordenada(int *vetor_ord, int n, int elemen){
    int i;
    for (i=0; i < n; i++){
        if(elemen == vetor_ord[i]){
            return i;
        } else{
              if(elemen<vetor_ord[i]){
                    return -1;
              }

        }
    }
    return -1;
}

int buscabinaria(int *vetor_ord, int n, int elemen){
    int i;
    int inicio = 0;
    int meio;
    int fim = n-1;

    while (inicio<=fim){
        meio = (inicio + fim)/2;
        if(elemen < vetor_ord[meio]){
            fim = meio - 1;
        }else{
            if(elemen>vetor_ord[meio]){
                inicio = meio+1;
            }else{
                return meio;
                }
            }
    }
    return -1;
}

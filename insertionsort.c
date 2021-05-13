#include <stdio.h>
#include <stdlib.h>
void ordena_insertionsort(int *vetor, int n);
int main(){

int vetor[10] = {7,3,1,5,6,2,8,4,9,0};
int n = 10, i, j;

printf ("---VETOR INSERTIONSORT\n---Vetor:");
for (i=0;i<n;i++){
    printf("[%d]", vetor[i]);
}
ordena_insertionsort(vetor, n);

printf("\n---Vetor ordenado por insertion sort:");
    for(i = 0; i < n; i++){
    printf("[%d]",vetor[i]);
}

system("pause");
return(0);
}

void ordena_insertionsort(int *vetor, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = vetor[i];
        for (j = i; (j > 0) && (aux < vetor[j-1]); j--){
            vetor[j] = vetor[j - 1];
            }
        vetor[j] = aux;
    }

}



#include <stdio.h>
#include <stdlib.h>
void ordena_selectionsort(int *vetor, int n);
int main(){

int vetor[10] = {7,3,1,5,6,2,8,4,9,0};


int n = 10, i, j;

printf ("---VETOR SELECTIONSORT\n---Vetor:");
for (i=0;i<n;i++){
    printf("[%d]", vetor[i]);
}
ordena_selectionsort(vetor, n);

printf("\n---Vetor ordenado por selection sort:");
for(i = 0; i < n; i++){
    printf("[%d]",vetor[i]);
}

system("pause");
return(0);
}

void ordena_selectionsort(int *vetor, int n){
    int i, j, menor, troca;
    for(i = 0; i< n - 1; i++){
        menor = i;
        for (j = i + 1; j < n; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if (i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }

}



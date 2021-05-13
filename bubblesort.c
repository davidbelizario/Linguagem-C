#include <stdio.h>
#include <stdlib.h>
void ordena_bubblesort(int *vetor, int n);
int main(){

int vetor[10] = {7,3,1,5,6,2,8,4,9,0};
int n = 10, i, j;

printf ("---VETOR BUBBLESORT\n---Vetor:");
    for (i=0;i<n;i++){
        printf("[%d]", vetor[i]);
}
ordena_bubblesort(vetor, n);
printf("\n---Vetor ordenado por bubblesort:");
    for(i = 0; i < n; i++){
        printf("[%d]",vetor[i]);
}

system("pause");
return(0);
}

void ordena_bubblesort(int *vetor, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i<fim - 1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[1+i] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);

}



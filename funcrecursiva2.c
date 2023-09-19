#include <stdio.h>

int main(void){
    int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;
    void ordemCrescente(int vetor [], int n );

    ordemCrescente(vetor, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("A ordem crescente dos vetores %i\n", vetor[i]);    
    }
    
    
    return 0;
}

void ordemCrescente(int vetor [], int n ){
     int i, j, temporaria;

    for(int i = 0; i < n; i++){
        for(int j = i + 1 ; j < n; j++  ){
            if(vetor[i] > vetor [j]){
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }

        }
    }

}





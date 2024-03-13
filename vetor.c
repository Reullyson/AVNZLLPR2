#include <stdio.h>

int main () {

 int vetor[9], r = 0, posicoes[9] = {0}, contador = 0;

    for(int i = 0; i < 9; i++)
        scanf("%d", &vetor[i]);

    for(int i = 0; i < 9; i++){
        for(int j = 1; j <= vetor[i]; j++){
            if(vetor[i] % j == 0){
                r++;
            }
        }
        if(r <= 2){
            posicoes[contador] = i;
            contador++;
            printf("Numero primo: %d, Posicao: %d\n", vetor[i], i);
        }
        r = 0;

    return 0;
}

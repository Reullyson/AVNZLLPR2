#include <stdio.h>

int main () {

int valor [3][5] = {0}, v = 0;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            scanf("%d", &valor[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            if(valor[i][j] >= 15 && valor[i][j] <= 20)
                v++;

    printf("Quantidade de elementos entre 15 e 20: %d\n", v);

return 0;
}

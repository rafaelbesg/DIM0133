#include <stdio.h>

int intrigados[51][51];

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    //inicialmente todos estão intrigados entre si
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            intrigados[i][j] = 1;
        }
    }

    int v[51];
    //para cada foto
    for(int i = 0; i < m; i++) {
        //armazena no vetor v quem saiu na foto
        for(int j = 0; j < n; j++) {
            scanf("%d", &v[j]);
            //o decremento é para que os identificadores das pessoas fiquem
            //entre 0 e n-1 (poderia manter 1 a n, mas precsaria ajeitar outras coisas também)
            v[j]--;
        }
        //para cada pessoa que apareceu na foto
        for(int j = 0; j < n; j++) {
            //se não for a primeira pessoa da foto
            //marcamos na matriz que o j-ésimo da foto e o (j-1)-ésimo da foto (ou seja, o da esquerda)
            //não estão intrigados
            if(j != 0) {
                intrigados[v[j-1]][v[j]] = 0;
                intrigados[v[j]][v[j-1]] = 0;
            }
            //se não for a última pessoa da foto
            //marcamos na matriz que o j-ésimo da foto e o (j+1)-ésimo da foto (ou seja, o da direita)
            //não estão intrigados
            if(j != n-1) {
                intrigados[v[j+1]][v[j]] = 0;
                intrigados[v[j]][v[j+1]] = 0;
            }
        }
    }
    //percorre a matriz de intrigados (só metade, já que se i e j estão, j e i também é um par)
    int total = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(intrigados[i][j] == 1)
                total++;
        }
    }
    printf("%d\n", total);

    return 0;

}

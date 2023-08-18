#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int ultimoDigito, restante;

    scanf("%d", &n);
    
    ultimoDigito = n%10;
    restante = n/10;

    printf("%d %d\n", restante, ultimoDigito);

    return 0;
}


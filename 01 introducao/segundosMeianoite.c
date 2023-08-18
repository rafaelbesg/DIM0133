#include <stdio.h>

int main() {

    int h, m, s;

    scanf("%d %d %d", &h, &m, &s);

    int tempoTotal;

    tempoTotal = h*60*60 + m*60 + s;

    printf("%d\n", tempoTotal);

    return 0;
}
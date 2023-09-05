#include <stdio.h>

int main() {

	//12 0 -> 12*60 + 0
	//13 5 -> 13*60 + 5
	//(13*60 + 5) - (12*60 + 0)
	//65 -> 65/60h 65%60min (1h 5min)

	int h1, m1, h2, m2;
	int minutos1, minutos2;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	minutos1 = h1*60 + m1;
	minutos2 = h2*60 + m2;

	if(minutos1 > minutos2) {
		minutos2 += 24*60;
	}
	int dif = minutos2 - minutos1;

	printf("%dh%dmin\n", dif/60, dif%60);

	return 0;

}

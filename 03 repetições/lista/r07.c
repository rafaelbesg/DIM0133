#include <stdio.h>

int main() {

	int comprimento, largura;
	int dias = 0;

	scanf("%d %d", &comprimento, &largura);

	while(comprimento != largura) {
		if(comprimento > largura) {
			comprimento /= 2; //comprimento = comprimento / 2
		} else {
			largura /= 2;
		}
		dias++;
	}
	printf("%d\n", dias);


	return 0;

}

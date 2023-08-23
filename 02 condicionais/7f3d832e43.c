#include <stdio.h>

int main() {

	int c0, c1, c2, c3;
	int desconto = 0;

	scanf("%d %d %d %d", &c0, &c1, &c2, &c3);

	//especiais (pode acumular, exceto 1):
	//	1: primeira compra (20%)
	//	4: programa lealdade (4%)
	//	5: parcerias (3%)

	//eventos (se repetido, considerar o primeiro):
	//	2: dia das crianças (5%)
	//	3: black friday (7%)
	//	6: cyber monday (6%)

	//verifica se um dos cupons é o cupom 1
	if(c0 == 1 || c1 == 1 || c2 == 1 || c3 == 1) {
		desconto = 20;
	} else {
		//computar os cupons especiais
		int qtdCupons4 = 0;
		int qtdCupons5 = 0;
		if(c0 == 4) qtdCupons4++;
		if(c1 == 4) qtdCupons4++;
		if(c2 == 4) qtdCupons4++;
		if(c3 == 4) qtdCupons4++;
		if(qtdCupons4 > 0) desconto += 4;
		if(c0 == 5) qtdCupons5++;
		if(c1 == 5) qtdCupons5++;
		if(c2 == 5) qtdCupons5++;
		if(c3 == 5) qtdCupons5++;
		if(qtdCupons5 > 0) desconto += 3;

		//computar os cupons de eventos
		int jaUsouCupomEvento = 0;
		int cupomEvento = 0;
		if(c0 == 2 || c0 == 3 || c0 == 6) {
			jaUsouCupomEvento = 1;
			cupomEvento = c0;
		}
		if(jaUsouCupomEvento == 0 && (c1 == 2 || c1 == 3 || c1 == 6)) {
			jaUsouCupomEvento = 1;
			cupomEvento = c1;
		}
		if(jaUsouCupomEvento == 0 && (c2 == 2 || c2 == 3 || c2 == 6)) {
			jaUsouCupomEvento = 1;
			cupomEvento = c2;
		}
		if(jaUsouCupomEvento == 0 && (c3 == 2 || c3 == 3 || c3 == 6)) {
			jaUsouCupomEvento = 1;
			cupomEvento = c3;
		}
		if(cupomEvento == 2)
			desconto += 5;
		if(cupomEvento == 3)
			desconto += 7;
		if(cupomEvento == 6)
			desconto += 6;
	}

	return 0;

}

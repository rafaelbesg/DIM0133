#include <bits/stdc++.h>

using namespace std;

//exemplo em c++ de como utilizar um vetor de tamanho dinâmico
//para compilar: g++ exemplo.cpp
int main() {

	vector<int> v;

	while(true) {
		int x;
		cin >> x;
		v.push_back(x); //adiciona x no vector
		//v.size refere-se ao número de elementos usados do vector v
		//v.capacity refere-se à capacidade do vector v
		//cada vez que adiciona-se um elemento quando size == capacity, capacity dobra de tamanho
		cout << v.size() << " " << v.capacity() << endl;
	}

	return 0;

}

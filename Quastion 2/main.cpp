#include"main.h"


int main() {
	Vector v1(9), v2(9), v3;
	cout << "Digite os numeros para os 5 perimeiros numerros de cada vector";
	for (int i = 0; i < 5; i++)
	{
		cin >> v1[i];
		v1.addSize();
		v2.addSize();
	}
	v2 = v1;
	cout << v1 << endl << v2 << endl << "Agora a mult: " << v1*v2 ;

}
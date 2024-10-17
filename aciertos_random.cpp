#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int n, nRandom, aciertos;
	aciertos = 0;
	srand((time(0)));
	
	cout << "Tenes 3 oportunidades de acertar al numero" << endl;
	
	for(int i = 0; i < 3; i++){
		nRandom = rand() % 10;
		cout << "Ingrese un numero: " ;
		cin >> n;
		if(n == nRandom){
			aciertos = aciertos + 1;
		}
		cout << "El numero era: " << nRandom << endl;
	}
	
	cout << "Tuviste " << aciertos << " correctos." ;

return 0;
}

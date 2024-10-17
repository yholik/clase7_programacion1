#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int vector[10], n, mayor, menor;
	char res;
	srand((time(0)));
	
	for(int i = 0; i < 10; i++){
		int r = rand();
		vector[i] = r;
		if( i == 0){
			mayor = vector[i];
			menor = vector[i];
		}
		cout << r << endl;
		if(vector[i] > mayor){
			mayor = vector[i];
		}else{
			if(vector[i] < menor){
				menor = vector[i];
			}
		} 
	}
	cout << "El mayor es: " << mayor << " El menor es: " << menor << endl;
	
	do{
		cout << "Ingrese posicion para saber valor almacenado: ";
		cin >> n;
		for(int i = 0; i < 10; i++){
			if( i == n){
			cout << vector[i] << endl;
			cout << endl;
			}
		}
		
		cout << "Continuar? S/N ";
		cin >> res;
		
	}while(res == 'S' || res == 's');
	
	
	return 0;
}

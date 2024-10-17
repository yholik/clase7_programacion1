#include <iostream>
using namespace std;

int suma(int, int);
int resta(int, int);
double multiplicacion(double, double);
float dividir(float, float);
int resto(int, int);

int main(){
	int r, n1, n2, opc;
	do{
		cout << "Seleccione la opcion deseada 1- Suma 2- Resta 3- Division 4- Multiplicacion 5- Resto 6- Terminar" << endl;
		cin >> opc;
		
		if(opc >= 1 && opc <= 5){
		
		cout << "Ingrese el primer numero: " << endl;
		cin >> n1;
		cout << "Ingrese el segundo numero: " << endl;
		cin >> n2;
		switch(opc){
		case 1:
				r = suma(n1,n2);
				break;
				case 2:
					r = resta(n1,n2);
					break;
				case 3:
						r = dividir(n1,n2);
						break;
					case 4:
							r = multiplicacion(n1,n2);
							break;
					case 5:
								r = resto(n1,n2);
								break;
								default:
									opc = 6;
									break;
		}
		cout << "El resultado de la operacion es: " << r << endl;
		}
		
	}while(opc !=6 );
	
	return 0;
}


int suma(int a, int b){
	return a+b;
}

int resta(int a, int b){
	return a-b;
}

double multiplicacion(double a, double b){
	return a*b;
}

float dividir(float a, float b){
	return a/b;
}

int resto(int a, int b){
	return a%b;
}

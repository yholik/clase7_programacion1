#include <iostream>
using namespace std;

double valorAbsoluto(double);

int main(){
double v, a;

cout << "Ingrese un valor numerico: ";
cin >> v;

a = valorAbsoluto(v);

cout << "El valor absoluto de " << v << " es" << a << endl;

return 0;
}

double valorAbsoluto(double d){
	return d<0?-d:d;
}

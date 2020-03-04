#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	ofstream fichero("prueba.txt");
	fichero <<"Esto es una linea" << endl;
	fichero <<"Esto es otra";
	fichero <<" y esto es continuacion de la anterior" << endl; 
	fichero.close();
	cout << "Fichero creado" << endl;
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	string nombre;
	string linea;
	cout << "Dime el nombre del fichero: ";
	getline(cin, nombre);
	
	ifstream fichero(nombre.c_str());
	while (! fichero.eof())
	{
		
		getline(fichero, linea);
		if(!fichero.eof())
			cout << linea << endl;
	}
	fichero.close();
	return 0;
}

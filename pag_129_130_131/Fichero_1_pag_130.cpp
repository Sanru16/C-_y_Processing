#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	
	string linea;
	ifstream fichero("prueba.txt");
	while (! fichero.eof())
	{
	getline(fichero,linea );
	if (! fichero.eof())
	cout << linea << endl;
	
}
	fichero.close();
	return 0;
}

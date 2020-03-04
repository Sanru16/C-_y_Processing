#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	
	string linea;
	int contador =1;
	ifstream fichero("prueba.txt");
	while (! fichero.eof())
	{
	getline(fichero,linea );
	if (! fichero.eof())
	cout << contador << ": " << linea << endl;
	contador ++;
	
}
	fichero.close();
	return 0;
}

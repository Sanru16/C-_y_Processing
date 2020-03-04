#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream fichero("prueba.txt");
	string palabra1, palabra2;
	
	fichero >> palabra1;
	fichero >> palabra2;
	cout << " se ha leido: " << endl;
	cout << palabra1 << " " ;
	cout << palabra2 << endl;
	fichero.close();
	return 0;
}

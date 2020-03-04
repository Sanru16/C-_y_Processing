#include <iostream>
using namespace std;


string saludar(string nombre, int n){
	string despedida = " Adios ";
	
	if(n ==1){
		for(int i = 1; i <=4; i++)
		cout << " Hola "  << nombre << endl ;
	}
	if(n ==2){
		for(int i = 1; i <=4; i++)
		cout << " Buenas noches " << nombre << endl ;
	}
	if(n ==3){
		for(int i = 1; i <=4; i++)
		cout << " Que tal estas? " << nombre << endl ;
	}
	if(n ==4){
		for(int i = 1; i <=4; i++)	
		cout << " Buenos dias " << nombre << endl ;
	}
	
	if((n >=5)||(n<=0)){
	
		cout << " por favor " << nombre << " introduce un numero del 1 al 4 " << endl ;
	}
return despedida ;

}

int main(){
	cout << saludar("duque", 3); 
	
	
	return 0;
}




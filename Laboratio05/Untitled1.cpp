#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream archivo;
	
	archivo.open("datos.txt");
	
	archivo<<"Primera l�nea de texto"<<endl;
	archivo<<"Segunda l�nea de texto"<<endl;
	archivo<<"Ul�nea l�nea de de texto"<<endl;
	
	archivo.close();
	return 0;
	
}

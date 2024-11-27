#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream archivo;
	
	archivo.open("datos.txt");
	
	archivo<<"Primera línea de texto"<<endl;
	archivo<<"Segunda línea de texto"<<endl;
	archivo<<"Ulínea línea de de texto"<<endl;
	
	archivo.close();
	return 0;
	
}

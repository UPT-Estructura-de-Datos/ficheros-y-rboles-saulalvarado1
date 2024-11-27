#include <fstream>
#include <iostream>
using namespace std;
typedef char TCadena[30];
int main()
{
	int i;
	float r;
	TCadena cad;
	ifstream fichin("EJEMPLO5.TXT");
	if (!fichin)
		cout << "\ Incapaz de crear o abrir el fichero ";
	else{
		fichin >> i;
		while (!fichin.eof()){
			cout << i << " ";
		fichin >> r;
		cout << r << " ";
		fichin >> cad;
		cout << cad << "\n";
		fichin >> i;
		}
		fichin.close();
	}

}

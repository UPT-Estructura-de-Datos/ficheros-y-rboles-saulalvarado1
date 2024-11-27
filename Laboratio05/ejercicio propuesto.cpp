#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombre, seccion;
    
    ofstream archivo("grupo.txt");
    
    if (!archivo) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1; 
    }

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre de la persona " << (i + 1) << ": ";
        getline(cin, nombre); // Leemos el nombre
        cout << "Ingrese la secci�n de " << nombre << ": ";
        getline(cin, seccion); // Leemos la secci�n
 
        archivo << "Nombre: " << nombre << ", Secci�n: " << seccion << endl;
    }

    archivo.close();
    
    cout << "Los datos se han guardado correctamente en 'grupo.txt'." << endl;
    
    return 0;
}

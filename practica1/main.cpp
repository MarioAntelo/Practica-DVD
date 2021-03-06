#include "cadena.h"
#include "func.h"

using namespace std;

int main(int argc, const char* argv[]){
	
	if (argc != 4) {
		cout << "El numero de argumentos introducidos no es el correcto" << endl;
		cout << "Modo de funcionamiento: main cadena tamaño_subcadena caracter" << endl;
		return -1;
	}
	
	string str_cad = argv[1];
	int tam_subcad = atoi(argv[2]);
	char caracter = *argv[3];
	
	CADENA cadena(str_cad, tam_subcad, caracter);

	cadena.print();

	solucion res;
	res = dvd_subcad(cadena, 0, cadena.getSize()-1);
	
	cout << "solucion==> apariciones: "<< res.max << " empieza:" << res.ini_subcad << endl;
	return 0;
}

#include <iostream>
#include <cmath>    
using namespace std;
int main(){
    int opcion;
    bool salir = false;
    while (!salir) {
        cout << "Calcular costo total de abastos" << endl;
        cout<< "1. Calcular costo por producto" << endl;
        cout<< "2. Calcular costo total de la compra" << endl;
        cout<< "3. Salir" << endl;
        cout<< "Ingrese una opcion: " <<endl;
        cin >> opcion;
        switch (opcion) {
            case 1: {
                int cantidad;
                float precio_unitario;
                cout << "Ingrese la cantidad de productos: " << endl;
                cin >> cantidad;
                cout << "Ingrese el precio unitario del producto: " << endl;
                cin >> precio_unitario;
                float costo_total = cantidad * precio_unitario;
                cout << "El costo total por producto es: " << costo_total << endl;
                break;
            }
            case 2: {
                int num_productos;
                cout << "Ingrese el numero de productos diferentes: " << endl;
                cin >> num_productos;
                float costo_total_compra = 0.0;
                for (int i = 0; i < num_productos; i++) {
                    int cantidad;
                    float precio_unitario;
                    cout << "Ingrese la cantidad del producto " << (i + 1) << ": " << endl;
                    cin >> cantidad;
                    cout << "Ingrese el precio unitario del producto " << (i + 1) << ": " << endl;
                    cin >> precio_unitario;
                    costo_total_compra += cantidad * precio_unitario;
                }
                cout << "El costo total de la compra es: " << costo_total_compra << endl;
                break;
            }
            case 3:
                salir = true;
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor intente de nuevo." << endl;
        }
    }
    return 0;
}
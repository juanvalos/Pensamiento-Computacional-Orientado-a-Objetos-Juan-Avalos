#ifndef ALMACEN_H
#define ALMACEN_H

using namespace std;
#include <iostream>
#include <vector>

#include "Productos.h"

class Almacen {

    private:
        vector<Productos*> productos;   // Aquí es donde se usa composición para decir qye cada almacen va a estar constituido
                                        // Por atributos de tipo "Producto" Además de estos atributos van a ser parte de 
                                        // un vector.
    public:
        // Constructores
        Almacen() {         // Estamos diciendo que cuando se cree un atributo de tipo almacen, este
                            // va a estar vacío por default       
        }

        // Agregamos a los metodos Getters
         vector<Productos*> getProductos() {
            return productos;
        }
        
        // Agregamos a los Métodos necesarios para que nuestro proyecto funcione
       
        void agregarProducto(Productos* prod) {  // Este método sirve para poder agregar un objeto al vector en la clase almacen
            productos.push_back(prod);
        }

        void printData() {          // Este metodo va a imprimir el método "PrintData" de cáda atributo que este dentro de 
                                    // una variable de tipo "Almacen"
            cout << " " << endl ;
            cout << "Inventario del Almacen:" << endl ;

            for(int i = 0; i < productos.size(); i++) {
                productos[i]->printData();
                cout << " " << endl;
                cout << " " << endl;
            }

        }

};

#endif
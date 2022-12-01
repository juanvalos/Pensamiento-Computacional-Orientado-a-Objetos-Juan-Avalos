#ifndef PRODUCTOS_H
#define PRODUCTOS_H

using namespace std;
#include <iostream>
#include <string>

/*
Esta clase es la clase madre para todo tipo de productos, esta tiene como atributos "nombre" y "precio", ya
que todos los artículos dentro de un super mercado tienen esas 2 carácterísticas. Usaremos herencia para poder 
heredar estos 2 atributos y el Método abstracto llamado "PrintData". Elegí usar un método virtual para este ya que este
metodo va a imprimir toda la informacion del producto, y debido a que cada producto tiene diferentes caracteristicas,
se tiene que desarrollar este metodo en cada una de las clases de cada tipo de productos.
*/
class Productos {
    
    protected:                  // Agregamos estos 2 atributos en "protected" para que así las puedan heredar las clases hijas.
        string nombre ;
        float precio ;
    
    public:                     // Agregamos estos metodos en "public" para que sean accesados desde el main o por otra clase.
        
        // Constructores
        Productos(string nom, float prec) {
            nombre = nom ;
            precio = prec ;
        }

        // Agregamos Getters
        string getnombre() {
        return nombre;
        }


        float getPrecio() {
            return precio;
        }
        
        // Agregamos Setters
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        } 

        // Agregamos el metodo virtual "printData" que sera desarrollado en cada clase hija
        virtual void printData() {       
            cout << "Nombre: "<< nombre<< endl;
            cout << "Precio: "<< nombre<< endl;
        } 
};

#endif

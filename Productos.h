#ifndef PRODUCTOS_H
#define PRODUCTOS_H

using namespace std;
#include <iostream>
#include <string>

class Productos {
    
    protected:
        string nombre ;
        float precio ;
    
    public:
        
        // Constructores
        Productos(string nom, float prec) {
            nombre = nom ;
            precio = prec ;
        }

        string getnombre() {
        return nombre;
        }


        float getPrecio() {
            return precio;
        }
        

        void setNombre(string nom) {
            nombre = nom;
        }


        void setPrecio(int pre) {
            precio = pre;
        } 


        void sumatoriaPrecios() {

        }


        void contProductos() {

        }

        virtual void productoAgregado() {
            cout << "El articulo ha sido agregado al almacen ";
        } 
};

#endif

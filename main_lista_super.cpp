#include <iostream>
using namespace std;

#include "Lista_super.h"

int main() {
    Alimentos jamon;
    
    jamon.setNombre("Paquete de Jamon");
    jamon.setPrecio(42);
    jamon.printData();


    Bebidas coca_cola;
    
    coca_cola.setNombre("Coca Cola");
    coca_cola.setPrecio(42);
    coca_cola.printData();


    ProductosLimp jabon_roma;
    
    jabon_roma.setNombre("Bolsa de Jabón Roma");
    jabon_roma.setPrecio(70);
    jabon_roma.printData();


    return 0;
}  
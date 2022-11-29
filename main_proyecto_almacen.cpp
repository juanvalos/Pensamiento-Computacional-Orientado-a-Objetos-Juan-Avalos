#include <iostream>
using namespace std;

#include "Alimentos.h"
#include "Bebidas.h"
#include "ProductosLimpieza.h"
#include "Almacen.h"

int main() {

    // Crear Productos
    Alimentos jamon ("Jamon" , 35 , 750, 1, "31/12/22" );
    Bebidas coca_cola ("Coca Cola" , 22 , 1200, "31/12/23" ); 
    ProductosLimpieza jabon_roma("Jabon Roma", 42, 1000, "Lavar Ropa");


    // Agregarlos al Almacen
    Almacen queretaro;
    queretaro.agregarProducto(&jamon);
    queretaro.agregarProducto(&coca_cola);
    queretaro.agregarProducto(&jabon_roma);


    queretaro.productoAgregado();


    return 0;
}

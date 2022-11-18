#include <iostream>
using namespace std;

#include "Lista_super.h"
#include "Alimentos.h"
#include "Bebidas.h"
#include "ProductosLimpieza.h"

int main() {
    Alimentos jamon;
    
    jamon.setNombre("Paquete de Jamon");
    jamon.setPrecio(42);
    jamon.setCalorias(1100);
    jamon.setPeso (300);
    jamon.setFechaCad ("12 de Diciembre");
    jamon.printData();


    Bebidas coca_cola;
    
    coca_cola.setNombre("Coca Cola");
    coca_cola.setPrecio(42);
    coca_cola.setVolumen(700);
    coca_cola.setFechaCad ("2023");
    coca_cola.printData();


    ProductosLimpieza jabon_roma;
    
    jabon_roma.setNombre("Jabon liquido");
    jabon_roma.setPrecio(70);
    jabon_roma.setVolumen(20000);
    jabon_roma.setUso ("Lavar ropa");
    jabon_roma.printData();


    return 0;
} 

# ifndef PRODUCTOSLIMPIEZA_H
# define PRODUCTOSLIMPIEZA_H

# include <string>
using namespace std;

# include "Productos.h"

/*
Esta clase es una clase hija y recibe herencia por la clase "Productos". Esto significa que esta contiene los metodos
y atributos que la clase madre tiene, ademas de los que esta clase tiene por aparte. Debido a que esta clase es para clasificar
productos de limpieza, esta tambien tendra volumen y uso El metodo abstracto "printData" se desarrolla aqui imprimiendo los
4 datos que va a contener un atributo de tipo Bebida.
*/

class ProductosLimpieza : public Productos {     // En esta linea de codigo estamos aplicando herencia a la clase

    private:
        int volumen ;      // Aqui ya escribimos los atributos que la bebida va a tener en "private" debido a que esta
        string uso ;       // esta es ua clase hija y no aplica herencia a otras clases.
    
    public:
      
        // Constructores
        ProductosLimpieza (string nom , float prec , int vol, string us ) : 
        Productos(nom, prec) {
            volumen = vol;
            uso = us;
        }

        // Agregamos Getters
        int getVolumen() {
            return volumen;
        }

        string getUso() {
            return uso;
        }
        
        
        // Agregamos Setters
        void setvolumen(int vol) {
            volumen = vol;
        } 

        void setUso(string us) {
            uso = us;
        } 
         
        // Desarrollamos el metodo abstracto "printData" conforme a los atributos de la clase hija
        void printData (){
             cout << " " << endl;
             cout << "Producto de Limpieza" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
             cout << "Volumen:  " << volumen << endl;
             cout << "Uso:  " << uso << endl;
        }
};

#endif

# ifndef BEBIDAS_H
# define BEBIDAS_H

# include <string>
using namespace std;

# include "Productos.h"

/*
Esta clase es una clase hija y recibe herencia por la clase "Productos". Esto significa que esta contiene los metodos
y atributos que la clase madre tiene, ademas de los que esta clase tiene por aparte. Debido a que esta clase es para clasificar
bebidas, esta tambien tendra volumen y fecha de caducidad. El metodo abstracto "printData" se desarrolla aqui imprimiendo los
4 datos que va a contener un atributo de tipo Bebida.
*/

class Bebidas : public Productos {   // En esta linea de codigo estamos aplicando herencia a la clase
    private:
        int volumen ;               // Aqui ya escribimos los atributos que la bebida va a tener en "private" debido a que esta
        string fecha_caducidad ;    // esta es ua clase hija y no aplica herencia a otras clases.
    
    public:
      
        // Constructores
        Bebidas (string nom , float prec , int vol, string fecha_cad ) : 
        
        Productos(nom, prec) {
            volumen = vol;
            fecha_caducidad = fecha_cad;
        }

        // Agregamos Getters
        int getVolumen() {
            return volumen;
        }

        string getFechaCad() {
            return fecha_caducidad;
        }
        

        // Agregamos Setters
        void setvolumen(int vol) {
            volumen = vol;
        } 

        void setFechaCad(string fecha) {
            fecha_caducidad = fecha;
        } 
        
        // Desarrollamos el metodo abstracto "printData" conforme a los atributos de la clase hija
        void printData (){
            cout << " " << endl;
            cout << "Bebida" << endl;
            cout << "Nombre:  " << nombre << endl;
            cout << "Precio:  " << precio << endl;
            cout << "Volumen:  " << volumen << endl;
            cout << "Fecha de Caducidad:  " << fecha_caducidad << endl;
        }
};

#endif

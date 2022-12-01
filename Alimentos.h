# ifndef ALIMENTOS_H
# define ALIMENTOS_H

# include <string>
using namespace std;

# include "Productos.h"

/*
Esta clase es una clase hija y recibe herencia por la clase "Productos". Esto significa que esta contiene los metodos
y atributos que la clase madre tiene, ademas de los que esta clase tiene por aparte. Debido a que esta clase es para clasificar
alimentos, esta tambien tendra calorias, peso y fecha de caducidad. El metodo abstracto "printData" se desarrolla aqui imprimiendo los
5 datos que va a contener un atributo de tipo Alimento.
*/

class Alimentos : public Productos {    // En esta linea de codigo estamos aplicando herencia a la clase
    private:
        int calorias ;                  // Aqui ya escribimos los atributos que la bebida va a tener en "private" debido a que esta
        float peso ;                    // esta es ua clase hija y no aplica herencia a otras clases.
        string fecha_caducidad ;
    
    public:
      
        // Constructores
        Alimentos (string nom , float prec , int cal, float pes, string fecha_cad ) : 
        Productos(nom, prec) {
            calorias = cal;
            peso = pes;
            fecha_caducidad = fecha_cad;
        }

        // Agregamos Getters
        int getCalorias() {
            return calorias;
        }


        int getPeso() {
            return peso;
        }


        string getFechaCad() {
            return fecha_caducidad;
        }

        // Agregamos Setters
        void setCalorias(int cal) {
            calorias = cal;
        } 


        void setPeso(float pes) {
            peso = pes;
        } 


        void setFechaCad(string fecha) {
            fecha_caducidad = fecha;
        } 

        // Desarrollamos el metodo abstracto "printData" conforme a los atributos de la clase hija
        void printData (){
             cout << " " << endl;
             cout << "Alimento" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
             cout << "Calorias:  " << calorias << endl;
             cout << "Fecha de Caducidad:  " << fecha_caducidad << endl;
        }
};

#endif

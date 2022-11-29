# ifndef BEBIDAS_H
# define BEBIDAS_H

# include <string>
using namespace std;

# include "Productos.h"

class Bebidas : public Productos {

    private:
        int volumen ;
        string fecha_caducidad ;
    
    public:
      
        // Constructores
        Bebidas (string nom , float prec , int vol, string fecha_cad ) : 
        Productos(nom, prec) {
            volumen = vol;
            fecha_caducidad = fecha_cad;
        }

        //Getters
        string getnombre() {
            return nombre;
        }

        float getPrecio() {
            return precio;
        }

        int getVolumen() {
            return volumen;
        }

        string getFechaCad() {
            return fecha_caducidad;
        }
        

        //Setters
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        } 

        void setvolumen(int vol) {
            volumen = vol;
        } 

        void setFechaCad(string fecha) {
            fecha_caducidad = fecha;
        } 
        
        //Metodos abstractos
        void productoAgregado() {
            cout << "La Bebida ha sido agregada al Almacen" << endl;
        }
};

#endif

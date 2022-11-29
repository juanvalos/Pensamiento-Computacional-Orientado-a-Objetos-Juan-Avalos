# ifndef ALIMENTOS_H
# define ALIMENTOS_H

# include <string>
using namespace std;

# include "Productos.h"

class Alimentos : public Productos {

    private:
        int calorias ;
        float peso ;
        string fecha_caducidad ;
    
    public:
      
        // Constructores
        Alimentos (string nom , float prec , int cal, float pes, string fecha_cad ) : 
        Productos(nom, prec) {
            calorias = cal;
            peso = pes;
            fecha_caducidad = fecha_cad;
        }
        string getnombre() {
            return nombre;
        }


        float getPrecio() {
            return precio;
        }


        int getCalorias() {
            return calorias;
        }


        int getPeso() {
            return peso;
        }


        string getFechaCad() {
            return fecha_caducidad;
        }
        

        void setNombre(string nom) {
            nombre = nom;
        }


        void setPrecio(int pre) {
            precio = pre;
        } 


        void setCalorias(int cal) {
            calorias = cal;
        } 


        void setPeso(float pes) {
            peso = pes;
        } 


        void setFechaCad(string fecha) {
            fecha_caducidad = fecha;
        } 

        void productoAgregado() {
            cout << "El Alimento ha sido agregado al Almacen" << endl;
        }
};

#endif

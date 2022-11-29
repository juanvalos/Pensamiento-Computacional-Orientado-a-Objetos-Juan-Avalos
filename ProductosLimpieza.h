# ifndef PRODUCTOSLIMPIEZA_H
# define PRODUCTOSLIMPIEZA_H

# include <string>
using namespace std;

# include "Productos.h"

class ProductosLimpieza : public Productos {

    private:
        int volumen ;
        string uso ;
    
    public:
      
        // Constructores
        ProductosLimpieza (string nom , float prec , int vol, string us ) : 
        Productos(nom, prec) {
            volumen = vol;
            uso = us;
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

        string getUso() {
            return uso;
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

        void setFechaCad(string us) {
            uso = us;
        } 
        
        //Metodos abstractos
        void productoAgregado() {
            cout << "El Producto de Limpieza ha sido agregado Almacen" << endl;
        }
};

#endif

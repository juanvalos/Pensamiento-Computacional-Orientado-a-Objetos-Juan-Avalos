#include <string>

class ProductosLimpieza {

    private:
        string nombre ;
        float precio ;
        int volumen ;
        string uso ;
    
    public:
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
        
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        } 

        void setVolumen(int vol) {
            volumen = vol;
        } 

        void setUso(string use) {
            uso = use;
        } 

        void printData (){
             cout << " " << endl;
             cout << "Producto de Limpieza" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
             cout << "Volumen:  " << volumen << endl;
             cout << "Uso:  " << uso << endl;
        }
};
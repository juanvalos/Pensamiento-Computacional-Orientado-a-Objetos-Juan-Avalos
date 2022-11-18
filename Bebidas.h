#include <string>

class Bebidas {

    private:
        string nombre ;
        float precio ;
        int volumen ;
        string fecha_caducidad ;
    
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

        string getFechaCad() {
            return fecha_caducidad;
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

        void setFechaCad(string fecha) {
            fecha_caducidad = fecha;
        } 

        void sumatoriaPrecios() {

        }

        void calculaVol_ml() {

        }

        void contProductos() {

        }
        void printData (){
             cout << " " << endl;
             cout << "Bebida" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
             cout << "Volumen:  " << volumen << endl;
             cout << "Fecha de Caducidad:  " << fecha_caducidad << endl;
        }
};
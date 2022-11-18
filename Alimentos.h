#include <string>

class Alimentos {

    private:
        string nombre ;
        float precio ;
        int calorias ;
        float peso ;
        string fecha_caducidad ;
    
    public:
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

        void sumatoriaPrecios() {

        }

        void sumatoriaCalorias() {

        }

        void contProductos() {

        }
        void printData (){
             cout << " " << endl;
             cout << "Alimento" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
             cout << "Calorias:  " << calorias << endl;
             cout << "Peso:  " << peso << endl;
             cout << "Fecha de Caducidad:  " << fecha_caducidad << endl;
        }
};
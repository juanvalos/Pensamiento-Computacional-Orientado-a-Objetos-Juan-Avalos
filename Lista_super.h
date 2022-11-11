#include <string>

class Alimentos {
    private:
        string nombre;
        float precio;

    public:
        
        string getnombre() {
            return nombre;
        }

        float getPrecio() {
            return precio;
        }
        
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        }
        
        void printData (){
             cout << " " << endl;
             cout << "Alimento" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
        }
};

class Bebidas {
    private:
        string nombre;
        float precio;

    public:
        string getNombre() {
            return nombre;
        }

        float getPrecio() {
            return precio;
        }
        
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        }

        void printData (){
             cout << " " << endl;
             cout << "Bebida" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
        }
};

class ProductosLimp {
    private:
        string nombre;
        float precio;
    
    public:
        string getNombre() {
            return nombre;
        }

        float getPrecio() {
            return precio;
        }
        
        void setNombre(string nom) {
            nombre = nom;
        }

        void setPrecio(int pre) {
            precio = pre;
        }

        void printData (){
             cout << " " << endl;
             cout << "Producto de limpieza" << endl;
             cout << "Nombre:  " << nombre << endl;
             cout << "Precio:  " << precio << endl;
        }
};
# include <iostream>

# include "Alimentos.h"                    // incluimos todas las clases que conforman nuestro programa y nuestro diagrama de clases
# include "Bebidas.h"
# include "ProductosLimpieza.h"
# include "Almacen.h"

using namespace std;

int main() {

    Almacen almacen ;                   // generamos una instancia de tipo almacen en donde se guardará todo el proceso del main

    float acumAlimentos = 0 ;          // Se crea 1 acumulador para cada 1 de las clases, esto nos servira para despues desplegar cuanto es el total de precios 
    float acumBebidas = 0 ;            // de cada tipo de producto agregado al almacen. También nos ayudará para la sumatoria de precios en el almacen.
    float acumProdLimp = 0 ;

    int contAlimentos = 0 ;            // Se crea 1 contador para cada 1 de las clases, esto nos servira para despues desplegar cuantos articulos hay de cada tipo
    int contBebidas = 0 ;              // de producto. También nos ayudará para la sumatoria de articulos ubicados en el almacen.
    int contProdLimp = 0 ;

    int inicio = 1 ;                   // Creamos una variable que va a condicionar el ciclo del programa. Ese ciclo siempre va a continuar mientras la variable
                                       // "inicio" sea igual a 0. Esto nos permitirá  terminar el ciclo dentro de este con sólo un cambio de variable.
    do {

        int menu ;                     // Aqui empezamos creando una variable llamada "menu" donde se guardara la opcion que elija el usuario

        cout << " " << endl ;          
        cout << "¿Que tipo de producto se desea agregar al almacen?" << endl ;
        cout << "1. Alimentos" << endl ;     // Preguntamos al usuario cual es el tipo de producto que desea almacenar en el almacen y guardamos su 
        cout << "2. Bebidas" << endl ;       // grespuesta en la variable "menu"
        cout << "3. Productos de limpieza" << endl ;
        cout << " " << endl ;
        cin >> menu ; 
 
        switch (menu) {               // Usamos el estatuto switch para que dependiendo de lo que ingrese el usuario, el programa haga los pasos necesarios para 
                                      // agregar el atributo de la clase deseada en la variable "almacen" con sus respectivas caracteristicas.
            case 1 : {
                
                string nombreAlimento ;     // En el caso 1 primero creamos 4 variables que van almacenar la informacion ingresada por el usuario
                float precioAlimento ;
                int caloriasAlimento ;
                string fechaAlimento ;

                Alimentos* alimento = new Alimentos (" " , 0.0 , 0 , 0.0 , " ");  // Aqui estamos creando un objeto de tipo "Alimentos" que despues va a ser guardado en
                                                                                  // "almacen".  Usamos apuntadores debido a que se vuelve muy complicado usar variables                                                           
                    cout << " " << endl ;                                         // para ir guardado la información de cada 1 de estos objetos. Esto porque aqui es un ciclo,
                    cout << "¿Cual es el nombre del alimento?" << endl ;          // y si la guardamos en variables, la informacion se perdera cuando el ciclo de una vuelta.
                    cin >> nombreAlimento ;
                    
                    cout << "¿Cuál es el precio del alimento?" << endl ;          // Pedimos la informacion necesaria del producto
                    cin >> precioAlimento ;

                    cout << "¿Cuantas calorías tiene el alimento?" << endl ;
                    cin >> caloriasAlimento ;

                    cout << "¿Cual es la fecha de caducidad del alimento? (dd/mm/yy)" << endl ;
                    cin >> fechaAlimento ;
                    
                    alimento -> setNombre(nombreAlimento) ;                       // Ingresamos la informacion recopilada al objeto creado con ayuda de los setters previamente
                    alimento -> setPrecio (precioAlimento) ;                      // desarrollados en la clase "Alimentos"
                    alimento -> setCalorias (caloriasAlimento) ;
                    alimento -> setFechaCad (fechaAlimento) ;

                    almacen.agregarProducto (alimento);                          // Despues de modificar la informacion al objeto, agregamos este a "almacen" con ayuda  
                                                                                 // del metodo "agregarProducto" desarrollado en la clase "Almacen"
                    
                    contAlimentos += 1 ;                        // Al contador de alimentos le sumamos 1 debido a que ya se agrego un alimento a la instancia "almacen"
                    acumAlimentos += precioAlimento ;           // Al acumulador de alimentos le sumamos el precio del objeto creado en "alimento" para despues saber el
                                                                // precio total en productos de tipo "Alimentos"
                    break;

                }


            case 2 : {
                   
                string nombreBebida ;     // En el caso 2 primero creamos 4 variables que van almacenar la informacion ingresada por el usuario
                float precioBebida ;
                int volBebida ;
                string fechaBebida ;

                Bebidas* bebida = new Bebidas (" " , 0.0 , 0 , " ") ;  // Aqui estamos creando un objeto de tipo "Bebidas" que despues va a ser guardado en
                                                                       // Almacen.  Usamos apuntadores debido a que se vuelve muy complicado usar variables                    
                cout << " " << endl ;                                  // para ir guardado la información de cada 1 de estos objetos. Esto porque aqui es un ciclo,
                cout << "¿Cual es el nombre de la bebida?" << endl ;   // y si la guardamos en variables, la informacion se perdera cuando el ciclo de una vuelta.
                cin >> nombreBebida ;
                        
                cout << "¿Cuál es el precio de la bebida?" << endl ;   // Pedimos la informacion necesaria del producto
                cin >> precioBebida ;

                cout << "¿Cual es el volumen de la bebida?" << endl ;
                cin >> volBebida ;

                cout << "¿Cual es la fecha de caducidad de la bebida? (dd/mm/yy)" << endl;
                cin >> fechaBebida;
                        
                bebida -> setNombre (nombreBebida) ;                  // Ingresamos la informacion recopilada al objeto creado con ayuda de los setters previamente
                bebida -> setPrecio (precioBebida) ;                  // desarrollados en la clase "Bebidas"
                bebida -> setvolumen (volBebida);
                bebida -> setFechaCad (fechaBebida) ;

                almacen.agregarProducto (bebida) ;                    // Despues de modificar la informacion del objeto, agregamos este  a "almacen" con ayuda  
                                                                      // del metodo "agregarProducto" desarrollado en la clase "Almacen"
                
                contBebidas ++ ;                        // Al contador de bebidas le sumamos 1 debido a que ya se agrego una bebida a la instancia "almacen"
                acumBebidas += precioBebida ;           // Al acumulador de bebidas le sumamos el precio del objeto creado en "bebida" para despues saber el
                                                        // precio total en productos de tipo "Bebidas"                
                break ;

            }

            case 3 : {
                   
                string nombreLimp ;     // En el caso 3 primero creamos 4 variables que van almacenar la informacion ingresada por el usuario
                float precioLimp ;
                int volLimp ;
                string usoLimp ;

                ProductosLimpieza* limp = new ProductosLimpieza(" " , 0.0 , 0 , " ") ;  // Aqui estamos creando un objeto de tipo "ProductosLimpieza" que despues va a ser guardado en
                                                                                        // Almacen.  Usamos apuntadores debido a que se vuelve muy complicado usar variables                    
                cout << " " << endl ;                                                   // para ir guardado la información de cada 1 de estos objetos. Esto porque aqui es un ciclo,
                cout << "¿Cual es el nombre del producto de limpieza?" << endl ;        // y si la guardamos en variables, la informacion se perdera cuando el ciclo de una vuelta.
                cin >> nombreLimp ;
                    
                cout << "¿Cuál es el precio del producto de limpieza?" << endl ;        // Pedimos la informacion necesaria del producto
                cin >> precioLimp ;

                cout << "¿Cual es el volumen del producto de limpieza?" << endl ;
                cin >> volLimp ;
                    
                cout << "¿Cual es el uso del producto de limpieza?" << endl ;
                cin >> usoLimp ;

                limp -> setNombre (nombreLimp) ;                  // Ingresamos la informacion recopilada al objeto creado con ayuda de los setters previamente
                limp -> setPrecio (precioLimp) ;                  // desarrollados en la clase "ProductosLimpieza"
                limp -> setvolumen (volLimp) ;
                limp -> setUso (usoLimp) ;

                almacen.agregarProducto (limp) ;                  // Despues de modificar la informacion del objeto, agregamos este  a "almacen" con ayuda  
                                                                  // del metodo "agregarProducto" desarrollado en la clase "Almacen"
                    
                contProdLimp ++ ;                                 // Al contador de productos de limpieza le sumamos 1 debido a que ya se agrego una producto de limpieza a la instancia "almacen"
                acumProdLimp += precioLimp ;                      // Al acumulador de bebidas le productos de limpieza el precio del objeto creado en "limp" para despues saber el
                                                                  // precio total en productos de tipo "ProductosLimpieza"     
                break ;

            }

            default :              // El default nos sirve para que si el usuario ingresa otra cosa que no es alguna de las opciones anteriores, se har un break
                break ;
        }

/*
Aqui ya concluimos las ociones que va a tener el ciclo cada vez que de una vuelta, y se usa un break en cada una de estas para que el ciclo no sea infinito y acabe
cada que un objeto de cualquier tipo sea agregado a "almacen". Despues de esto ocupe otro menu y un switch que apareceran cada que se acabe de agregar un producto.
Estos 2 van a servir para que el usuario ingrese si quiere seguir agregando productos al almacen o ya quiere pasar a checar el reporte de todo el movimiento que se
hizo durabte el programa.
*/

        int continuar_inv ;         // Aqui empezamos creando una variable llamada "continuar_inv" donde se guardara la opcion que elija el usuario

        cout << " " << endl ;
        cout << "¿Continuar agregando productos?" << endl ;
        cout << "1. Sí" << endl ;  // Preguntamos al usuario cual es el tipo de producto que desea almacenar en el almacen y guardamos su
        cout <<"2. No" << endl ;   // Respuesta en la variable "continuar_inv"
        
        cout << " " << endl ;
        cin >> continuar_inv; 

        switch (continuar_inv) {
                
            case 1 : {          // En el caso de que el usuario ingrese el numero 1, el ciclo de agregar productos se renaduara
                continue ;      
            }

            case 2 : {         // En el caso de que el usuario ingrese el numero 2, el ciclo de agregar productos se parara esto simplemente cambiando
                inicio = 0 ;   // el valor de inicio, al cambiarla , la condicion del ciclo ya no se cumple, por lo que se para de manera completa el while
                break ;
            }
        }

    } 
    
    while (inicio == 1) ;
    
    int cantProductos = contAlimentos + contBebidas + contProdLimp ;      // En las variables "cantProductos" y "precioProductos" calculamos la cantidad todal de productos y el precio total, 
    float precioProductos = acumAlimentos + acumBebidas + acumProdLimp ;  // esto lo hacemos sumando los acumuladores y los contadores de cada producto

    cout << " " << endl ;     // Aqui le anunciamos al usuario que todo el ciclo de ingresar productos termino, y que es momento de que elija que reporte acerca 
    cout << " " << endl ;     // del almacen desea saber
    cout << "Se ha terminado el proceso de agregar productos al almacen" << endl ;
    cout << " " << endl ;
    cout << " " << endl ;  

    int reporte = 1 ;     // aqui creamos un ciclo, mientras la variable reporte sea igual a 1, el ciclo dentro el do-while seguira activo. Este ciclo
                          // mostrara los reportes que desse el usuario mientras este uqiera. En el momento que desee salirse del programa. Este se apagará y 
                          // dejara de estar activo
    do {
        int decisionReporte ;    // Creamos la variable "decisionReporte", donde se guardará la opcion que elija el usuario

        cout << "Elija el reporte que se desea saber acerca del almacen" << endl ;              
        cout << " " << endl ;
        cout << "1. Inventario del Almacen" << endl ;
        cout << "2. Cantidad de alimentos y precio acumulado de estos en el almacen" << endl ;  // Preguntamos al usuario cual es el tipo de producto que desea almacenar
        cout << "3. Cantidad de bebidas y precio acumulado de estos en el almacen" << endl ;    // en el almacen y guardamos su respuesta en la variable "decisionReporte"
        cout << "4. Cantidad de articulos de limpieza y precio acumulado de estos en el almacen" << endl ;
        cout << "5. Cantidad total de productos en el almacen" << endl ;
        cout << "6. Total de precios en el almacen" << endl ;
        cout << " " << endl ;

        cin >> decisionReporte ;
        cout << " " << endl ;

        switch (decisionReporte) {  // Con ayuda del estatuto switch, el programa desplegará el tipo de reporte que el usuario pidio de acuerdo a lo que ingreso 
                                    // en el menu pasado
            case 1 : {    // En el caso 1, el programa desplegara todo el inventario que tiene la instancia almacen con ayuda del metodo "printData"
                almacen.printData() ;
                break;
            }

            case 2 : {    // En el caso 2, el programa desplegara la cantidad de alimentos y la suma de precios de estos dentro del almacen
                          // con ayuda de los acumuladores y contadores de este tipo de producto.
                cout << " " << endl ;
                cout << "Se agregaron  " << contAlimentos << "  alimentos en el almacen" << endl ;
                cout << "El total de precios en Alimentos agregadas al almacen es de  " << acumAlimentos << "  pesos" << endl ;
                break;
            }

            case 3 : {   // En el caso 3, el programa desplegara la cantidad de bebidas y la suma de precios de estas que hay dentro del almacen,
                         // esto con ayuda de los acumuladores y contadores de este tipo de producto.
                cout << " " << endl ;
                cout << "Se agregaron  " << contBebidas << "  bebidas en el almacen" << endl ;
                cout << "El total de precios en bebidas agregadas al almacen es de  " << acumBebidas << "  pesos" << endl ;
            }

            case 4 : {   // En el caso 3, el programa desplegara la cantidad de productos de limpieza  y la suma de precios de estos que hay dentro del almacen,
                         // esto con ayuda de los acumuladores y contadores de este tipo de producto.
                cout << " " << endl ;
                cout << "Se agregaron  " << contProdLimp << "  productos de limpieza en el almacen" << endl ;
                cout << "El total de precios en productos de limpieza agregadas al almacen es de  " << acumProdLimp << "  pesos" << endl ;
                break;
            }

            case 5 : {   // En el caso 5, el programa desplegará la cantidad total de productos en el almacen, esto con ayuda de la variable "cantProductos"
                         // la cual fue desarrollada anteriormente en el programa.
                cout << " " << endl ;
                cout << "La cantidad total de productos en el almacen es de  " << cantProductos << "  productos" << endl ;
                break;
            }

            case 6 : {   // En el caso 6, el programa desplegará El total de precios en el almacen, esto con ayuda de la variable "precioProductos"
                         // la cual fue desarrollada anteriormente en el programa.                
                cout << " " << endl ;
                cout << "El total de precios en el almacen es de  " << precioProductos << "  pesos" << endl ;
                break;
            }

            default : 
                break ;

        }        
        
/* 
Esta parte nos sirve para que cada vez que se termine de desplegar un reporte, el programa le pregunte al usuario si desea checar otro reporte o no,
si el usuaro decide que si, el ciclo del reporte se renaduara, pero si el usuario decide que no, el programa dejara de correr.
*/

        int seguir_reporte ;

        cout << " " << endl ;
        cout << "¿Desea conocer otro reporte?" << endl ;
        cout << "1. Si" << endl ;
        cout <<"2. No" << endl ;
        cout << " " << endl ;

        cin >> seguir_reporte; 

        switch (seguir_reporte) {
                
            case 1 : {
                continue ;     
            }

            case 2 : {    
                reporte = 0;
                break;
            }

            default : {
                break ;

            } 

          }
    }

    while (reporte == 1) ;
    
    return 0 ;

}

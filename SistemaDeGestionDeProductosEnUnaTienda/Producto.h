#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto
{
    private:
        string nombre;
        double precio;
        string categoria;
        
    
    public:
        Producto(string, double, string);
        ~Producto();


        string getNombre() const;
        double getPrecio() const;
        string getCategoria() const;
    
};
#endif
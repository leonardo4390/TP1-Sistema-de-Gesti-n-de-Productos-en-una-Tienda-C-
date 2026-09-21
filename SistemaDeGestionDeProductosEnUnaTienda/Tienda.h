#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
#include <vector>
#include "Producto.h"

using namespace std;

class Tienda
{
    private:
        vector<Producto*> inventario;  

    public:
        Tienda();
        ~Tienda();

    void agregarProducto(Producto* producto);
    Producto* buscarProducto(const string& nombre);
    bool eliminarProducto(const string& nombre);
    
};
#endif
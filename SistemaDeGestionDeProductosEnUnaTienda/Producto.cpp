#include<iostream>
#include "Producto.h"

using namespace std;

Producto:: Producto(string _nombre, double _precio, string _categoria):
nombre(_nombre),precio(_precio),categoria(_categoria){}

Producto::~Producto(){}

string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

string Producto::getCategoria() const {
    return categoria;
}
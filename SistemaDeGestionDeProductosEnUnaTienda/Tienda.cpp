#include<iostream>
#include "Tienda.h"

using namespace std;
Tienda::Tienda() {}

Tienda::~Tienda() {
    
    for (auto producto : inventario) {
        delete producto;
    }
    inventario.clear();
}

void Tienda::agregarProducto(Producto* producto) {
    inventario.push_back(producto);
}

Producto* Tienda::buscarProducto(const string& nombre) {
    for (auto producto : inventario) {
        if (producto->getNombre() == nombre) {
            return producto;
        }
    }
    return nullptr;  // equivalente a None en Python
}

bool Tienda::eliminarProducto(const string& nombre) {
    for (auto it = inventario.begin(); it != inventario.end(); ++it) {
        if ((*it)->getNombre() == nombre) {
            delete *it;              // liberar memoria
            inventario.erase(it);    // quitar del vector
            return true;
        }
    }
    return false;
}

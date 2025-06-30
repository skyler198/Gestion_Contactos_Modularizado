// contactos.h
#ifndef CONTACTOS_H
#define CONTACTOS_H

#include <string>
using namespace std;

struct contactoEmail {
    string nombre;
    char sexo;
    int edad;
    int telefono;
    string email;
    string nacionalidad;
};

void agregarContacto(contactoEmail Contacto[], int &cantidad);
void eliminarContacto(contactoEmail guardarContacto[], int &cantidad);
void MostrarlistaGeneral(contactoEmail contactos[], int cantidad);
void MostrarListaOrdenadaPorServidor(contactoEmail contactos[], int cantidad);
void menu();

#endif

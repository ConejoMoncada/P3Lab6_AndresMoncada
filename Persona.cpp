#include "Persona.h"

Persona::Persona(){
    
}
Persona::Persona(string pnom, string pid, int pedad, char psexo, string pnacion){
    nombre = pnom;
    id = pid;
    edad = pedad;
    sexo = psexo;
    nacion = pnacion;
}

void Persona::setNombre(string pnom){
    nombre = pnom;
}

void Persona::setId(string pid){
    id = pid;
}

void Persona::setEdad(int pedad){
    edad = pedad;
}

void Persona::setSexo(char psexo){
    sexo = psexo;
}

void Persona::setNacion(string pnacion){
    nacion = pnacion;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getId(){
    return id;
}

int Persona::getEdad(){
    return edad;
}

char Persona::getSexo(){
    return sexo;
}

string Persona::getNacion(){
    return nacion;
}

Persona::~Persona(){

}
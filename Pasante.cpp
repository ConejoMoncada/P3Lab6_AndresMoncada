#include "Pasante.h"

Pasante::Pasante(Estudiante e,string ppasid,int pdur):Persona(){
    nombre = e.getNombre();
    id = e.getId();
    edad = e.getEdad();
    sexo = e.getSexo();
    nacion = e.getNacion();
    pasId = ppasid;
    dur = pdur;
}
void Pasante::setPasId(string pid){
    pasId = pid;
}

void Pasante::setDur(int pdur){
    dur = pdur;
}

string Pasante::getPasId(){
    return pasId;
}

int Pasante::getDur(){
    return dur;
}
string Pasante::toString(){
    return pasId + " " + nombre + " " +sexo;
}

Pasante::~Pasante(){

}
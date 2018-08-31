#include "Estudiante.h"

Estudiante::Estudiante(string pnom,string pid,int pedad,char psexo,string pnacion,
string pcarrera,string puniv,string pcta,double pindice):Persona(){
    nombre = pnom;
    id = pid;
    edad = pedad;
    sexo = psexo;
    nacion = pnacion;
    carrera = pcarrera;
    univ = puniv;
    cta = pcta;
    indice = pindice;
}

void Estudiante::setCarrera(string pcarrera){
    carrera = pcarrera;
}

void Estudiante::setUniv(string puniv){
    univ = puniv;
}

void Estudiante::setCta(string pcta){
    cta = pcta;
}

void Estudiante::setIndice(double pindice){
    indice = pindice;
}

string Estudiante::getCarrera(){
    return carrera;
}

string Estudiante::getUniv(){
    return univ;
}
string Estudiante::getCta(){
    return cta;
}

double Estudiante::getIndice(){
    return indice;
}

Estudiante::~Estudiante(){

}
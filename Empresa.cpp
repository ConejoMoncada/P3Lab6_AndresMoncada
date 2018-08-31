#include "Empresa.h"

Empresa::Empresa(string pnom,string pfecha,string prubro,string ppermiso,string presi){
    nombre = pnom;
    fecha = pfecha;
    rubro = prubro;
    permiso = ppermiso;
    tipo = "Microempresa";
    presidente = presi;
}
        
void Empresa::setNombre(string pnom){
    nombre = pnom;
}

void Empresa::setFecha(string pfecha){
    fecha = pfecha;
}

void Empresa::setRubro(string prubro){
    rubro = prubro;
}

void Empresa::addEmpleado(Empleado e){
    empleados.push_back(e);
}

void Empresa::addPasante(Pasante p){
    pasantes.push_back(p);
}

void Empresa::despedirEmp(int n){
    despedidos.push_back(empleados[n]);
    empleados.erase(empleados.begin() + n);
}

void Empresa::despedirPas(int n){
    despedidos.push_back(pasantes[n]);
    pasantes.erase(pasantes.begin() + n);
}

string Empresa::getNombre(){
    return nombre;
}

string Empresa::getFecha(){
    return fecha;
}

string Empresa::getRubro(){
    return rubro;
}

string Empresa::getPresidente(){
    return presidente;
}

vector<Empleado> Empresa::getEmpleados(){
    return empleados;
}

vector<Pasante> Empresa::getPasantes(){
    return pasantes;
}

Empresa::~Empresa(){

}
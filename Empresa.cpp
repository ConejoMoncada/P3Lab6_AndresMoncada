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
    if(empleados.size() + pasantes.size() >= 5){
            cout << "Ingrese los ingresos anuales: ";
            cin >> ingresos;
            cout << "Ingrese los egresos anuales: ";
            cin >> egresos;
            cout << "Ingrese la cantidad de departamentos: ";
            cin >> departamentos;
            cout << "Ingrese el RTN: ";
            cin >> rtn;
            tipo = "Mediana";
    }if(empleados.size() + pasantes.size() >= 15){
        cout << "Ingrese el nombre del vicepresidente: ";
        cin >> vice;
        tipo = "Grande";
    }
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

vector<string> Empresa::getProveedores(){
    return proveedores;
}

Empresa::~Empresa(){

}
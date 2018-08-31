#include "Empleado.h"

Empleado::Empleado(Estudiante e,string pempid,double psal):Persona(){
    nombre = e.getNombre();
    id = e.getId();
    edad = e.getEdad();
    sexo = e.getSexo();
    nacion = e.getNacion();
    empId = pempid;
    salario = psal;
}
void Empleado::setEmpId(string eid){
    empId = eid;
}

void Empleado::setSalario(double sal){
    salario = sal;
}

string Empleado::getEmpId(){
    return empId;
}

double Empleado::getSalario(){
    return salario;
}

Empleado::~Empleado(){

}
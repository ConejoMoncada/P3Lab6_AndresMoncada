#include "Persona.h"
#include "Estudiante.h"
#include "Empresa.h"
#include "Pasante.h"
#include "Empleado.h"

#include<iostream>
using namespace std;

void cmicro();//crear micro
void empresa();
void estudiante();
void menuempresa(int,int,bool);
void registro();
//para probar sin tener que hacerlo 1 por 1... de nada
void es5();

vector<Estudiante> estudiantes;
vector<Empresa> empresas;

int main(){
    int op;
    do{
        cout << "Menu principal" << endl << "1. Crear una microempresa" << endl
        << "2. Manejar empresas" << endl << "3. Agregar estudiantes" << endl
        << "4. Agregar un estudiante 5 veces(para probar funciones)" << endl
        <<"0. Salir" << endl << "Ingrese una opción: ";
        cin >> op;
        switch(op){
            case 1: cmicro();
                    break;
            case 2: empresa();
                    break;
            case 3: estudiante();
                    break;
            case 4: es5();
        }
    }while(op != 0);
    return 0;
}

void cmicro(){
    string nombre, fecha, rubro, permiso, presi;
    cout << "Nombre de la empresa: ";
    cin >> nombre;
    cout << "Fecha que se creó: ";
    cin >> fecha;
    cout << "Presidente de la empresa: ";
    cin >> presi;
    cout << "Rubro de la empresa: ";
    cin >> rubro;
    cout << "Número de permiso: ";
    cin >> permiso;
    Empresa e(nombre,fecha,rubro,permiso,presi);
    empresas.push_back(e);
    cout << "Empresa agregada" << endl << endl;
}

void empresa(){
    int iemp = -1;//indice de la empresa
    //listar
    for(int i = 0; i < empresas.size(); i++){
        cout << i << ". " << empresas[i].toString() << endl;
    }
    if(empresas.size() > 0){
        while(iemp < 0 || iemp >= empresas.size()){
            cout << "Ingrese el índice: ";
            cin >> iemp;
            if(iemp < 0 || iemp >= empresas.size())
            cout << "No hay una empresa con ese índice." << endl;
        }
        bool tipo;//tamaño
        int op;
        do{
            tipo = (empresas[iemp].getEmpleados().size() + empresas[iemp].getPasantes().size() >= 15);
            cout << endl << "1. Contratar estudiante" << endl
            << "2. Despedir empleado/pasante" << endl;
            if(tipo)
                cout << "3. Agregar proveedor" << endl;
            cout << "0. Regresar" << endl <<"Ingrese una opción: ";
            cin >> op;
            menuempresa(iemp,op,tipo);
        }while(op != 0);
    }
    else
        cout << "Se deben crear empresas primero." << endl << endl;
}

void estudiante(){
    string nombre,id,nacion,carrera,univ,cta;
    int edad;
    char sexo;
    double indice;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Número de identidad: ";
    cin >> id;
    cout << "Edad: ";
    cin >> edad;
    cout << "Sexo [m/f]: ";
    cin >> sexo;
    cout << "Nacionalidad: ";
    cin >> nacion;
    cout << "Carrera: ";
    cin >> carrera;
    cout << "Universidad: ";
    cin >> univ;
    cout << "Número de cuenta: ";
    cin >> cta;
    cout << "Índice: ";
    cin >> indice;
    Estudiante e(nombre,id,edad,sexo,nacion,carrera,univ,cta,indice);
    estudiantes.push_back(e);
    cout << "Agregado" << endl << endl;
}
void es5(){
    string nombre,id,nacion,carrera,univ,cta;
    int edad;
    char sexo;
    double indice;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Número de identidad: ";
    cin >> id;
    cout << "Edad: ";
    cin >> edad;
    cout << "Sexo [m/f]: ";
    cin >> sexo;
    cout << "Nacionalidad: ";
    cin >> nacion;
    cout << "Carrera: ";
    cin >> carrera;
    cout << "Universidad: ";
    cin >> univ;
    cout << "Número de cuenta: ";
    cin >> cta;
    cout << "Índice: ";
    cin >> indice;
    Estudiante e(nombre,id,edad,sexo,nacion,carrera,univ,cta,indice);
    for(int i = 0; i < 5; i++){
        estudiantes.push_back(e);
    }
    cout << "Agregados" << endl << endl;
}
void menuempresa(int i, int op, bool t){
    switch(op){
        case 1: {
            int index;
            for (int j = 0; j < estudiantes.size(); j++){
                cout << j << ". " << estudiantes[j].toString() << endl;
            }
            cout << "Ingrece el índice del estudiante: ";
            cin >> index;
            int tipo;
            cout << "1. Contratar como empleado" << endl
            << "2. Contratar como pasante" << endl;
            cin >> tipo;
            string id;
            switch(tipo){
                case 1: {
                        cout << "ID en la empresa: ";
                        cin >> id;
                        cout << "Salario: ";
                        double sal;
                        cin >> sal;
                        Empleado e(estudiantes[index],id,sal);
                        empresas[i].getEmpleados().push_back(e);
                        break;
                        }
                case 2: {
                        cout << "ID en la empresa: ";
                        cin >> id;
                        cout << "Duración de la pasantía: ";
                        int dur;
                        cin >> dur;
                        Pasante p(estudiantes[index],id,dur);
                        empresas[i].getPasantes().push_back(p);
                        break;
                        }
            }
            break;
        }
        case 2: {
            int index;
            cout << "Empleados" << endl;
            for (int j = 0; j < empresas[i].getEmpleados().size(); j++){
                cout << j << ". " << empresas[i].getEmpleados()[j].toString() << endl;
            }
            cout << "Pasantes" << endl;
            for (int j = 0; j < estudiantes.size(); j++){
                cout << j+empresas[i].getEmpleados().size() << ". " 
                << empresas[i].getEmpleados()[j].toString() << endl;
            }
            cout << "Ingrece el índice del que quiere despedir: ";
            cin >> index;
            if(index >= empresas[i].getEmpleados().size()){
                index -= empresas[i].getEmpleados().size();
                empresas[i].getDespedidos().push_back(empresas[i].getPasantes()[index]);
                empresas[i].getPasantes().erase(empresas[i].getPasantes().begin()+index);
            }
            else{
                empresas[i].getDespedidos().push_back(empresas[i].getEmpleados()[index]);
                empresas[i].getEmpleados().erase(empresas[i].getEmpleados().begin()+index);
            }
        }
    }
}
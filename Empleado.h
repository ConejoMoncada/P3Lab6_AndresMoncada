#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
#include "Estudiante.h"
class Empleado: public Persona{
    private:
        string empId;
        double salario;
    public:
        Empleado(Estudiante,string,double);

        void setEmpId(string);
        void setSalario(double);

        string getEmpId();
        double getSalario();

        ~Empleado();
};
#endif
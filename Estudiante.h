#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
class Estudiante: public Persona{
    private:
        string carrera;
        string univ;
        string cta;
        double indice;
    public:
        Estudiante(string,string,int,char,string,string,string,string,double);

        void setCarrera(string);
        void setUniv(string);
        void setCta(string);
        void setIndice(double);

        string getCarrera();
        string getUniv();
        string getCta();
        double getIndice();

        ~Estudiante();
};
#endif
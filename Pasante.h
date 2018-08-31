#ifndef PASANTE_H
#define PASANTE_H
#include "Persona.h"
#include "Estudiante.h"
class Pasante: public Persona{
    private:
        string pasId;
        int dur;
    public:
        Pasante(Estudiante,string,int);

        void setPasId(string);
        void setDur(int);

        string getPasId();
        int getDur();

        ~Pasante();
};
#endif
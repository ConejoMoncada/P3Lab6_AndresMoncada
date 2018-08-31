#ifndef PERSONA_H
#define PERSONA_H

#include<string>
using namespace std;
class Persona{
    protected:
        string nombre;
        string id;
        int edad;
        char sexo;
        string nacion;
    public:
        Persona();
        Persona(string,string,int,char,string);
        
        void setNombre(string);
        void setId(string);
        void setEdad(int);
        void setSexo(char);
        void setNacion(string);

        string getNombre();
        string getId();
        int getEdad();
        char getSexo();
        string getNacion();

        ~Persona();
};
#endif
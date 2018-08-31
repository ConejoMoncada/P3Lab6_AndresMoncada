main: Main.o Empresa.o Persona.o Estudiante.o Empleado.o Pasante.o
	g++ Pasante.o Empleado.o Estudiante.o Persona.o Empresa.o Main.o -o main
	rm *.o

Main.o:	Main.cpp Empresa.cpp Persona.cpp Estudiante.cpp Empleado.cpp Pasante.cpp
	g++ -c Main.cpp

Empresa.o:	Empresa.cpp Persona.cpp Estudiante.cpp Empleado.cpp Pasante.cpp
	g++ -c Empresa.cpp

Estudiante.o: Estudiante.cpp Persona.cpp
	g++ -c Estudiante.cpp

Empleado.o: Empleado.cpp Persona.cpp
	g++ -c Empleado.cpp

Pasante.o: Pasante.cpp Persona.cpp
	g++ -c Pasante.cpp

Persona.o: Persona.cpp
	g++ -c Persona.cpp
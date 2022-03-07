all: compilar
compilar: veterinaria propietario mascota main
	g++ -o Salida Veterinaria.o Propietario.o Mascota.o Main.o
veterinaria: Veterinaria.cpp Veterinaria.h
	g++ -c Veterinaria.cpp
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h 
	g++ -c Mascota.cpp
main: Main.cpp Veterinaria.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.ocl
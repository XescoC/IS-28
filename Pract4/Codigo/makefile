MAKEFLAGS += -s
CC = g++
CFLAGS = -ggdb -O2
DEPS = agenda.h alumno.h
OBJ = añadirAlumno.o buscarAlumno.o cargarFichero.o editarAlumno.o eliminarAlumno.o guardarFichero.o imprimirDatos.o imprimirGrupo.o main.o visualizarLista.o

all : $(DEPS) $(OBJ)
	$(CC) -o ProyectoFinal.exe $(OBJ) $(CFLAGS)
	rm *.o
%.o : %.cc $(DEPS)
	$(CC) -c -o $@ $<
clean :
	rm *.exe
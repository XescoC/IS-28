# Extracción de requisitos

## Partes interesadas:



## Funcionales:

* Mostrar información de alumno: los campos de información que debe mostrar cada alumno son: dni, nombre, apellidos, teléfono, email corporativo, dirección(calle), curso más alto, fecha de nacimiento, equipo al que pertenece, es líder o no.

* Añadir alumno: Se permitirá añadir nuevos alumnos al sistema siempre y cuando no se sobrepase el límite de usuarios. No deben existir alumnos con los mismos campos identificadores.

* Buscar alumno: Se permitirá la búsqueda de alumnos tanto por su DNi, como por su apellido o grupo de trabajo, siendo el caso que los apellidos sean iguales, se muestre la información de ambos alumnos.

* Buscar grupo: se debe mostrar todos sus integrantes.

* Editar alumno: Se podrán modificar los datos de cada alumno, para ello buscando por su DNi, o bien por su apellido, en el caso de conflicto por varios alumnos con el mismo apellido, se permitirá elegir cuál es el que hay que modificar.

* Eliminar alumno: Se podrá eliminar a un alumno de la base de datos buscándolo por DNi o sus apellidos, y como en el caso anterior, si hay varios alumnos, se pedirá confirmación pediendo el DNI de cual hay que eliminar.

* Copia de seguridad: Se podrá hacer una copia de seguridad de los datos de los alumnos en cualquier momento, y cargar copias anteriores de ellos.

* Mostrar lista de alumnos:  Se permitirá mostrar la lista de alumnos ordenados por nombre, apellidos, DNI o curso más alto de forma ascendente / descendente.

* Diversos usuarios del sistema: Se permite que existan diversos profesores en el sistema, solo habiendo un profesor coordinador, los demas serán ayudantes.

## No funcionales:

* El sistema operativo objetivo del programa es GNU/Linux, siendo opcional su ejecución en otros sistemas.

* Toda información es obligatoria, excepto el equipo al que pertenece y si es líder o no.

* Dentro de la propia base de datos no se debe almacenar información relevante al profesor.

* La ejecución del programa se llevará a cabo mediante la consola de comandos.

* Software lo más sencillo posible de utilizar.

* Las copias de seguridad se realizarán en ficheros binarios.

* Como máximo podemos almacenar datos de 150 alumnos.

* Sin límite de alumnos por grupo. 

* Como máximo un líder por cada grupo.

* Idioma obligatorio: castellano.

* No puede existir dos alumnos con el mismo DNI ni email.

* Al ejecutar el programa se imprime la lista de alumnos se debe generar un fichero html o markdown que se mostrará al final del programa.

* El programa se realizará en C++.



## Prioridad de requisitos:

* Compatible con la plataforma Linux / C++.
* Ejecución del programa mediante interfaz de comandos.
* Añadir alumno.
* Campos obligatorios.
* Buscar alumno.
* Editar alumno.
* Eliminar alumno.
* Guardar copia de seguridad.
* Cargar copia de seguridad.
* Imprimir lista de alumnos.
* Tamaño máximo de la lista: 150 alumnos.
* Ficheros binarios.
* Generar fichero html o markdown al finalizar el programa.

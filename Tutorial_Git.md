## ¿Qué es Git?
**_Git_** es un software de control de versiones, ¿qué significa esto? Realiza un seguimiento de los cambios llevados a cabo en los archivos, por lo cual puede llevar un registro de versiones, haciendo que cualquier programa, pueda almacenar un historial de sus ultimas modificaciones, para así llevar un registro mínimo del trabajo desempeñado en él, así como el progreso. Fue diseñado por _Linus Torvalds_, conocido por crear el **_kernel de Linux_**.

La idea su creación fue el llevar más cómodamente el manejo de las distintas versiones de un software, con la utilización de diferentes herramientas para revertir cambios, actualizar las modificaciones o, incluso, separar la etapa de creación del proyecto por distintas **_ramas_**. En la actualidad está muy estandarizado su uso, llegando a ser usado para todo tipo de proyectos, ya sean de particulares, empresas o, incluso, por parte de multinacionales.

## Git y sus estados

En Git, los cambios en los archivos tienen diversas fases o estados, **¿cómo describiríamos un estado en Git?** Nos referimos a estado o fase en Git cuando un archivo, se encuentra o bien modificado a la copia guardada en el repositorio de Git, o a aquella modificación de algún archivo la cual está en la fase de preparación para ser llevado a cabo, o a aquellos archivos que ya han sido aceptados y modificados en el repositorio.

La peculiaridad de **_Git_** respecto a otros controladores de versiones, es la forma de modelar los cambios en los archivos. Git, a diferencia de los demas, modela los datos como **_instantáneas de un sistema de archivos_**.


 Teniendo en cuenta estas fases o estados, y la estructura de la información, contaríamos con:

1. **Estado modificado (modified).** Se encuentran cambios en el archivo, entre la versión que se encuentra guardada y la actual. estos cambios serán pasados al estado preparado tras añadirlos al stage.

```Shell
~/Universidad/IS/IS_practicas on  i72roagi! ⌚ 18:55:32
$ git status
En la rama i72roagi

Archivos sin seguimiento:
  (usa "git add <archivo>..." para incluirlo a lo que se será confirmado)

        images/

sin cambios agregados al commit (usa "git add" y/o "git commit -a")
```

2. **Estado preparado (staged).** En esta fase, los archivos se encuentran en el stage, esperando a ser confirmados y pasar al repositorio local.

```Shell
~/Universidad/IS/IS_practicas on  i72roagi! ⌚ 18:56:07
$ git add images/

~/Universidad/IS/IS_practicas on  i72roagi! ⌚ 18:56:35
$ git status
En la rama i72roagi
Cambios a ser confirmados:
  (usa "git reset HEAD <archivo>..." para sacar del área de stage)

        nuevo archivo:  images/git_logo.png
```

3. **Estado confirmado (committed).** Este estado es cuando los cambios en los archivos se encuentran ya en nuestro repositorio local.

```Shell
~/Universidad/IS/IS_practicas on  i72roagi! ⌚ 18:59:12
$ git commit -m "Añadidas imágenes al repositorio"
[i72roagi e3af425] Añadidas imágenes al repositorio
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 images/git_logo.png
```


Bibliografía:
* [Git](https://en.wikipedia.org/wiki/Git "Git")
* [Taller de Git del Aula de Software Libre de la UCO](https://aulasoftwarelibre.github.io/taller-de-git/)

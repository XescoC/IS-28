# **1.1.4 Ramas**
## **Ramas - Branches**
Las ramas son una manera de dividir las etapas de desarrollo en diferentes versiones (_nuevas funcionalidades_) para así poder integrarlas en la rama principal.

![](https://github.com/XescoC/IS-28/raw/i72ruvea/images/ramas.PNG)

Ahora procederemos a el aprendizaje de una serie de **comandos** para manejarnos con las Ramas:


 * Creación de una Rama:

 `git branch "nombre_rama"`


 * Eliminación de una Rama:

 ```Shell
 git branch -d "nombre_rama"
 git branch -D "nombre_rama"
 ```

 * Ver listado de Ramas disponibles:

  `git branch`


*  Movernos de una Rama a otra:

  `git checkout "nombre_rama"`


* Crear una Rama y moverse a la creada en un solo paso:

  `git checkout -b "nombre_rama"`


* Comparar Ramas:

  `git diff "nombre_rama".."nombre_rama"`


* Ver Ramas identicas a la actual:

  `git branch --merged`


* Renombrar una Rama:

  `git branch -m "nombre_antiguo" "nombre_nuevo"`


* Integrar Ramas a la actual:

  `git merge "nombre_rama"`


* Resolver conflictos (usualmente utilizado de forma manual):

  `git merge --abort`


*
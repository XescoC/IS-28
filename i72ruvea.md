# **1.1.4 Ramas**
## **Ramas o Branches**
Es la forma para separar la línea actual de desarrollo con respecto a la principal. Normalmente representan versiones del software que posteriormente son integradas a la línea
principal.

![](https://github.com/XescoC/IS-28/raw/i72ruvea/images/ramas.PNG)

Ahora procederemos a el aprendizaje de una serie de **comandos** para manejarnos con las Ramas:


###### **Comandos Ramas 1**

* Ver listado de Ramas disponibles:

  `git branch`


 * Creación de una Rama:

      `git branch "nombre_rama"`


 *  Movernos de una Rama a otra:

      `git checkout "nombre_rama"`


* Crear una Rama y moverse a la creada en un solo paso:

    `git checkout -b "nombre_rama"`


* Comparar Ramas:

    `git diff "nombre_rama".."nombre_rama"`

###### **Comandos Ramas 2**

* Ver Ramas identicas a la actual:

  `git branch --merged`


* Renombrar una Rama:

  `git branch -m "nombre_antiguo" "nombre_nuevo"`


* Eliminación de una Rama:

  ```Shell
  git branch -d "nombre_rama"
  git branch -D "nombre_rama"
  ```


* Integrar Ramas a la actual:

  `git merge "nombre_rama"`


* Resolver conflictos (usualmente utilizado de forma manual):

  `git merge --abort`

###### **Comandos Ramas 3**

* Almacenar cambios temporales:

  `git stash save "mensaje"`


* Listar cambios:

  `git stash list`


* Ver contenido de un cambio temporal:

  `git stash show -p "nombre_stash"`


* Eliminar un cambio temporal:

  `git stash "nombre_stash"`


* Aplicar cambio del *stash*:

   ```Shell
   git stash apply "nombre_stash"
   git stash pop "nombre_stash"
   ```

# **1.1.5 GitHub**
## **GitHub no es Git**

   ![](https://github.com/XescoC/IS-28/raw/i72ruvea/images/github.PNG)


###### Comandos GitHub 1

  * Añadir un repositorio remoto:

    `git remote add origin url`

  * Ver repositorios remotos:

    `git remote -v`


  * Eliminar repositorio remoto:

    `git remote rm origin`


  * Añadir cambios del repositorio local al remoto:

    `git push -u origin master`


  * Añadir cambios del repositorio remoto al local:

    `git pull`


###### Comandos GitHub 2

  * Ver *branches* remotos:

      `git branch -r`


  * Ver todos los *branches*:

      `git pull`


  * Clonar un repositorio remoto:

      `git clone url`


**Dar seguimiento a *branches* remotos**

  * LOCAL → REMOTO
    1. Cambios en el repositorio local.
    2. Commit de los cambios.
    3. Añadir cambios al repositorio local

      `git push`


  * REMOTO → LOCAL
    * Sincronización y unión:

        ```Shell
        git fetch origin
        git merge origin/master
        ```
    * En un solo paso:

      `git pull`


**Operaciones con *branches* remotos**

  * Creación:
   1. Crear branch local.
   2. Hacer cambios en dicho branch.
   3. Hacer commit.
   4. Copiar el branch al repositorio:

     `git push -u origin branch_remoto`

* Copia:

     `git checkout -b local remoto`

* Eliminación:

     `git push origin -delete branch_remoto`

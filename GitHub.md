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

    

# Motivación
* **Código efímero.**
* **Necesidad de mantener todas las versiones del código fuente.**
* **Problemas en organizaciones para mantener el código actualizado.**
* **Coherencia de versiones.**
* **Conocimiento del cambio que ha provocado que el sistema no funcione.**
* **Fallos en el disco duro que suponen riesgo de información desactualizada.**
* **Satisfacer el compromiso de entrega.**

# Git y GitHub

### Git
![](https://github.com/XescoC/IS-28/raw/master/images/git_i72roagi.png): sistema para el control distribuido de versiones de código. Fundamentalmente permite:
* Dar seguimiento a los cambios realizados sobre un archivo.
* Almacenar una copia de los cambios.

### GitHub
![](https://github.com/XescoC/IS-28/raw/master/images/github_i72roagi.png): sitio web dónde podemos subir una copia de nuestro repositorio Git.

# Ventajas

### Git

* Habilidad de deshacer cambios.
* Historial y documentación de cambios.
* Múltiples versiones de código.
* Habilidad de resolver conflictos entre versiones de distintos programadores.
* Copias independientes.

### GitHub

* Documentación de requerimientos.
* Ver el avance del desarrollo.

# Instalación

* Para instalar Git: [https://git-scm.com](https://git-scm.com "https://git-scm.com").
* En el curso se utilizará Git a través de líneas de comandos.
* Para eclipse existen _plugins_ integrados:  
[https://www.eclipse.org/egit](https://www.eclipse.org/egit "https://www.eclipse.org/egit").

# Configuración básica

Nombre del administrador:  
`git config --global user.name "su_nombre"`

Correo electrónico:  
`git config --global user.email su_correo`

Editor de texto:  
`git config --global core.editor "editor_de_texto_favorito"`

Color de la interfaz:  
`git config --global color.ui true`

Listado de la configuración:  
`git config --list`
# Uso básico

##### Los tres estados de Git

![](https://github.com/XescoC/IS-28/raw/usoBasico/images/localOperations.png)

##### Comandos básicos I

Iniciar repositorio en un directorio:

`git init`

Agregar cambios al area de staging:

`git add`

Validar cambios en el repositorio:

`git commit -m "Mensaje"`

Hacer los dos pasos anteriores en uno:

`git commit -am "Mensaje"`

Historial de commits:

`git log`

##### Comandos basicos II 

Ayuda del listado anterior:

`git help log`

Listar los 5 commits más recientes:

`git log -n 5`

Listar los commits desde una fecha:

`git log --since=2018-09-18`

Listar los commits por autor:

`git log --author="Antonio"`

Ver cambios en el directorio:

`git status`

##### Comandos básicos III

Ver la diferencia entre ficheros en el directorio y el repositorio de git:

`git diff`

Ver diferencia entre ficheros en el *staging* y el repositorio:

`git diff --staged`

Eliminar archivos:

`git rm archivo`

`git commit -m "Mensaje"`

Mover o renombrar archivos:

`git mv antiguo nuevo`

`git commit -m "Mensaje"`

##### Comandos básicos IV

Deshacer cambios con git:

`git checkout -- nombre_fichero`

Retirar archivos del *staging*:

`git reset HEAD nombre_fichero`

Completar último commit:

`git commit --amend -m "Mensaje"`

Recuperar version de un fichero de commit antiguo:

`git checkout <id_commit> -- nombre_archivo`

Revertir un commit:

`git revert <id_commit>`

##### Comandos básicos V

Deshacer multiples cambios en el repositorio:

`git reset --soft <id_commit>`

`git reset --mixed <id_commit>`

`git reset --hard <id_commit>`

Listar archivos que git no controla:

`git clean -n`

Eliminar archivos que git no controla:

`git clean -f`

Ignorar archivos en el repositorio: .gitignore

##### Comandos básicos VI

Listar contenido del repositorio de git:

`git ls-tree master`

`git ls-tree master^^^`

`git ls-tree master~3`

Log en una línea:

`git log --oneline`

Log con los tres últimos commits en una línea:

`git log --oneline -3`

Para más opciones consultar documentación de git.

##### Comandos básicos VII

Examinar el contenido de un commit:

`git show <id>`

Comparar un commit con el actual:

`git diff <id> nombre_archivo`

Comparar dos commits:

`git diff id..id nombre_archivo`# **1.1.4 Ramas**
## **Ramas o Branches**
Es la forma para separar la línea actual de desarrollo con respecto a la principal. Normalmente representan versiones del software que posteriormente son integradas a la línea
principal.


&nbsp

![](https://github.com/XescoC/IS-28/raw/master/images/ramas.PNG)

---
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

  ` git stash save "mensaje"`


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


   ![](https://github.com/XescoC/IS-28/raw/master/images/github.PNG)


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

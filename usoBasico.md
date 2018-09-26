###**Uso básico**

#####**Los tres estados de Git**

![](url/localOperations.png)

#####**Comandos básicos I**

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

#####**Comandos basicos II**

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

#####**Comandos básicos III**

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

#####**Comandos básicos IV**
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

#####**Comandos básicos V**

Deshacer multiples cambios en el repositorio:

`git reset --soft <id_commit>`

`git reset --mixed <id_commit>`

`git reset --hard <id_commit>`

Listar archivos que git no controla:
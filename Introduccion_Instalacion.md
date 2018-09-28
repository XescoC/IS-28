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

Este ejemplo utiliza la herramienta visual wxFormBuilder (WXFB) para "dibujar" 
las interfases. Se incluye en el proyecto ZinjaI un proyecto WXFB (wxfb_project.fbp),
con una ventana definida a modo de ejemplo (WinExample.*). 

Los archivos wxfb_project.cpp y wxfb_project.h se generan autom�ticamente mediante 
WXFB. Estos archivos definen clases correspondientes a las ventanas del proyecto. 
Estas clases crean y acomodan todos los controles, y definen metodos virtuales para 
cada uno de los eventos. El usuario no debe editar estos archivos; debe generar sus 
propias ventanas finales heredando de estas clases y sobreescribiendo los metodos 
correspondientes a los eventos de inter�s. El ejemplo es la clase WinExample, que 
hereda de la clase wxfbExample definida en el proyecto WXFB.

Para editar las ventanas bases abra el archivo wxfb_project.fbp (haciendo doble 
click sobre el mismo en el arbol de proyectos, categor�a Otros). ZinjaI detectar� los 
cambios en los componentes WXFB y regenerar� el c�digo de las clases correspondientes 
autom�ticamente al recibir el foco.

Puede acceder a la documentaci�n acerca de las funciones y clases de wxWidgets mediante 
la opci�n "Ayuda de wxWidgets" del submen� "Dise�ar Interfases" del men� "Herramientas".

wxFormBuilder no se incluye en ZinjaI, por lo que debe instalarlo por 
separado si a�n no lo hizo. La ayuda de wxWidgets solo se incluye
si ha instalado el complemento propio de la biblioteca. Se puede acceder 
r�pidamente a ella con la opci�n "Referencia wxWidgets..." del submenu 
"Dise�ar Interfases" del menu "Herramientas".


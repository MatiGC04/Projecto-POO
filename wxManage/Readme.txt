Este ejemplo utiliza la herramienta visual wxFormBuilder (WXFB) para "dibujar" 
las interfases. Se incluye en el proyecto ZinjaI un proyecto WXFB (wxfb_project.fbp),
con una ventana definida a modo de ejemplo (WinExample.*). 

Los archivos wxfb_project.cpp y wxfb_project.h se generan automáticamente mediante 
WXFB. Estos archivos definen clases correspondientes a las ventanas del proyecto. 
Estas clases crean y acomodan todos los controles, y definen metodos virtuales para 
cada uno de los eventos. El usuario no debe editar estos archivos; debe generar sus 
propias ventanas finales heredando de estas clases y sobreescribiendo los metodos 
correspondientes a los eventos de interés. El ejemplo es la clase WinExample, que 
hereda de la clase wxfbExample definida en el proyecto WXFB.

Para editar las ventanas bases abra el archivo wxfb_project.fbp (haciendo doble 
click sobre el mismo en el arbol de proyectos, categoría Otros). ZinjaI detectará los 
cambios en los componentes WXFB y regenerará el código de las clases correspondientes 
automáticamente al recibir el foco.

Puede acceder a la documentación acerca de las funciones y clases de wxWidgets mediante 
la opción "Ayuda de wxWidgets" del submenú "Diseñar Interfases" del menú "Herramientas".

wxFormBuilder no se incluye en ZinjaI, por lo que debe instalarlo por 
separado si aún no lo hizo. La ayuda de wxWidgets solo se incluye
si ha instalado el complemento propio de la biblioteca. Se puede acceder 
rápidamente a ella con la opción "Referencia wxWidgets..." del submenu 
"Diseñar Interfases" del menu "Herramientas".


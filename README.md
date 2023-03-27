# ProgramaCLS_ProgramaNativo
Programa que hace la funcion de cls en consola en java, como esto no es posible hacer, se utiliza un metodo nativo, programado en c

Pasos: (Win10)
Antes que nada:
*Se debe tener el java instalado, es decir el jdk 1.8.0
*Tener instalado Visual Studio para programar en c
*Hacer una ruta para utilizar los comandos:

Crear una ruta en sistema>Configuracion avanzada del sistema>
Dar click en variables de entorno
Buscar la variable del sistema "Path" y darle en editar
Agregar una nueva y ponerle la direccion del jdk. La mia estaba en la siguiente ruta: "C:\Program Files\Java\jdk1.8.0_361\bin"
Le das en subir, hasta que este hasta arriba, para que tenga una mayor preferencia
Dar aceptar en todas las ventanas (son tres ventanas)
Con esto ya podremos utilizar los comandos javac y javah desde consola


Se crean dos .java un Consola.java y ProbarConsola.java
primero se compilan
javac Consola.java
javac ProbarConsola.java

Con esto se crearan los .class de cada archivo.java
Despues se necesita crear el .h de Consola.class, se utiliza el siguiente comando
javah Consola
y se creara el archivo Consola.h

despues se debe crear el programa Consola.c realizado en c

Despues se va a ir a la consola de visual, en mi caso la x64 ya que tengo pc de x64.

Aqui se debe ejecutar el siguiente comando, se personalizan segun las rutas de tu computadora:
 CI -I"C:\Program Files\Java\jdk1.8.0_60\include" -I"C:\Program Files\Java\jdk1.8.0_60\include\Win32" -LD Consola.c -FeConsola.DLL

ya con esto se crearan 3 archivos .dll, .lib y .exp

Ahora en la consola donde estabamos usando los programas de java, debemos utilizar el ProbarConsola con java ProbarConsola y listo!

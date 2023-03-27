//despues de ejecutar javah
//Consola.c
//implementacion de las funciones de la libreria Consola.DLL
#include <jni.h>
#include "Consola.h"
#include <stdlib.h>			//lib para system
#include <windows.h>		//para las demas funciones

JNIEXPORT void JNICALL Java_Consola_limpiarConsola(JNIEnv *env, jclass clase)
{
	system("cls");
}

JNIEXPORT void JNICALL Java_Consola_posicionarCursor(JNIEnv *env, jclass clase, jint renglon, jint columna)
{
	HANDLE hStdout;
	COORD posicion;
	
	//Obtener manejador (HANDLE) de pantalla
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	//posicion del cursor
	posicion.X= columna;
	posicion.Y= renglon;

	//Llamar la funcion para posicionarn el cursor

	SetConsoleCursorPosition(hStdout, posicion);
			

}


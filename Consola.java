//Consola.java
//Clase para contener los métodos nativos
public class Consola{
	//Métodos nativos (ahora estaticos)
	public static native void limpiarConsola();
	public static native void posicionarCursor(int renglon, int columna );
	
	static{
	System.loadLibrary("Consola");
	}
	

}
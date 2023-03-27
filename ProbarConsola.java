//ProbarConsola.java
//Programa para probar los metodos nativos de Consola.DLL

public class ProbarConsola{
    public static void main(String[] args){
        //Limpiar la consola (como es estatico, no ocupo crear objeto)
        Consola.limpiarConsola();

        //Posicionar el cursor
        Consola.posicionarCursor(10,20);

        //Mensaje en Java
        System.out.println("Empezamos en la posicion (10,20)");
    }
}
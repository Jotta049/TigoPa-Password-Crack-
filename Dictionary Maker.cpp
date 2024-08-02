#include <iostream>
#include <fstream>
#include <string>

// Función principal del programa
int main() {
    // Crear y abrir un archivo de salida llamado "wifi_passwords.txt"
    std::ofstream outFile("wifi_passwords.txt");

    // Verificar si el archivo se abrió correctamente
    if (!outFile) {
        // Si no se pudo abrir, mostrar un mensaje de error y salir del programa
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
        return 1; // Retornar 1 indica que hubo un error
    }

    // Definir el prefijo para las contraseñas WiFi
    std::string prefix = "WiFi-";

    // Bucle para recorrer todas las posibles combinaciones de 7 dígitos
    // desde 0000000 hasta 9999999
    for (int i = 0; i < 10000000; ++i) {
        // Convertir el número entero a una cadena de texto
        std::string subscriberNumber = std::to_string(i);
        // Añadir ceros a la izquierda para asegurarse de que la cadena tenga 7 dígitos
        subscriberNumber.insert(subscriberNumber.begin(), 7 - subscriberNumber.length(), '0');

        // Construir la contraseña combinando el prefijo "WiFi-" con el número 9 fijo
        // y el número de suscriptor generado
        std::string password = prefix + "9" + subscriberNumber;

        // Escribir la contraseña generada en el archivo de salida
        outFile << password << std::endl;
    }

    // Cerrar el archivo de salida después de escribir todas las contraseñas
    outFile.close();

    // Mostrar un mensaje de éxito en la consola
    std::cout << "Diccionario creado exitosamente en wifi_passwords.txt" << std::endl;

    // Retornar 0 indica que el programa finalizó correctamente
    return 0;
}

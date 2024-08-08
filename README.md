# TigoPa-Password-Crack-
Esto es una guia educativa parte de un proyecto de mi carrera universitaria en ciberseguridad esta va enfocada en hacer conciencia de las buenas practicas de ciberseguridad en nuestras redes domesticas.

Perfecto, aquí tienes el README adaptado para un repositorio en GitHub:

---

# Optimización de Diccionario de Contraseñas para Redes WiFi

## Descripción

Este proyecto tiene como objetivo la creación y optimización de un diccionario de contraseñas para redes WiFi gestionadas por una empresa de telecomunicaciones en Panamá. Mediante la utilización de análisis estadístico y técnicas de automatización, se generó un diccionario que maximiza la probabilidad de éxito en pruebas de seguridad (pentesting) al enfocarse en las contraseñas más probables.

## Objetivos

- **Reducción del Tamaño del Diccionario**: Limitar el número de contraseñas, excluyendo aquellas que son estadísticamente menos probables.
- **Generación de Contraseñas Probables**: Utilizar datos reales y ajustar los rangos de números de suscriptor para incluir todas las contraseñas potencialmente válidas.
- **Automatización del Proceso**: Crear un programa en C++ que automatice la generación del diccionario, facilitando futuras expansiones y ajustes.

## Implementación

El proyecto incluye un programa en C++ que:

- Genera contraseñas basadas en un prefijo constante ("WiFi-") y un número de suscriptor de 8 dígitos, comenzando siempre con 9.
- Optimiza el rango de números de suscriptor basándose en datos reales, abarcando posibles variaciones para evitar la exclusión de contraseñas válidas.

## Requisitos

Para compilar y ejecutar el programa, necesitarás:

- Un entorno Linux (preferiblemente Kali Linux).
- Compilador `g++` para C++.

## Compilación y Ejecución

### Clonar el Repositorio

Clona el repositorio en tu máquina local:

```bash
git clone https://github.com/tuusuario/tu-repositorio.git
cd tu-repositorio
```

### Compilar el Programa

Navega hasta el directorio del proyecto y compila el archivo fuente:

```bash
g++ -o generar_diccionario generar_diccionario.cpp
```

Esto creará un ejecutable llamado `generar_diccionario`.

### Ejecutar el Programa

Ejecuta el programa para generar el diccionario de contraseñas:

```bash
./generar_diccionario
```

El programa generará un archivo llamado `wifi_passwords.txt`, que contendrá todas las contraseñas dentro del rango optimizado.

## Resultados

- **Optimización**: El diccionario resultante es más manejable y enfocado en contraseñas con mayor probabilidad de uso, mejorando la eficiencia en pruebas de seguridad.
- **Eficiencia**: La reducción en el número de contraseñas permite ahorrar tiempo y recursos durante el pentesting.
- **Automatización**: La generación automatizada del diccionario facilita futuras actualizaciones y ajustes.

## Contribuciones

Las contribuciones son bienvenidas. Si deseas mejorar el código o añadir nuevas funcionalidades, por favor, sigue los pasos descritos a continuación:

1. Haz un fork del repositorio.
2. Crea una nueva rama (`git checkout -b feature-nueva-funcionalidad`).
3. Realiza tus cambios y haz commit (`git commit -am 'Añadir nueva funcionalidad'`).
4. Haz push a la rama (`git push origin feature-nueva-funcionalidad`).
5. Abre un Pull Request.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT - consulta el archivo [LICENSE](LICENSE) para más detalles.

---

Este README está estructurado y diseñado para proporcionar toda la información necesaria para los usuarios de GitHub, incluidos los pasos para la compilación y ejecución del programa, así como la posibilidad de contribuir al proyecto.

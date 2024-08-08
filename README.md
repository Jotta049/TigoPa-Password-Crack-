# TigoPa-Password-Crack-
Esto es una guia educativa parte de un proyecto de mi carrera universitaria en ciberseguridad esta va enfocada en hacer conciencia de las buenas practicas de ciberseguridad en nuestras redes domesticas.
## Uso del creador de contraseñas 
## Implementación

El proyecto incluye un programa en C++ que:

- Genera contraseñas basadas en un prefijo constante ("WiFi-") y un número de suscriptor de 8 dígitos, comenzando siempre con 9.
- Optimiza el rango de números de suscriptor basándose en datos reales, abarcando posibles variaciones para evitar la exclusión de contraseñas válidas.
- Estos parametros son propios de la investigacion de como funcionan las contraseñas de los enrutadores de los clientes esta se basa en el numero de suscriptor de los clientes tambien hay ciertos parametros extra que se colocaron en base a sondeos a personas clientes de esta compañia. 

## Requisitos

Para compilar y ejecutar el programa, necesitarás:

- Preferiblemente Un entorno Kali Linux ya que este es el sistema en el que vamos a trabajar.
- Compilador `g++` para C++.
- (se pueden usar otros sistemas en los que las herramientas que se utilizan en este proceso sea compatibles.)

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




Aquí tienes la guía actualizada con un comentario al principio para explicar el contexto:

```markdown
# Instalación del Controlador para el Adaptador de Red RTL8188EUS en Kali Linux

**Nota:** Esta guía está diseñada específicamente para el adaptador de red **RTL8188EUS**. La instalación del controlador y la configuración para el **Monitor Mode** y la **Inyección de Paquetes** pueden variar según el chipset del adaptador. Si estás utilizando un adaptador diferente, te recomendamos consultar la documentación específica de tu tarjeta de red y ajustar los pasos según sea necesario.

Esta guía explica cómo instalar el controlador necesario para el adaptador de red **RTL8188EUS** en Kali Linux. Este controlador permitirá que el adaptador funcione en **Monitor Mode** y soporte **Inyección de Paquetes**, funciones esenciales para la auditoría de redes inalámbricas.

## Índice

- [Requisitos Previos](#requisitos-previos)
- [Identificación del Adaptador de Red](#identificación-del-adaptador-de-red)
- [Descarga y Configuración del Controlador](#descarga-y-configuración-del-controlador)
- [Compilación e Instalación del Controlador](#compilación-e-instalación-del-controlador)
- [Verificación de la Instalación](#verificación-de-la-instalación)
- [Consideraciones Finales](#consideraciones-finales)

## Requisitos Previos

Antes de comenzar, asegúrate de que tu sistema esté actualizado y de que tengas instaladas las herramientas necesarias para la compilación del controlador.

```bash
sudo apt update
sudo apt upgrade
sudo apt install build-essential dkms linux-headers-$(uname -r) git
```

## Identificación del Adaptador de Red

Para asegurarte de que tu sistema reconoce correctamente el adaptador de red, utiliza el siguiente comando:

```bash
lsusb
```

Este comando listará todos los dispositivos USB conectados. Busca en la lista tu adaptador **RTL8188EUS** para confirmar que está correctamente conectado.

## Descarga y Configuración del Controlador

1. **Clonar el Repositorio del Controlador:**

   Descarga el controlador desde el repositorio oficial de GitHub:

   ```bash
   git clone https://github.com/aircrack-ng/rtl8188eus
   cd rtl8188eus
   ```

2. **Desactivar el Controlador Predeterminado:**

   Para evitar conflictos con el controlador predeterminado `r8188eu` que viene con el kernel de Linux, es necesario desactivarlo:

   ```bash
   echo "blacklist r8188eu" | sudo tee /etc/modprobe.d/realtek.conf
   ```

## Compilación e Instalación del Controlador

Compila e instala el controlador descargado siguiendo estos pasos:

```bash
sudo make
sudo make install
sudo modprobe 8188eu
```

## Verificación de la Instalación

### Verificar el Modo Monitor

Para verificar que el adaptador esté funcionando y soporta el **Monitor Mode**:

```bash
iwconfig
```

Si deseas poner el adaptador en **Monitor Mode**, usa los siguientes comandos:

```bash
sudo ip link set wlan0 down
sudo iw dev wlan0 set type monitor
sudo ip link set wlan0 up
iwconfig
```

### Verificar la Inyección de Paquetes

Para verificar que la inyección de paquetes esté funcionando, utiliza la herramienta `aireplay-ng`:

```bash
sudo apt install aircrack-ng
sudo aireplay-ng --test wlan0
```

## Consideraciones Finales

Este proceso está específicamente diseñado para el adaptador de red **RTL8188EUS**. Ten en cuenta que no todos los adaptadores de red tienen el mismo chipset, por lo que es posible que necesites seguir pasos diferentes si utilizas un adaptador con un chipset distinto. Si tienes un adaptador diferente, te recomendamos que consultes la documentación específica del fabricante o el repositorio correspondiente para tu chipset.

Si encuentras algún problema durante el proceso o tienes alguna pregunta, no dudes en abrir un issue en este repositorio. También puedes contribuir con mejoras a esta guía si encuentras formas de optimizar el proceso.
```

Esta versión incluye un comentario al principio para contextualizar que la guía está centrada en el RTL8188EUS, pero los pasos pueden variar para otros adaptadores.

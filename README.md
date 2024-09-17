# Calculadora C++ con Pruebas Unitarias

Este proyecto implementa una calculadora simple en C++ con pruebas unitarias utilizando la biblioteca UnitCpp.

## Requisitos

- Compilador C++ que soporte C++11 o superior (por ejemplo, MinGW-w64 para Windows)
- Biblioteca UnitCpp para pruebas unitarias

## Instalación de UnitCpp en Windows

1. Descarga UnitCpp desde el repositorio oficial: https://github.com/cjdb/UnitCpp

2. Extrae el contenido del archivo zip descargado.

3. Copia la carpeta `UnitCpp` a una ubicación de tu elección, por ejemplo: `C:\Libraries\UnitCpp`

4. Agrega la ruta de UnitCpp a las variables de entorno del sistema:
   - Busca "Editar las variables de entorno del sistema" en el menú de inicio
   - Haz clic en "Variables de entorno"
   - En la sección "Variables del sistema", busca la variable "Path" y haz clic en "Editar"
   - Haz clic en "Nuevo" y agrega la ruta donde colocaste UnitCpp, por ejemplo: `C:\Libraries\UnitCpp`
   - Haz clic en "Aceptar" para cerrar todas las ventanas

## Estructura del Proyecto

- `calculator.hpp`: Declaración de la clase Calculator
- `calculator.cpp`: Implementación de la clase Calculator
- `test_calculator.cpp`: Pruebas unitarias para la calculadora

## Compilación y Ejecución

1. Abre una terminal (CMD o PowerShell) en la carpeta del proyecto.

2. Compila los archivos usando el siguiente comando:
   ```bash
   g++ -std=c++11 -I"C:\Libraries\UnitCpp" calculator.cpp test_calculator.cpp -o test_calculator
   ```
   Asegúrate de reemplazar `C:\Libraries\UnitCpp` con la ruta real donde instalaste UnitCpp.

3. Ejecuta las pruebas:
   ```bash
   .\test_calculator
   ```

## Funcionalidades

La calculadora implementa las siguientes operaciones:
- Suma
- Resta
- Multiplicación
- División (con manejo de división por cero)

## Pruebas Unitarias

Las pruebas unitarias cubren:
- Casos básicos para cada operación
- Casos con números negativos
- Casos con cero
- Manejo de errores (división por cero)

## Contribuir

Si deseas contribuir al proyecto, por favor:
1. Haz un fork del repositorio
2. Crea una nueva rama para tu feature
3. Realiza tus cambios
4. Envía un pull request

## Licencia

Este proyecto está bajo la licencia MIT. Ver el archivo `LICENSE` para más detalles.
# Bad duck esp
Interprete rubber ducky basado en ATMEGA32u4 
Distribución de teclado en español (España)

![Image description](https://github.com/Mandragoratools/Bad_duck_esp/blob/master/bad_usb_cjmcu.jpg)

Este repositorio incluye:

1. **bad_duck_esp:**
Interprete de DuckyScript.

2. **maper:**
Herramienta para mapear carácteres excepcionales en caso de ser necesario.

3. **Arduino_keyboard_LBDL**
Librería necesaria para la distribución de teclado en español.

#Wiki BAD DUCK ESP
¿Como configurar mi bad usb?
instalamos la libreria Arduino_keyboard_LBDL
creamos un archivo de texto(.txt) con el nombre que queramos ejemplo: script.txt
Lo metemos en nuestra tarjeta micro sd junto con la carpeta lang.
Insertamos la tarjeta en nuestro bad usb (cjmcu).
Abrimos el scketch de arduino bad_duck_esp.ino y lo cargamos en nuestra placa
abrimos la consola serial seleccionamos un modo por ejemplo : c, elegimos un lenguaje: es y por ultimo el playload: script.txt.


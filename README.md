# Trabajo Práctico 2
## Situación general
El programa a realizar cumple con la siguiente funcionalidad:

1. Permite al usuario ver informes sobre el funcionamiento de un sistema de telefonía, que viene ya plasmado en un archivo de *registros históricos* (por ejemplo, permite ver cuál es el celular que más veces llamó, etc.).
2. Plasma los mensajes de texto del registro histórico en los archivos de Ingresos y Egresos de cada celular.
3. Permite al usuario agregar mensajes de texto al sistema, que se guardarán en los archivos de Egresos de los celulares.
4. Procesa los archivos de Egresos y actualiza los registros históricos y los archivos de Ingresos de los celulares con los nuevos mensajes.

El sistema cuenta con un conjunto de antenas interconectadas, cada una con una capacidad máxima de conexiones concurrentes. Cada celular se conecta a una antena para enviar mensajes o llamar a otro celular.

Una llamada puede dar *ocupado* si alguno de los celulares participantes no está conectado a ninguna antena, o bien alguna de las antenas a las que están conectados está saturada.

El programa permitirá dos modos de uso en la consola:
* Modo sistema: para generar y visualizar informes sobre los registros históricos y procesar nuevos Egresos producidos desde el Modo Celular.
* Modo celular: para ver los mensajes enviados y recibidos por un celular en el sistema, y enviar nuevos mensajes.

### Los registros históricos

El archivo *Sistema/registros-historicos.txt* deberá contener un *bloque inicial de antenas* y luego un conjunto de *registros historicos*:

* Bloque inicial de antenas: consta de un conjunto de líneas, cada una con el formato `ANTENA nombreAntena maxConexiones`, donde `nombreAntena` nombra a la antena dentro del archivo y `maxConexiones` es la cantidad máxima de celulares conectados simultáneamente que permite.
  
* Declaraciones de eventos: consta de un conjunto de líneas que representan eventos ocurridos, cada una con alguno de los siguientes formatos:
  * `(CONECTAR | DESCONECTAR) numeroCelular nombreAntena minuto`: representa la conexión o desconexión del celular de número `numeroCelular` a la antena `nombreAntena` en el minuto `minuto`.
 
  * `(INICIO | FIN) numeroCelularOrigen numeroCelularDestino minuto`: representa el inicio o fin de una llamada entre el celular con número `numeroCelularOrigen` y el celular con número `numeroCelularDestino` en el minuto `minuto`.
  
  * `MENSAJE numeroCelularOrigen numeroCelularDestino minuto contenido`: representa el envío de un mensaje desde el celular con número `numeroCelularOrigen` hacia el celular con número `numeroCelularDestino` en el minuto `minuto` con el contenido `contenido`.

#### Consideraciones sobre los datos de entrada

* Se considera que el archivo *registros-historicos.txt* tiene un formato válido y es coherente.
* Si al leer los registros históricos se inicia una llamada que dió ocupado, se ignora el final de dicha llamada.

### Los informes del Modo Sistema

Para cumplir con los informes que muestra el menú del Modo Sistema, el programa deberá registrar las siguientes cosas:
* Llamadas realizadas: celular origen, celular destino, horario de inicio, antenas involucradas. Para las que no dieron ocupado: horario de fin. Para las que dieron ocupado: razón por la cual dieron ocupado (antena o celular desconectado). Items a...j.
* Mensajes enviados: celular origen, celular destino, horario de envío, contenido. Item b.
* Antenas: nombre, capacidad, máxima capacidad utilizada. Items k, n.
* Celulares: numero, identificador, antena de última conexión. Item o.

La manera de registrar algunas cosas es simplemente cargándolas en memoria a medida que se leen (inicios/fines de llamada, datos de antenas, mensajes). Algunas otras cosas, como por ejemplo detectar si una llamada debería dar ocupado, requieren analizar el estado del sistema en el momento en el que ocurre el evento. Para conseguir esto, el sistema debería poder *simular* los eventos ocurridos como si fuesen en tiempo real, recibiendo cada registro histórico como si fuera un evento que está ocurriendo.

# Trabajo Práctico 2
## Situación general
Se quiere simular el funcionamiento (durante un día) de un sistema de telefonía.

El sistema cuenta con un conjunto de antenas interconectadas. Cada celular puede conectarse a una antena para usar los siguientes servicios:
* Enviar un mensaje a otro celular conectado al sistema.
* Llamar a otro celular conectado al sistema.

Se simulará el funcionamiento mediante un programa que permite dos *modos de operación*:
* Modo sistema: permite visualizar el registro de los mensajes, llamadas y conexiones a antenas que ocurrieron durante el día.
* Modo celular: permite utilizar los servicios del sistema desde un celular.

El programa manipulará principalmente dos carpetas:
* Celulares: contiene carpetas llamadas por número de celular, cada una con un archivo *Egresos.txt* que contiene los mensajes que el celular desea enviar, y otro, *Ingresos.txt* que contiene los mensajes que recibió.
* Sistema: contiene un archivo llamado *Eventos.txt* con una *descripción de las antenas* y con los *registros históricos de eventos* del día. También contiene tres archivos de eventos de prueba llamados *EventosPrueba1.txt*, *EventosPrueba2.txt* y *EventosPrueba3.txt*.

### Formato de los archivos

#### Eventos.txt:
El archivo *Eventos.txt* deberá contener un *bloque inicial de declaración de antenas* y luego un conjunto de *declaraciones de eventos*:

* Bloque inicial de declaración de antenas: consta de un conjunto de líneas, cada una con el formato
  `ANTENA id_antena max_conexiones`
  
  Donde `id_antena` identifica a la antena dentro del archivo y `max_conexiones` es la cantidad máxima de celulares conectados simultáneamente que permite.
  
* Declaraciones de eventos: consta de un conjunto de líneas que representan eventos ocurridos, cada una con alguno de los siguientes formatos:
  * `(CONECTAR | DESCONECTAR) n_celular id_antena minuto`
  
  Representa la conexión o desconexión del celular de número `n_celular` a la antena `id_antena` en el minuto `minuto`.
  
  * `(INICIO | FIN) n_celular_1 n_celular_2 minuto`
  
  Representa el inicio o fin de una llamada entre el celular con número `n_celular_1` y el celular con número `n_celular_2` en el minuto `minuto`.
  
  * `MENSAJE n_celular_1 n_celular_2 minuto contenido`
  
  Representa el envío de un mensaje desde el celular con número `n_celular_1` hacia el celular con número `n_celular_2` en el minuto `minuto` con el contenido `contenido`.

### Consideraciones sobre el problema

* Se considera que el archivo *Eventos.txt* tiene un formato válido y es coherente. Esto quiere decir:
  * No se hace referencia a antenas no declaradas.
  * Todo celular mencionado tiene una carpeta creada en el directorio Celulares.
  * Un celular no está involucrado en llamadas simultáneas.
  * Todo inicio de llamada se corresponde con un fin de llamada *posterior* y toda conexión a una antena con una desconexión *posterior*.
* Si un celular intenta enviar un mensaje y la antena a la que está conectado éste o el destinatario están totalmente ocupadas, el mensaje se mantendrá en espera a ser enviado hasta que se desocupen ambas.

# funcionamiento, 
- cada día que se estudie será una `sesión`, en cada sesión tocará repetir ciertos temas, a parte de las sesiones hay un `calendario interno` que va gestionando qué días toca lo qué, si no toca nada ese día...
- se inicia una sesión y marcas los temas que te salen bien, en función de eso se recalculan las intermitencias
    - los temas están en una lista (o la estructura que toque) con un string para el nombre, una intermitencia futura y un día asignado
- hay que dar la opción de añadir nuevos temas que se estén estudiando

# cómo funciona por detrás
- `modelo-vista-controlador`: una capa de control con el núcleo del sistema, una vista que interactúa con el usuario y una de persistencia para que los datos se mantengan de vez en vez
- `modelo` : se encarga de gestionar la información con la que trabaja el programa, envía a la `vista` la información solicitada a través del `controlador`
    - calendario interno : ¿cómo lo implemento?
- `vista` : interactúa con el usuario
    - hacer un prototipo para ver qué es lo que quiero exactamente la interfaz gráfica
- `controlador` : responde a acciones del usuario enviando peticiones al `modelo` o cambios en la `vista`

# por aprender
- cómo hacer que los datos sean persistentes?
- cómo hacer el script de lanzamiento
- cómo coño hacer el calendario
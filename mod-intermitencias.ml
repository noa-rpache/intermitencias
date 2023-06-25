(*así definimos las intermitencias que irán en la lista*)
type intermitencia = 
  | Uno
  | Dos
  | Tres
  | Cinco
  | Siete
  | Diez
  | Quince
;;

(*elementos en la lista*)
type data = 
  (string * intermitencia * (int * int))
;;

let empty_data = [] (*TODO ahora mismo es una 'a list, y quiero que se entienda que es una data list vacía*)
;;

let add_tema nombre fecha = function
  | empty_data -> [(nombre, Uno, fecha)]
  | h::t -> (nombre, Uno, fecha)::h::t
;;

let imprimir_tema tema = function (nombre * intermitencia * (dia * mes)) -> print_string nombre
;;


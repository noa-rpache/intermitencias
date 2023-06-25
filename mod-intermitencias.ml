(*así definimos las intermitencias que irán en la lista*)
type intermitencia = 
  Uno
  Dos
  Tres
  Cinco
  Siete
  Diez
  Quince
;;

type data = 
  (string * intermitencia * (int * int)) list
;;

let empty_data = []
;;

let add_tema nombre fecha = 
  | empty_data -> [(nombre, Uno, fecha)]
  | h::t -> (nombre, Uno, fecha)::h::t
;;


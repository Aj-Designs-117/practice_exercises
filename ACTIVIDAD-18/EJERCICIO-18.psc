Algoritmo CalcularTiempoDeViaje
    Definir distancia, velocidad, tiempo Como Real
	
    Escribir "Ingrese la distancia entre las ciudades (en km): "
    Leer distancia
	
    Escribir "Ingrese la velocidad constante de la bicicleta (en km/h): "
    Leer velocidad
	
    Si velocidad = 0 Entonces
        Escribir "La velocidad no puede ser cero."
    Sino
        tiempo <- distancia / velocidad
        Escribir "El tiempo estimado de viaje es: ", tiempo, " horas."
    FinSi
FinAlgoritmo

Algoritmo CalcularDistancia
    Definir x1, y1, x2, y2, distancia Como Real
	
    Escribir "Ingrese las coordenadas del primer punto (x1, y1): "
    Leer x1, y1
    
    Escribir "Ingrese las coordenadas del segundo punto (x2, y2): "
    Leer x2, y2
    
    distancia <- RC((x2 - x1)^2 + (y2 - y1)^2)
    
    Escribir "La distancia entre los puntos es: ", distancia
FinAlgoritmo

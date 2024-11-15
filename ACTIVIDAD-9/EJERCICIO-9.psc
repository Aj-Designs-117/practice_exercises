Algoritmo CalcularAreaTerreno
    Definir H, R, altura, areaTriangulo, areaCircuferencia, areaTotal Como Real
	
    Escribir "Ingrese el valor de H: "
    Leer H
    
    Escribir "Ingrese el valor de R: "
    Leer R
	
    altura <- RC(H - R)
    areaTriangulo <- (R * altura / 2) * 2
    areaCircuferencia <- (PI * R^2) / 2
	
    areaTotal <- areaTriangulo + areaCircuferencia
	
    Escribir "El área total del terreno es: ", areaTotal, " metros cuadrados"
FinAlgoritmo

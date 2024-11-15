Algoritmo CalcularAhorroAnual
    Definir sueldo, ahorro_semanal, ahorro_anual Como Real
	
    Escribir "Ingrese su sueldo semanal: "
    Leer sueldo
	
    ahorro_semanal <- sueldo * 0.15
	
    ahorro_anual <- ahorro_semanal * 52
	
    Escribir "El ahorro anual es: $", ahorro_anual
FinAlgoritmo

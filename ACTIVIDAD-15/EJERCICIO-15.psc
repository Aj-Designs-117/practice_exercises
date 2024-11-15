Algoritmo CalcularPagoConsumoAgua
    Definir metros_cubicos, tarifa_por_metro, pago Como Real
	
    Escribir "Ingrese el total de metros cúbicos de agua consumidos: "
    Leer metros_cubicos
	
    Escribir "Ingrese la tarifa por metro cúbico de agua: "
    Leer tarifa_por_metro
	
    pago <- metros_cubicos * tarifa_por_metro
	
    Escribir "El total a pagar por el consumo de agua es: $", pago
FinAlgoritmo

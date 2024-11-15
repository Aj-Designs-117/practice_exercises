Algoritmo CalcularPrecioConDescuentoYIVA
    Definir precioOriginal, precioConDescuento, precioFinal, descuento, IVA Como Real
	
    Escribir "Ingrese el precio original del artículo: "
    Leer precioOriginal
	
    descuento <- precioOriginal * 0.20
    precioConDescuento <- precioOriginal - descuento
	
    IVA <- precioConDescuento * 0.15
    precioFinal <- precioConDescuento + IVA
	
    Escribir "El precio con descuento es: $", precioConDescuento
    Escribir "El precio final con IVA es: $", precioFinal
FinAlgoritmo

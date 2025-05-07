valores = []
for i in range(10):
    valor = int(input(f"Ingrese el valor {i+1}: "))
    valores.append(valor)
    suma = sum(valores)
    promedio = suma / len(valores)
print(f"La suma de los valores es: {suma}")
print(f"El promedio de los valores es: {promedio}")
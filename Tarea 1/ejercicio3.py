import random

sucursales = [f"Sucursal {i+1}" for i in range(25)]
ventas = [random.randint(10000, 50000) for _ in range(25)]

prom = sum(ventas) / len(ventas)

sucursalessp = []
for i in range(25):
    if ventas[i] > prom:
        sucursalessp.append((sucursales[i], ventas[i]))

print(f"Promedio de ventas: {prom:.2f}")
print("\nSucursales con ventas mayores al promedio:")
for sucursal, venta in sucursalessp:
    print(f"{sucursal}: {venta}") 
import random

pares = 0
impares = 0

for i in range(500):
    numero = random.randint(50, 100)
    if numero % 2 == 0:
        pares += 1
    else:
        impares += 1

print(f"Cantidad de números pares: {pares}")
print(f"Cantidad de números impares: {impares}") 
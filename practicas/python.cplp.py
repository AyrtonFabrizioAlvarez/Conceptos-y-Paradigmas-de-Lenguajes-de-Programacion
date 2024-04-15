def sum(a:int, b:int) -> int:
    return (a + b)

a = int(input('Ingresa un numero: '))
b = input('Ingresa otro numero: ') 

print(f'La suma de {a} y {b} es {sum(a, b)}') #Error de semantica dinámica
                                              #(se intenta hacer int +´string, se detecta en ejecucion)

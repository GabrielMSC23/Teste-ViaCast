from math import sqrt

def fibonacci(n: int) -> int:
    if n > 450:
        return 'Valor não suportado'
    else:
        return (((1 + sqrt(5)) ** n) - ((1 - sqrt(5))) ** n) / (2**n * sqrt(5))



w = int(input('Digite o enesimo termo desejado:\n>>'))
w = fibonacci(w)
print(w)

from math import sqrt  #importa a biblioteca com a função matemática de raiz quadrada


def fibonacci(n: int) -> int:
    if n > 450:  # limite máximo predefinido para posição na sequencia fibonacci
        return "Valor não suportado"
    else:
        return (((1 + sqrt(5)) ** n) - ((1 - sqrt(5))) ** n) / (
            2**n * sqrt(5)
        )  # retorna eneximo numero com base na formula matemática


w = int(input("Digite o enesimo termo desejado:\n>>"))
w = fibonacci(w)
print(int(w))

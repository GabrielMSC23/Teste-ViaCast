from math import *  # importa a biblioteca com funçoes matemáticas


class Rectangle:  # funções para calcular area e perimetro do retangulo
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def perimeter(self):
        return (self.width + self.height) * 2

    def area(self):
        return self.width * self.height


class IsoscelesTriangle:  # funções para calcular area e perimetro do triangulo isoceles
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def perimeter(self):
        side = sqrt(pow(self.height, 2) + pow((self.base / 2), 2))
        return (2 * side) + self.base

    def area(self):
        return self.base * self.height / 2


class Circle:  # funções para calcular area e perimetro do circulo
    def __init__(self, radius):
        self.radius = radius

    def perimeter(self):
        return 2 * pi * self.radius

    def area(self):
        return pi * pow(self.radius, 2)


# Chama as funçoes da classe Retângulo
width, height = map(float, input("Enter the width and height for the rectangle (<width>,<height>):\n>>").split(","),)
rectangle = Rectangle(width, height)
print(f"Area: {rectangle.area()}\nPerimeter: {rectangle.perimeter()}")

# Chama as funçoes da classe Triângulo Isoceles
base, height = map(float, input("Enter the base and height for the isosceles triangle (<base>,<height>):\n>>").split(","),)
triangle = IsoscelesTriangle(base, height)
print(f"Area: {triangle.area()}\nPerimeter: {round(triangle.perimeter(), 1)}")

# Chama as funçoes da classe Circulo
radius = float(input("Enter the radius for the circle:\n>>"))
circle = Circle(radius)
print(f"Area: {round(circle.area(), 1)}\nPerimeter: {round(circle.perimeter(), 1)}")

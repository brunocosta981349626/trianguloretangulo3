#include <iostream>
#include "TrianguloRetangulo.h"


int main() {

    struct tTriangulo t;
    t.catetoOposto = 4;
    t.catetoAdjacente = 8;

    std::cout << "Perimetro: " << t.Perimetro() << "\n";
    std::cout << "Area: " << t.Area() << "\n";
    std::cout << "Hipotenusa: " << t.Hipotenusa() << "\n";
}
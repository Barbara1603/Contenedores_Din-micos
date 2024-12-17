//
// Created by barba on 17/12/2024.
//
//
// Created by barba on 17/12/2024.
//

//
// Created by barba on 17/12/2024.
//

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>
#include <boost/lexical_cast.hpp>

int main() {

    //EJERCICIO 1

    // Declarar un vector de enteros
    std::vector<int> numeros;

    // Añadir elementos al vector usando push_back
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // Usar un iterador para recorrer y mostrar cada elemento
    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl; // Mostrar el valor apuntado por el iterador
    }


    //EJERCICIO 2
    // Crear una lista de números decimales
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Crear una pila (stack) usando la lista como contenedor subyacente
    std::stack<float, std::list<float>> pila(lista);

    // Mostrar los elementos de la pila usando operaciones push, pop y top
    std::cout << "Elementos en la pila:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl; // Mostrar el tope
        pila.pop(); // Eliminar el tope
    }


    //EJERCICIO 3
    // Vector de enteros no ordenados
    numeros = {50, 20, 60, 10, 30, 40};

    // Mostrar el vector antes de ordenarlo
    std::cout << "Vector original: ";
    for (int num : numeros) std::cout << num << " ";
    std::cout << std::endl;

    // Ordenar el vector usando std::sort
    std::sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado: ";
    for (int num : numeros) std::cout << num << " ";
    std::cout << std::endl;

    // Encontrar el elemento máximo usando std::max_element
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

    //EJERCICIO 4

    // Crear un valarray de números decimales
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Operaciones matemáticas
    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    // Añadir 5.0 a cada elemento
    valores += 5.0;
    std::cout << "Valores + 5.0: ";
    for (double valor : valores) std::cout << valor << " ";
    std::cout << std::endl;

    // Multiplicar cada elemento por 2
    valores *= 2.0;
    std::cout << "Valores * 2.0: ";
    for (double valor : valores) std::cout << valor << " ";
    std::cout << std::endl;

    //EJERCICIO 5

    // Lambda para calcular el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Vector y bucle for_each con lambda
    std::cout << "Elementos del vector:" << std::endl;
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    // Uso de punteros inteligentes (shared_ptr)
    auto ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

    //EJERCICIO 6
        // Cadena de caracteres
        std::string s = "12345";

        try {
            // Convertir cadena a número entero
            int numero = boost::lexical_cast<int>(s);
            std::cout << "Número convertido: " << numero << std::endl;
        } catch (boost::bad_lexical_cast &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }


    return 0;
}
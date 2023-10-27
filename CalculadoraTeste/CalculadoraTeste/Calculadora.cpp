#include "Calculos.h"
#include <iostream>

int main() {
	float Numero1, Numero2;
	char Operador, opcao;

	std::cout << "//////BEM-VINDO A CALCULADORA//////\n";


	do {

		std::cout << "\nEscolha um numero: ";
		std::cin >> Numero1;
		std::cout << "\nEscolha outro numero: ";
		std::cin >> Numero2;
		std::cout << "\nEscolha um operador: ";
		std::cin >> Operador;
		std::cout << "\nA resposta e: " << Calculo(Numero1, Numero2, Operador);

		MostrarTexto();

		std::cin >> opcao;

	} while (opcao != '2');

	system("PAUSE");
}
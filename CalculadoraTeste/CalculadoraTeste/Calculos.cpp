#include "Calculos.h"
#include <iostream>

int Calculo(float Num1, float Num2, char Op) {
	switch (Op) {
	case '+': return Num1 + Num2;
		break;
	case '-': return Num1 - Num2;
		break;
	case '*': return Num1 * Num2;
		break;
	case '/': return Num1 / Num2;
		break;
	default: std::cout << "\nInsira um valor valido!";
		break;
	}
}

void MostrarTexto() {
	std::cout << "\n///Escolha Uma Opcao!///" << std::endl;
	std::cout << "\n1 - Quero fazer um calculo";
	std::cout << "\n2 - Quero sair" << std::endl;
}

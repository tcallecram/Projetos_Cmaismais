#include <iostream>
#include "Matematica.h"


char EscolherConta() {
	char Escolha;
	std::cout << "\n***Bem-vindo(a) a Calculadora***";

	std::cout << "\nEscolha uma opcao: ";
	std::cout << "\n+ -> Soma; \n- -> Subtracao; \n* -> Multiplicacao; \n/ -> Divisao; \np -> Potencia; \nr -> Raiz;";
	std::cin >> Escolha;
	return Escolha;
}

int EscolherNumero() {
	int Num1, Num2;
	std::cout << "Escolha um numero: ";
	std::cin >> Num1;
	std::cout << "Escolha outro numero: ";
	std::cin >> Num2;
	return Num1, Num2;
}

int ReceberNum(char Escolha, int Num1, int Num2) {
	switch (Escolha)
	{
	case '+': return Num1 + Num2;
		break;
	case '-': return Num1 - Num2;
		break;
	case '*': return Num1 * Num2;
		break;
	case '/': return Num1 / Num2;
		break;
	case 'p': return Num1 ^ Num2;
		break;
	case 'r': return sqrt(Num1), sqrt(Num2);
		break;
	default: std::cout << "\nOpcao Invalida.";
		break;
	}
}
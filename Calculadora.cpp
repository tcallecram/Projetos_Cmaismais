#include <iostream>
using namespace std;

int main() {
	double Num1, Num2;
	char Conta;

	cout << "Insira o primeiro numero: ";
	cin >> Num1, "\n";
	cout << "Insira o segundo numero: ";
	cin >> Num2, "\n";
	cout << "Escolha o operador: \n + \n - \n * \n / \n";
	cin >> Conta, "\n";

	switch (Conta)
	{
	case '+': cout << Num1 << " + " << Num2 << " = " << Num1 + Num2;
			break;
	case '-': cout << Num1 << " - " <<  Num2 << " = " << Num1 - Num2;
			break;
	case '*': cout << Num1 << " * " << Num2 << " = " << Num1 * Num2;
			break;
	case '/': cout << Num1 << " / " << Num2 << " = " << Num1 / Num2;
			break;
	}




	
}

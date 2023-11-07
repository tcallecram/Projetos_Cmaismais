#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	int Numero{ 234 };
	int* Ponteiro;
	void* Outroptr;

	Ponteiro = &Numero;

	std::cout << "Valor inicial de Numero, via Ponteiro: " << *Ponteiro;
	*Ponteiro = 1456;

	std::cout << "\nValor de Numero, via Ponteiro: " << *Ponteiro;

	std::cout << "\nValor do endere�o de Ponteiro: " << &Ponteiro << "\nValor do endere�o de Numero: " << Ponteiro;

	Outroptr = Ponteiro;

	*Ponteiro += 200;

	std::cout << "\nValor de Numero, via Outroptr: " << *(int*)Outroptr << "\n";

	system("PAUSE");
	return 0;


}
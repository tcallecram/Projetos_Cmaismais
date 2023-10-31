#include <iostream>

void Carrinho(int Meia, int Inteira){
	std::cout << "*** BEM-VINDO AO CARRINHO ***" << std::endl;
	std::cout << "\nMEIA ENTRADA		" << Meia << " " << "TOTAL:		R$" << Meia * 10.50;
	std::cout << "\nENTRADA INTEIRA		" << Inteira << " " << "TOTAL:		R$" << Inteira * 21;
	std::cout << "\nMEIA ENTRADA		" << Meia << " " << "TOTAL:		R$" << Meia * 10.50;
	std::cout << "\n----------------------------------------------------";
	std::cout << "\nVALOR TOTAL:		" << "TOTAL:		R$" << (Meia * 10.50) + (Inteira * 21) << "\n";
}

void Menu() {
	std::cout << "*** MENU DE OPÇÕES ***" << std::endl;
	std::cout << "\nSelecione [1] para COMPRAR 01				MEIA ENTRADA	(+R$ 10,50)";
	std::cout << "\nSelecione [2] para COMPRAR 01				ENTRADA INTEIRA	(+R$ 21,00)";
	std::cout << "\nSelecione [3] para RETIRAR 01				MEIA ENTRADA	(-R$ 10,50)";
	std::cout << "\nSelecione [4] para RETIRAR 01				ENTRADA INTEIRA	(-R$ 21,00)";
	std::cout << "\nSelecione [5] para ZERAR o carrinho";
	std::cout << "\nSelecione [6] para MOSTRAR o carrinho";
	std::cout << "\nSelecione [7] para SAIR" << std::endl;
	std::cout << "\nEntre com o número escolhido: ";

}


int main() {
	setlocale(LC_ALL, "portuguese");
	int Meia=0, Inteira=0;
	char Opcao;
	float Total=0;

	std::cout << "*** BEM-VINDO AO CINEMASK ***" << std::endl;

	do{
		system("CLS");
		Menu();
		std::cin >> Opcao;

		switch (Opcao) {
		case '1':  Meia++;
			break;
		case '2':  Inteira++;
			break;
		case '3':  Meia--;
			break;
		case '4':  Inteira--;
			break;
		case '5':  Meia = 0;
				   Inteira = 0;
					   std::cout << "\nCARRINHO ZERADO!" << "\n";
			break;
		case '6': Carrinho(Meia, Inteira);
			break;
		case '7': std::cout << "\n*** OBRIGADO PELA PREFERÊNCIA ***\n";
			break;
		default: std::cout << "\nNúmero INVÁLIDO! Escolha novamente.\n";
		}
		system("PAUSE");
		
	} while (Opcao != '7');

	
	return 0;

	
}



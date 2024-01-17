#include <iostream>
#include <string>
#include <vector>


struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	/*criar um vetor(array) de structs cada indice do vetor tera dentro dele uma struct do tipo livro. Assim, pra ler ou escrever dados nesta struct usamos NomeDaVariavelStruct[indice].campodesejado
		ex: livro[3].Titulo = "Alice";
	*/
	struct Livro livro[5];
	int Qtde;



	std::cout << "***Cadastro de Livro***" << "\n";

	std::cout << "Quantos livros voce ira cadastrar? " << "\n";
	std::cin >> Qtde;


	for (int i = 0; i < Qtde; i++)
	{
		std::cout << "\nCadastro do Livro " << i + 1 << ":\n";

		std::cout << "Digite ID do Livro: ";
		std::cin >> livro[i].ID;

		std::cout << "Digite o Titulo do Livro: ";
		std::cin >> livro[i].Titulo;

		std::cout << "Digite o Autor do Livro: ";
		std::cin >> livro[i].Autor;

		std::cout << "Digite a Editora do Livro: ";
		std::cin >> livro[i].Editora;

		system("CLS");
	}


	std::cout << "-----------------------------------------";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Informacoes do Livro " << i + 1 << ":\n";
		std::cout << "ID: " << livro[i].ID << "\n";
		std::cout << "Titulo: " << livro[i].Titulo << "\n";
		std::cout << "Autor: " << livro[i].Autor << "\n";
		std::cout << "Editora: " << livro[i].Editora << "\n";
		std::cout << "-----------------------------------------";

	}

	int verify=0;

	do
	{
		int n;
		int simounao;

		std::cout << "\n***********TESTE************\n";
		std::cout << "Qual livro voce deseja ver as infos?";
		std::cin >> n;

		Livro livroEscolhido = livro[n-1];
		std::cout << "Informacoes do Livro " << n << ":\n";
		std::cout << "ID: " << livro[n - 1].ID << "\n";
		std::cout << "Titulo: " << livro[n - 1].Titulo << "\n";
		std::cout << "Autor: " << livro[n - 1].Autor << "\n";
		std::cout << "Editora: " << livro[n - 1].Editora << "\n";
		std::cout << "-----------------------------------------";

		std::cout << "\nDeseja ver mais algum? 1- sim, 0- nao ";
		std::cin >> simounao;
		if (simounao == 0)
		{
			verify = 1;
		}

		
	} while (verify != 1);

	system("PAUSE");
	return 0;
}
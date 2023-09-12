using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exLista1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int opcao;

            Console.WriteLine("--------------------------------------");
            Console.WriteLine("| Bem-vindo(a) à biblioteca legaus!! |");
            Console.WriteLine("--------------------------------------");

            do
            {
                Console.WriteLine("--------------------------------------");
                Console.WriteLine("| 0. Sair                            |");
                Console.WriteLine("| 1. Adicionar livro                 |");
                Console.WriteLine("| 2. Pesquisar livro (sintético)*    |");
                Console.WriteLine("| 3. Pesquisar livro (analítico)**   |");
                Console.WriteLine("| 4. Adicionar exemplar              |");
                Console.WriteLine("| 4. Adicionar exemplar              |");
                Console.WriteLine("| 5. Registrar empréstimo            |");
                Console.WriteLine("| 6. Registrar devolução             |");
                Console.WriteLine("--------------------------------------");
                Console.WriteLine(" ");
                Console.WriteLine("Escolha uma opção: ");
                opcao = Convert.ToInt32(Console.ReadLine());

                switch(opcao)
                {
                    case 1:
                        break;
                    
                    case 2:
                        break;

                    case 3:
                        break;

                    case 4:
                        break;

                    case 5:
                        break;

                    case 6:
                        break;

                    default: Console.WriteLine("Opção inválida! Escolha novamente.");
                        break;

                }

            }
            while (opcao != 0);

        }
    }
}
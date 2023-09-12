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
            Console.BackgroundColor = ConsoleColor.White;
            Console.ForegroundColor = ConsoleColor.Black;
            Console.Clear();

            List<int> listaInteiros;
            listaInteiros = new List<int>();

            listaInteiros.Add(11);
            listaInteiros.Add(22);
            listaInteiros.Add(33);
            mostraLista(listaInteiros);

            Console.WriteLine("2º elemento: {0}", listaInteiros[1]);
            Console.WriteLine("Posição do 22: {0}", listaInteiros.IndexOf(22));

            listaInteiros.Insert(1, 77);
            listaInteiros.Add(22);
            listaInteiros.Add(44);
            mostraLista(listaInteiros);
            Console.WriteLine("Posição do 22: {0}", listaInteiros.IndexOf(22));
            Console.WriteLine("Última posição do 22: {0}", listaInteiros.LastIndexOf(22));
            Console.WriteLine("Posição do 99: {0}", listaInteiros.IndexOf(99));

            Console.WriteLine((listaInteiros.Remove(33)) ? "Removeu" : "Não removeu");
            Console.WriteLine((listaInteiros.Remove(99)) ? "Removeu" : "Não removeu");
            mostraLista(listaInteiros);

            listaInteiros.RemoveAt(0);
            mostraLista(listaInteiros);
        }

        static void mostraLista(List<int> lista)
        {
            Console.WriteLine("Qtde de elementos na lista: {0}", lista.Count);
            Console.WriteLine("-------------------------------");
            foreach (int l in lista)
            {
                Console.WriteLine(l);
            }
            Console.WriteLine("-------------------------------");
        }



    }
}

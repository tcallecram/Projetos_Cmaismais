using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exLista2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<Coisa> listaCoisas;
            listaCoisas = new List<Coisa>();

            listaCoisas.Add(new Coisa(1, "UM"));
            listaCoisas.Add(new Coisa(2, "DOIS"));
            listaCoisas.Add(new Coisa(3, "TRÊS"));
            mostraLista(listaCoisas);

            Coisa coisinha = new Coisa(4, "QUATRO");
            listaCoisas.Insert(2, coisinha);
            mostraLista(listaCoisas);

            int i = listaCoisas.IndexOf(new Coisa(3));
            Console.WriteLine(listaCoisas[i].Y);

            listaCoisas[listaCoisas.IndexOf(new Coisa(3))].Y = "NONONO";


            Console.WriteLine((listaCoisas.Remove(new Coisa(4)) ? "Removeu" : "Não removeu"));
            Console.WriteLine((listaCoisas.Remove(new Coisa(40)) ? "Removeu" : "Não removeu"));
            mostraLista(listaCoisas);


        }

        static void mostraLista(List<Coisa> lista)
        {
            Console.WriteLine("Qtde de elementos: {0}", lista.Count);
            Console.WriteLine("---------------------------");
            foreach (Coisa c in lista)
            {
                Console.WriteLine(c.ToString());
            }
            Console.WriteLine("---------------------------");

        }
    }
}

using System;
using System.Collections.Generic;

public class Item
{
    public string Nome { get; set; }
    public int Id { get; set; }
    public double VlrDiario { get; set; }
    public bool Avaria { get; set; }

    public Item(string nome, int id, double vlrDiario)
    {
        Nome = nome;
        Id = id;
        VlrDiario = vlrDiario;
        Avaria = false;
    }
}

public class Tipo_item
{
    public int Id { get; set; }
    public string Nome { get; set; }
    public List<Item> Itens { get; set; }

    public Tipo_item(int id)
    {
        Id = id;
        Itens = new List<Item>();
    }

    public Tipo_item(string nome, int id)
    {
        Nome = nome;
        Id = id;
        Itens = new List<Item>();
    }
}

public class Itens_contrato
{
    public Tipo_item ItemContrato { get; set; }
    public int Qtd { get; set; }

    public Itens_contrato(Tipo_item itemContrato, int qtd)
    {
        ItemContrato = itemContrato;
        Qtd = qtd;
    }
}

public class Contrato
{
    public int Id { get; set; }
    public DateTime AgendamentoSaida { get; set; }
    public DateTime AgendamentoRetorno { get; set; }
    public List<Itens_contrato> ListaContrato { get; set; }
    public bool Liberado { get; set; }

    public Contrato(int id, DateTime saida, DateTime retorno, List<Itens_contrato> itensContrato)
    {
        Id = id;
        AgendamentoSaida = saida;
        AgendamentoRetorno = retorno;
        ListaContrato = itensContrato;
        Liberado = false;
    }
}

public class Estoque
{
    public int Id { get; set; }
    public Tipo_item TipoItem { get; set; }
    public Stack<Item> Retorno { get; set; }

    public Estoque(int id, Tipo_item tipoItem)
    {
        Id = id;
        TipoItem = tipoItem;
        Retorno = new Stack<Item>();
    }
}

public class Locacao
{
    private List<Estoque> estoques;
    private List<Contrato> contratos;

    public Locacao()
    {
        estoques = new List<Estoque>();
        contratos = new List<Contrato>();
    }

    public void CadastraTipoEquipamento(string nome, int id)
    {
        Tipo_item novoTipo = new Tipo_item(nome, id);
        estoques.Add(new Estoque(id, novoTipo));
    }

    public string ConsultaTipoEquipamento()
    {
        // Implemente a lógica para consultar e retornar informações sobre os tipos de equipamentos.
        return "ConsultaTipoEquipamento: Implementação em andamento";
    }

    // Adicione os demais métodos conforme necessário

    public void ImprimirInformacoes()
    {
        // Método para imprimir informações sobre estoques, contratos, etc.
        Console.WriteLine("Informações sobre Estoque:");

        foreach (var estoque in estoques)
        {
            Console.WriteLine($"ID: {estoque.Id}, Tipo: {estoque.TipoItem.Nome}");
        }

        Console.WriteLine("\nInformações sobre Contratos:");

        foreach (var contrato in contratos)
        {
            Console.WriteLine($"ID: {contrato.Id}, Liberado: {contrato.Liberado}");
        }
    }
}

class Program
{
    static void Main()
    {
        Locacao locacao = new Locacao();

        // Exemplo de chamada de método:
        locacao.CadastraTipoEquipamento("Computador", 1);
        locacao.CadastraTipoEquipamento("Impressora", 2);

        locacao.ImprimirInformacoes();
    }
}

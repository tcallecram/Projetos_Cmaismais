namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        private List<Telefone> telefones;
        private BindingSource bs;

        public Form1()
        {
            InitializeComponent();
            telefones = new List<Telefone>();
            telefones.Add(new Telefone("Móvel","1391111111", true));
            telefones.Add(new Telefone("Residencial", "1332222222", false));
            telefones.Add(new Telefone("Comercial", "1324444444", false));
            atualizaTelefones();
            
        }

        private void atualizaTelefones()
        {
            bs = new BindingSource();
            bs.DataSource = telefones;
            dataGridView1.DataSource = bs;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            telefones.Add(new Telefone("Outro", "1348887777", false));
            atualizaTelefones();
        }

        private void dataGridView1_DoubleClick(object sender, EventArgs e)
        {
            MessageBox.Show(this.telefones[bs.Position].ToString());
        }
    }
}
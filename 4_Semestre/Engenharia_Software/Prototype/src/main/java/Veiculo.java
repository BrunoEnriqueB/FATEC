public abstract class Veiculo implements Cloneable {
    private String nomeModelo, marca;
    private float preco;
    private int rodas;

    protected Veiculo(int rodas) {
        this.rodas = rodas;
    }

    public int getRodas() {
        return rodas;
    }

    public String getmarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getNomeModelo()
    {
        return nomeModelo;
    }

    public void setNomeModelo(String nomeModelo)
    {
        this.nomeModelo = nomeModelo;
    }

    public float getPreco() {
        return preco;
    }

    public void setPreco(float preco)
    {
        this.preco = preco;
    }

    public Veiculo clone() throws CloneNotSupportedException
    {
        return (Veiculo)super.clone();
    }

    @Override
    public String toString() {
        return "Veiculo{" +
                "nomeModelo='" + nomeModelo + '\'' +
                ", marca='" + marca + '\'' +
                ", preco=" + preco +
                ", rodas=" + rodas +
                '}';
    }
}
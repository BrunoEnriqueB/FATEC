public class Carro extends Veiculo{

    public Carro() {
        super(4);
    }

    @Override
    public Veiculo clone() throws CloneNotSupportedException {
        return (Carro)super.clone();
    }
}

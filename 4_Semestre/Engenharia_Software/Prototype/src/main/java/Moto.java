public class Moto extends Veiculo {

    public Moto() {
        super(2);
    }

    @Override
    public Veiculo clone() throws CloneNotSupportedException {
        return (Moto)super.clone();
    }
}

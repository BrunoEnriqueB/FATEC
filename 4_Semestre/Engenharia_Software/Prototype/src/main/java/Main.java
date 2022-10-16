public class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
        Moto bmw = new Moto();
        bmw.setMarca("BMW");

        Moto g310GS = (Moto) bmw.clone();
        g310GS.setNomeModelo("g310GS");
        g310GS.setPreco(30000);
        System.out.println(g310GS);

        Carro fiat = new Carro();
        fiat.setMarca("Fiat");

        Carro uno = (Carro) fiat.clone();
        uno.setNomeModelo("Uno");
        uno.setPreco(35000);
        System.out.println(uno);
    }
}

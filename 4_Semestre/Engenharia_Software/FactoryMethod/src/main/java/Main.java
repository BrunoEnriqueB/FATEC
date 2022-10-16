public class Main {
    public static void main(String[] args) {
        Work medico = WorkFactory.getWork("medico");
        medico.description();

        Work advogado = WorkFactory.getWork("advogado");
        advogado.description();

        Work programador = WorkFactory.getWork("programador");
        programador.description();
    }

}

public class Main {
    public static void main(String[] args) {
        User maria = new User.
                UserBuilder("Maria", "De Souza")
                .idade(18)
                .telefone("19998125933")
                .endereco("FATEC São Caetano")
                .build();
        User joao = new User.UserBuilder("Joao", "Chaves")
                .idade(20)
                .build();
    }
}
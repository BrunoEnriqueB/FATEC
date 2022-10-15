public class User
{
    private String primeiroNome; // required
    private String segundoNome; // required
    private int idade; // optional
    private String telefone; // optional
    private String endereco; // optional

    public User(String primeiroNome, String segundoNome, int idade, String telefone, String endereco) {
        this.primeiroNome = primeiroNome;
        this.segundoNome = segundoNome;
        this.idade = idade;
        this.telefone = telefone;
        this.endereco = endereco;
    }

    public User(String primeiroNome, String segundoNome, int idade, String telefone) {
        this.primeiroNome = primeiroNome;
        this.segundoNome = segundoNome;
        this.idade = idade;
        this.telefone = telefone;
    }

    public User(String primeiroNome, String segundoNome, int idade) {
        this.primeiroNome = primeiroNome;
        this.segundoNome = segundoNome;
        this.idade = idade;
    }

    public User(String primeiroNome, String segundoNome) {
        this.primeiroNome = primeiroNome;
        this.segundoNome = segundoNome;
    }

    public String getPrimeiroNome() {
        return primeiroNome;
    }
    public String getUltimoNome() {
        return segundoNome;
    }
    public int getIdade() { return idade; }
    public String getTelefone() {
        return telefone;
    }
    public String getEndereco() {
        return endereco;
    }


    @Override
    public String toString() {
        return "User{" +
                "primeiro Nome='" + primeiroNome + '\'' +
                ", segundo Nome='" + segundoNome + '\'' +
                ", idade=" + idade +
                ", telefone='" + telefone + '\'' +
                ", endereco='" + endereco + '\'' +
                '}';
    }
}
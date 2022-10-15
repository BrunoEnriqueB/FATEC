    public class User
    {
        private final String primeiroNome; // required
        private final String segundoNome; // required
        private final int idade; // optional
        private final String telefone; // optional
        private final String endereco; // optional

        private User(UserBuilder builder) {
            this.primeiroNome = builder.primeiroNome;
            this.segundoNome = builder.segundoNome;
            this.idade = builder.idade;
            this.telefone = builder.telefone;
            this.endereco = builder.endereco;
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

        public static class UserBuilder
        {
            private final String primeiroNome;
            private final String segundoNome;
            private int idade;
            private String telefone;
            private String endereco;

            public UserBuilder(String primeiroNome, String segundoNome) {
                this.primeiroNome = primeiroNome;
                this.segundoNome = segundoNome;
            }
            public UserBuilder idade(int idade) {
                this.idade = idade;
                return this;
            }
            public UserBuilder telefone(String telefone) {
                this.telefone = telefone;
                return this;
            }
            public UserBuilder endereco(String endereco) {
                this.endereco = endereco;
                return this;
            }

            public User build() {
                User user =  new User(this);
                return user;
            }
        }
    }
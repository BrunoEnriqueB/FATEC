interface Work {
    void description();
}

public class WorkFactory {
    private String trabalho;

    public static Work getWork(String trabalho) {
        switch (trabalho) {
            case "medico":
                return new Medico();
            case "advogado":
                return new Advogado();
            case "programador":
                return new Programador();
            default:
                return null;
        }
    }
}

class Medico implements Work {
    @Override
    public void description() {
        System.out.println("Eu ajudo a salvar vidas");
    }
}

class Programador implements Work {
    @Override
    public void description() {
        System.out.println("Eu ajudo a criar bugs");
    }
}

class Advogado implements Work {
    @Override
    public void description() {
        System.out.println("Eu ajudo a defender pessoas");
    }
}




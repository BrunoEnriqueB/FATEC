public interface Form {
    void enviarForm();
}

class FormWindows implements Form {
    public void enviarForm() {
        System.out.println("Iniciando form windows...");
    }
}

class FormLinux implements Form {
    public void enviarForm() {
        System.out.println("Iniciando form linux...");
    }
}

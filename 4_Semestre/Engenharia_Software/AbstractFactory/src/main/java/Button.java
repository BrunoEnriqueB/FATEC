public interface Button {
    void clicar();
}

class ButtonWindows implements Button {
    public void clicar() {
        System.out.println("Clicando no botão do windows...");
    }
}

class ButtonLinux implements Button {
    public void clicar() {
        System.out.println("Clicando no botão do linux...");
    }
}

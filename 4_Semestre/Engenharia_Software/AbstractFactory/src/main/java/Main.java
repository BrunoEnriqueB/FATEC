public class Main {
    public static void main(String[] args) {
        AbstractFactory windowsFactory = new AbstractFactory("windows");
        UIElementFactory windows = windowsFactory.getElementFactory();
        ButtonWindows windowsButton = (ButtonWindows) windows.createButton();
        FormWindows windowsForms = (FormWindows) windows.createForm();
        windowsButton.clicar();
        windowsForms.enviarForm();

        AbstractFactory linuxFactory = new AbstractFactory("linux");
        UIElementFactory linux = linuxFactory.getElementFactory();
        ButtonLinux linuxButton = (ButtonLinux) linux.createButton();
        FormLinux linuxForm = (FormLinux) linux.createForm();
        linuxButton.clicar();
        linuxForm.enviarForm();
    }
}

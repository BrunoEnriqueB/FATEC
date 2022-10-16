public interface UIElementFactory {
    Button createButton();
    Form createForm();
}

class UIElementFactoryWindows implements UIElementFactory {
    public Button createButton() {
        return new ButtonWindows();
    }

    public Form createForm() {
        return new FormWindows();
    }
}

class UIElementFactoryLinux implements UIElementFactory {
    public Button createButton() {
        return new ButtonLinux();
    }

    public Form createForm() {
        return new FormLinux();
    }
}

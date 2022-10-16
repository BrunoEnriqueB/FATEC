public class AbstractFactory {
    private String operationalSystem;

    public AbstractFactory(String operationalSystem) {
        this.operationalSystem = operationalSystem;
    }

    public  UIElementFactory getElementFactory() {
        if(operationalSystem == "windows") {
            return new UIElementFactoryWindows();
        } else if (operationalSystem == "linux") {
            return new UIElementFactoryLinux();
        } else {
            return null;
        }
    }
}

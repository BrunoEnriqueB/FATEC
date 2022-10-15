public class Singleton {
    private static Singleton singleton_instance = null;

    public static Singleton getInstance() {
        if(singleton_instance == null) {
            singleton_instance = new Singleton();
        }

        return singleton_instance;
    }
}


package ph.edu.dlsu;

public class Hello {

    static {
        System.loadLibrary("nativetest");
    }

    public static void main(String[] args) {
        Hello hello = new Hello();
        hello.helloFromC();
    }

    native void helloFromC();
}
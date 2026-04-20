package Recursion;

public class Greet {
    static void main(String[] args) {
        greet();
    }
    static void greet(){
        System.out.println("Nameste");
        greet1();
    }
    static void greet1(){
        System.out.println("hi");
        greet2();
    }
    static void greet2(){
        System.out.println("hellow");
        greet3();
    }
    static void greet3(){
        System.out.println("hey");
    }

}

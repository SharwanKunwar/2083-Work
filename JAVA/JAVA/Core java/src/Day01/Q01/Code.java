package Day01.Q01;


interface Flyable {
    void fly();
}

interface Swimmable {
    void swim();
}

abstract class Animal implements Flyable, Swimmable {
    abstract void sound();
    void breathe() {
        System.out.println("Breathing...");
    }
}

class Duck extends Animal {
    public void fly()   { System.out.println("Duck flying!"); }
    public void swim()  { System.out.println("Duck swimming!"); }
    public void sound() { System.out.println("Quack!"); }
}

public class Code {
    static void main(String[] args) {
        Duck d =new  Duck();
        d.fly();
        d.swim();
        d.breathe();
    }
}

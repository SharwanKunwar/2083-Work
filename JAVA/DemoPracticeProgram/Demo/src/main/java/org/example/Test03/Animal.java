package org.example.Test03;

public class Animal {

    public void sound(){
        System.out.println("Animal make sound");
    }
}

class Dog extends Animal {

    @Override
    public void sound(){
        System.out.println("Dog make sound");
    }
}

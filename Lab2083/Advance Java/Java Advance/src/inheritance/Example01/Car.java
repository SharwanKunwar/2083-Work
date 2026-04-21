package inheritance.Example01;

public class Car {
    String name;
    String modal;
    String color;
    final private int speed = 150;
    int price;


    public Car(String name, String modal, String color, int price){
        this.name = name;
        this.modal = modal;
        this.color = color;
        this.price = price;
    }

    public int getSpeed(){
        return speed;
    }

    public void start(){
        System.out.println("The car is starting");
    }

    public void openDoor(){
        System.out.println("Doors are open");
    }

    public void drive(int speed) throws Exception{
        if(speed <= this.speed){
            System.out.println("Car driving at "+speed+"km/s");
        }else {
            throw new Exception("Error : overSpeed");
        }
    }
}

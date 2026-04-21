package inheritance.Example01;

public class SuperCar extends Car{

    int speed = 350;

    public SuperCar(String name, String modal, String color, int price) {
        super(name, modal, color, price);
    }


    @Override
    public void start(){
        System.out.println("The super car is starting");
    }

    @Override
    public int getSpeed() {
        return speed;
    }

    public void drive(int speed) throws Exception{
        if(speed <= this.speed){
            System.out.println("Car driving at "+speed+"km/s");
        }else {
            throw new Exception("Error : overSpeed");
        }
    }
}

package inheritance.Example01;

public class Code {
    static void main(String[] args) throws Exception {


        Car toyota = new Car("Supra", "MK4", "white",10_000_000);
        toyota.openDoor();
        System.out.println(toyota.getSpeed());
        toyota.start();
        try {
            toyota.drive(400);

        }catch (Exception e){
            System.out.println("Error : We got "+e.getMessage());
        }


        System.out.println("----------------------------------");
        SuperCar sup = new SuperCar("supra", "mk5", "black",10);
        sup.start();
        System.out.println(sup.getSpeed());
        try {
            sup.drive(350);
        }catch (Exception e){
            System.out.println("ERRR ro : "+e.getMessage());
        }


    }
}

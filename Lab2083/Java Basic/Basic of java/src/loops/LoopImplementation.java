package loops;

public class LoopImplementation extends TypesOfLoops{
    @Override
    public void forLoop(int num) {
        for(int i=1; i<=num; i++){
            System.out.print("* ");
        }
    }

    @Override
    public void whileLoop(int num) {
        int i=1;
        while (i++<=num){
            System.out.print("* ");
        }
    }
}

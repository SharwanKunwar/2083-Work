package Example02;

 public class pattern extends patterns{

     @Override
     void pattern01(int num) {
         for(int i=0; i<num; i++){
             for(int j=0; j<i; j++){
                 System.out.print("* ");
             }
             System.out.println();
         }
     }

     @Override
     void pattern02(int num) {
         for(int i=0; i<num; i++){
             //for space
             for(int space = 0; space<num-i+1; space++){
                 System.out.print("   ");
             }

             // for pattern
             for(int pattern = 0; pattern<2*i+1; pattern++){
                 System.out.print(" * ");
             }

             //for space
             for(int space = 0; space<num-i+1; space++){
                 System.out.print("  ");
             }

             System.out.println();
         }
     }
 }

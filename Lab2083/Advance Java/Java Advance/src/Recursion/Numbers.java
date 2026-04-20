package Recursion;

public class Numbers {
    static void main(String[] args) {
        printNum1(1);
    }
    static void printNum1(int num){
        System.out.println(num++);
        printNum2(num);
    }
    static void printNum2(int num){
        System.out.println(num++);
        printNum3(num);
    }
    static void printNum3(int num){
        System.out.println(num++);
        printNum4(num);
    }
    static void printNum4(int num){
        System.out.println(num++);
        printNum5(num);
    }
    static void printNum5(int num){
        System.out.println(num);
    }

}

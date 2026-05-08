package org.example.TestQ02;

public class Code {
    static void main(String[] args) {
        BankAccount b1 = new BankAccount();
        b1.balance = -5;
        b1.deposit(b1.balance);
        System.out.println(b1.balance);
        System.out.println("program end");
    }
}

package org.example.TestQ02;

public class BankAccount {
    private double balance = 0;

    //deposit
    public void deposit(double amount) {
        if(amount>0){
            balance += amount;
        }
    }

    // check balance
    public void checkBalance(){
        System.out.println("Your Total balance is : "+balance);
    }
}

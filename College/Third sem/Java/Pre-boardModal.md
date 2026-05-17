# Java BCA Board Exam Notes for 5 Marks
<br><br>

## Q: what is difference between procedural and object oriented programming ? write a java program to find largest number from given three number using conditional operator.

| Feature | Procedural Programming | Object-Oriented Programming |
|---|---|---|
| **Approach** | Top-down approach | Bottom-up approach |
| **Focus** | Functions/Procedures | Objects and Classes |
| **Data Security** | Less secure (data is global) | More secure (data is encapsulated) |
| **Reusability** | Less reusable | High reusability (inheritance) |
| **Examples** | C, Pascal, FORTRAN | Java, C++, Python |
| **Data & Function** | Separated | Combined in objects |
| **Maintenance** | Difficult for large programs | Easier to maintain |

---


### Program

```java
import java.util.Scanner;

public class LargestNumber {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Input three numbers
        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        System.out.print("Enter third number: ");
        int c = sc.nextInt();

        // Using conditional (ternary) operator
        int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        System.out.println("Largest number is: " + largest);
    }
}
```

### Output

```
Enter first number: 45
Enter second number: 78
Enter third number: 23
Largest number is: 78
```

### How the Conditional Operator Works

```
(a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)
   ↓
If a > b → compare a and c → return larger
If b > a → compare b and c → return larger
```

> **Conditional Operator Syntax:** `condition ? value_if_true : value_if_false`

---

<br><br><br>



## Q: what is inner class? write a java program using recursive method to find greatest common divisor of two numbers

---


**Definition:** An inner class is a class defined within another class. It can access all members (including private) of the outer class.

### Types of Inner Class:

| Type | Description |
|---|---|
| **Regular Inner Class** | Defined inside a class without static keyword |
| **Static Inner Class** | Defined with static keyword |
| **Local Inner Class** | Defined inside a method |
| **Anonymous Inner Class** | A class without a name |

### Example:

```java
class Outer {
    int x = 10;

    class Inner {
        void display() {
            System.out.println("Outer x = " + x); // accessing outer class member
        }
    }

    public static void main(String[] args) {
        Outer obj = new Outer();
        Outer.Inner in = obj.new Inner();
        in.display();
    }
}
```

### Output:

```
Outer x = 10
```

---

## Java Program: GCD Using Recursive Method

```java
import java.util.Scanner;

public class GCD {

    // Recursive method to find GCD
    static int findGCD(int a, int b) {
        if (b == 0)
            return a; // base case
        return findGCD(b, a % b); // recursive call
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        int result = findGCD(a, b);
        System.out.println("GCD of " + a + " and " + b + " is: " + result);
    }
}
```

### Output:

```
Enter first number: 12
Enter second number: 8
GCD of 12 and 8 is: 4
```

### How Recursion Works:

```
findGCD(12, 8)
→ findGCD(8, 4)
→ findGCD(4, 0)
→ returns 4 ✅
```

---

<br><br><br>


## Q: what is abstract class ? how will you implement multiple inheritance using interface? explain with program.


**Definition:** An abstract class is a class that cannot be instantiated (cannot create objects) and may contain abstract methods (methods without body) and non-abstract methods (methods with body). It is declared using the `abstract` keyword.

### Key Points:
- Cannot create object of abstract class
- Can have both abstract and non-abstract methods
- Must be inherited by a subclass
- Subclass must implement all abstract methods

### Example:

```java
abstract class Shape {
    abstract void draw();  // abstract method - no body

    void display() {       // non-abstract method - has body
        System.out.println("This is a shape");
    }
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing Circle");
    }
}

public class Main {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.draw();
        c.display();
    }
}
```



## Multiple Inheritance Using Interface

**Definition:** Java does not support multiple inheritance with classes (to avoid ambiguity), but it can be achieved using **interfaces**. An interface is a blueprint that contains only abstract methods. A class can implement multiple interfaces using the `implements` keyword.

### Why Interface for Multiple Inheritance?
- A class **cannot extend** more than one class
- But a class **can implement** multiple interfaces
- This way Java achieves multiple inheritance

---

## Program: Multiple Inheritance Using Interface

```java
// First interface
interface Father {
    void height();  // abstract method
}

// Second interface
interface Mother {
    void color();   // abstract method
}

// Child class implementing both interfaces
class Child implements Father, Mother {

    public void height() {
        System.out.println("Got height from Father: 6 feet");
    }

    public void color() {
        System.out.println("Got color from Mother: Fair");
    }

    void show() {
        System.out.println("Child has properties of both Father and Mother");
    }
}

public class Main {
    public static void main(String[] args) {
        Child obj = new Child();
        obj.height();
        obj.color();
        obj.show();
    }
}
```



### Diagram:

```
  Interface Father       Interface Mother
   + height()              + color()
        \                    /
         \                  /
          \                /
           class Child
        (implements both)
```

<br><br><br>


## Q: What is Deadlock? Write a Java program using two threads so that one thread prints even numbers and another thread prints odd numbers between 1 and 50.


**Definition:** Deadlock is a situation in multithreading where two or more threads are blocked forever, waiting for each other to release resources. None of the threads can proceed because each is waiting for the other.

### Key Points:
- Occurs in multithreading environment
- Two threads hold a resource and wait for each other
- Program gets stuck (no progress)
- Deadlock has 4 necessary conditions:

| Condition | Description |
|---|---|
| **Mutual Exclusion** | Only one thread can use a resource at a time |
| **Hold and Wait** | Thread holds a resource and waits for another |
| **No Preemption** | Resource cannot be forcefully taken from a thread |
| **Circular Wait** | Thread A waits for Thread B, Thread B waits for Thread A |

### Deadlock Example (Illustration):

```
Thread 1 holds Lock A → waiting for Lock B
Thread 2 holds Lock B → waiting for Lock A
         ↓
      DEADLOCK! ❌
```

---

## Java Program: Two Threads Printing Even and Odd Numbers (1 to 50)

```java
class EvenOddPrinter {
    private int number = 1;       // starting number
    private final int MAX = 50;   // maximum limit

    // Method to print odd numbers
    public synchronized void printOdd() {
        while (number <= MAX) {
            if (number % 2 == 0) {  // if even, wait
                try {
                    wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            } else {
                System.out.println("Odd  Thread: " + number);
                number++;
                notify(); // notify even thread
            }
        }
    }

    // Method to print even numbers
    public synchronized void printEven() {
        while (number <= MAX) {
            if (number % 2 != 0) { // if odd, wait
                try {
                    wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            } else {
                System.out.println("Even Thread: " + number);
                number++;
                notify(); // notify odd thread
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {

        EvenOddPrinter printer = new EvenOddPrinter();

        // Thread 1 - prints odd numbers
        Thread t1 = new Thread(() -> printer.printOdd());

        // Thread 2 - prints even numbers
        Thread t2 = new Thread(() -> printer.printEven());

        t1.start();
        t2.start();
    }
}
```

<br><br><br>


## Q: Write a simple Java program that reads data from one file and writes data to another file using character stream class.


**Definition:** Character streams are used to perform input and output operations on characters (text data). They handle 16-bit Unicode characters. Main classes are `FileReader` and `FileWriter`.

---

## Java Program: Read from One File and Write to Another File

```java
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileCopy {
    public static void main(String[] args) {

        FileReader fr = null;
        FileWriter fw = null;

        try {
            // Open source file for reading
            fr = new FileReader("source.txt");

            // Open destination file for writing
            fw = new FileWriter("destination.txt");

            int ch;

            // Read character by character until end of file (-1)
            while ((ch = fr.read()) != -1) {
                fw.write(ch); // write each character to destination file
            }

            System.out.println("File copied successfully!");

        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());

        } finally {
            // Close both files
            try {
                if (fr != null) fr.close();
                if (fw != null) fw.close();
            } catch (IOException e) {
                System.out.println("Error closing files: " + e.getMessage());
            }
        }
    }
}
```



## How It Works:

```
source.txt                          destination.txt
┌─────────────────┐                ┌─────────────────┐
│ Hello, this is  │   FileReader   │ Hello, this is  │
│ Sarwan Jung...  │ ────────────►  │ Sarwan Jung...  │
│ Good Luck!      │   FileWriter   │ Good Luck!      │
└─────────────────┘                └─────────────────┘
      READ                               WRITE
```

---

## Key Classes Used:

| Class | Purpose |
|---|---|
| **FileReader** | Reads character data from a file |
| **FileWriter** | Writes character data to a file |
| **fr.read()** | Reads one character at a time, returns -1 at end |
| **fw.write()** | Writes one character at a time to file |
| **close()** | Closes the file and releases resources |

---

<br><br><br>


## Q: What is Autoboxing and Unboxing in Java? Explain difference between HashMap and HashTable.


### Autoboxing
**Definition:** Autoboxing is the automatic conversion of a primitive data type into its corresponding wrapper class object by the Java compiler.

```java
// Autoboxing - primitive to wrapper class
int num = 10;
Integer obj = num;  // automatically converts int → Integer
System.out.println("Autoboxed value: " + obj);
```

### Unboxing
**Definition:** Unboxing is the automatic conversion of a wrapper class object back into its corresponding primitive data type.

```java
// Unboxing - wrapper class to primitive
Integer obj = 20;
int num = obj;  // automatically converts Integer → int
System.out.println("Unboxed value: " + num);
```

### Complete Program:

```java
import java.util.ArrayList;

public class AutoboxingDemo {
    public static void main(String[] args) {

        // Autoboxing - int to Integer
        int a = 100;
        Integer boxed = a;
        System.out.println("Autoboxed: " + boxed);

        // Unboxing - Integer to int
        Integer x = 200;
        int unboxed = x;
        System.out.println("Unboxed: " + unboxed);

        // Autoboxing in ArrayList
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);  // int 10 is autoboxed to Integer
        list.add(20);
        list.add(30);

        // Unboxing from ArrayList
        int sum = 0;
        for (int val : list) {  // Integer unboxed to int
            sum += val;
        }
        System.out.println("Sum: " + sum);
    }
}
```



### Primitive vs Wrapper Class Table:

| Primitive | Wrapper Class |
|---|---|
| `int` | `Integer` |
| `char` | `Character` |
| `double` | `Double` |
| `float` | `Float` |
| `boolean` | `Boolean` |
| `long` | `Long` |

---

## Difference Between HashMap and HashTable

**HashMap Definition:** HashMap is a class in Java that stores key-value pairs. It is not synchronized (not thread-safe) and allows one null key and multiple null values.

**HashTable Definition:** HashTable is a legacy class that also stores key-value pairs. It is synchronized (thread-safe) but does not allow any null key or null value.

### Difference Table:

| Feature | HashMap | HashTable |
|---|---|---|
| **Synchronization** | Not synchronized (not thread-safe) | Synchronized (thread-safe) |
| **Null Key** | Allows one null key | Does not allow null key |
| **Null Value** | Allows multiple null values | Does not allow null value |
| **Performance** | Faster | Slower (due to synchronization) |
| **Introduced in** | Java 1.2 (Collections Framework) | Java 1.0 (Legacy class) |
| **Iterator** | Uses Iterator | Uses Enumerator |
| **Inheritance** | Extends AbstractMap | Extends Dictionary |

### Program:

```java
import java.util.HashMap;
import java.util.Hashtable;

public class MapDemo {
    public static void main(String[] args) {

        // HashMap example
        HashMap<String, Integer> hashMap = new HashMap<>();
        hashMap.put("Sarwan", 90);
        hashMap.put("Ram", 85);
        hashMap.put(null, 70);       // allows null key
        hashMap.put("Hari", null);   // allows null value
        System.out.println("HashMap: " + hashMap);

        // HashTable example
        Hashtable<String, Integer> hashTable = new Hashtable<>();
        hashTable.put("Sarwan", 90);
        hashTable.put("Ram", 85);
        // hashTable.put(null, 70);  // ERROR - null key not allowed
        // hashTable.put("Hari", null); // ERROR - null value not allowed
        System.out.println("HashTable: " + hashTable);
    }
}
```

<br><br><br>


## Q: What are Layout Managers? Explain Grid Layout with suitable example.


**Definition:** A Layout Manager is an object that controls the size and position of components (like buttons, labels, text fields) in a container (like JFrame, JPanel) in Java GUI programming. It automatically arranges components when the window is resized.

### Types of Layout Managers:

| Layout Manager | Description |
|---|---|
| **FlowLayout** | Arranges components left to right, top to bottom |
| **BorderLayout** | Divides container into 5 regions (North, South, East, West, Center) |
| **GridLayout** | Arranges components in rows and columns (grid format) |
| **CardLayout** | Shows one component at a time like cards |
| **GridBagLayout** | Most flexible, components can span multiple rows/columns |
| **BoxLayout** | Arranges components in single row or column |

---

## Grid Layout

**Definition:** GridLayout arranges components in a rectangular grid of rows and columns. Each cell in the grid is of equal size and holds exactly one component.

### Syntax:

```java
GridLayout gl = new GridLayout(rows, columns);
GridLayout gl = new GridLayout(rows, columns, hgap, vgap);
```

### Key Points:
- All cells are equal in size
- Components are added left to right, top to bottom
- `hgap` = horizontal gap between cells
- `vgap` = vertical gap between cells

---

## Java Program: Grid Layout Example (Calculator Keypad)

```java
import java.awt.*;
import javax.swing.*;

public class GridLayoutDemo extends JFrame {

    public GridLayoutDemo() {

        // Set title
        setTitle("Grid Layout Demo - Calculator");

        // Create GridLayout with 4 rows and 3 columns
        // 5 = horizontal gap, 5 = vertical gap
        GridLayout gl = new GridLayout(4, 3, 5, 5);

        // Set layout to the frame
        setLayout(gl);

        // Add buttons (like calculator keypad)
        add(new JButton("7"));
        add(new JButton("8"));
        add(new JButton("9"));

        add(new JButton("4"));
        add(new JButton("5"));
        add(new JButton("6"));

        add(new JButton("1"));
        add(new JButton("2"));
        add(new JButton("3"));

        add(new JButton("0"));
        add(new JButton("."));
        add(new JButton("="));

        // Frame settings
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // center the window
        setVisible(true);
    }

    public static void main(String[] args) {
        new GridLayoutDemo();
    }
}
```

<br><br><br>


# Question for 10 marks

<br><br><br>



## Q: What are keywords used in Exception Handling in Java? Write a Java program that will read balance and withdrawal amount from keyboard and display remaining balance on screen if balance is greater otherwise throw an application exception with appropriate message.


**Definition:** Exception handling in Java uses 5 keywords to handle runtime errors gracefully and maintain normal flow of the program.

---

### 1. try
The `try` block contains code that might throw an exception. It must be followed by `catch` or `finally`.
```java
try {
    int result = 10 / 0; // risky code
}
```

### 2. catch
The `catch` block handles the exception thrown by the `try` block. It takes exception type as parameter.
```java
catch (ArithmeticException e) {
    System.out.println("Cannot divide by zero: " + e.getMessage());
}
```

### 3. finally
The `finally` block always executes whether an exception occurs or not. Used to close resources.
```java
finally {
    System.out.println("This always executes");
}
```

### 4. throw
The `throw` keyword is used to explicitly throw an exception manually inside a method.
```java
throw new ArithmeticException("Cannot divide by zero");
```

### 5. throws
The `throws` keyword is used in method signature to declare that a method may throw an exception.
```java
void myMethod() throws IOException {
    // code
}
```

---

### Summary Table:

| Keyword | Usage | Description |
|---|---|---|
| **try** | `try { }` | Contains risky code |
| **catch** | `catch(Exception e) { }` | Handles the exception |
| **finally** | `finally { }` | Always executes |
| **throw** | `throw new Exception()` | Explicitly throws exception |
| **throws** | `void m() throws Ex` | Declares exception in method |

---

### Exception Handling Syntax:

```java
try {
    // risky code
} catch (ExceptionType1 e) {
    // handle exception
} catch (ExceptionType2 e) {
    // handle another exception
} finally {
    // always executes
}
```

---

## Java Program: Balance and Withdrawal with Custom Exception

```java
import java.util.Scanner;

// Custom Application Exception class
class InsufficientBalanceException extends Exception {

    // Constructor to pass message to parent Exception class
    InsufficientBalanceException(String message) {
        super(message);
    }
}

public class BankWithdrawal {

    // Method that checks balance - throws exception if insufficient
    static double withdraw(double balance, double amount)
                            throws InsufficientBalanceException {

        if (amount > balance) {
            // explicitly throw custom exception
            throw new InsufficientBalanceException(
                "Insufficient Balance! " +
                "You tried to withdraw Rs." + amount +
                " but available balance is only Rs." + balance
            );
        }
        return balance - amount; // return remaining balance
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {
            // Read balance and withdrawal amount from keyboard
            System.out.print("Enter your balance: Rs.");
            double balance = sc.nextDouble();

            System.out.print("Enter withdrawal amount: Rs.");
            double amount = sc.nextDouble();

            // Call withdraw method
            double remaining = withdraw(balance, amount);

            // Display remaining balance
            System.out.println("Withdrawal Successful!");
            System.out.println("Remaining Balance: Rs." + remaining);

        } catch (InsufficientBalanceException e) {
            // Handle custom exception
            System.out.println("Error: " + e.getMessage());

        } catch (Exception e) {
            // Handle any other exception
            System.out.println("Unexpected Error: " + e.getMessage());

        } finally {
            // Always executes
            System.out.println("Thank you for using our banking system!");
            sc.close();
        }
    }
}
```

<br><br><br>


## Q: What are Components of JDBC? Write a Java program to connect database Bank and insert 5 customer records (Account_no, Name, Address, Balance) in Customer table and display the customer record whose balance is greater than 5000.


**Definition:** JDBC (Java Database Connectivity) is an API that allows Java programs to interact with databases. It provides classes and interfaces to connect, query, and update data in a database.

---

### Components of JDBC:

### 1. JDBC Driver
The JDBC Driver is a software component that enables Java application to interact with a database. It converts Java calls into database specific calls.

**Types of JDBC Drivers:**

| Type | Name | Description |
|---|---|---|
| **Type 1** | JDBC-ODBC Bridge Driver | Converts JDBC calls to ODBC calls |
| **Type 2** | Native API Driver | Uses database native library |
| **Type 3** | Network Protocol Driver | Uses middleware server |
| **Type 4** | Thin Driver | Directly connects to database (most used) |

### 2. DriverManager
DriverManager is a class that manages a list of database drivers. It establishes connection between Java application and database.
```java
Connection con = DriverManager.getConnection(url, user, password);
```

### 3. Connection
Connection is an interface that represents a session with the database. All SQL statements are executed through connection object.
```java
Connection con = DriverManager.getConnection(
    "jdbc:mysql://localhost:3306/Bank", "root", "password");
```

### 4. Statement
Statement is an interface used to execute SQL queries against the database.
```java
Statement stmt = con.createStatement();
```

### 5. ResultSet
ResultSet is an interface that holds the data returned by a SELECT query. It works like a cursor pointing to rows of data.
```java
ResultSet rs = stmt.executeQuery("SELECT * FROM Customer");
```

### 6. SQLException
SQLException is a class that handles database related errors and exceptions.
```java
catch (SQLException e) {
    System.out.println("DB Error: " + e.getMessage());
}
```

---

### JDBC Component Diagram:
```
Java Application
      ↓
 JDBC API
      ↓
 DriverManager
      ↓
 JDBC Driver (Type 4)
      ↓
  Database (MySQL)
```

---

### Summary Table:

| Component | Type | Purpose |
|---|---|---|
| **JDBC Driver** | Class | Connects Java to Database |
| **DriverManager** | Class | Manages drivers & connections |
| **Connection** | Interface | Session with database |
| **Statement** | Interface | Executes SQL queries |
| **ResultSet** | Interface | Holds query results |
| **SQLException** | Class | Handles DB errors |

---

## Java Program: Connect to Bank Database, Insert & Display Records

```java
import java.sql.*;

public class BankDatabase {
    public static void main(String[] args) {

        // Database connection variables
        String url = "jdbc:mysql://localhost:3306/Bank";
        String user = "root";
        String password = "password";

        Connection con = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            // Step 1: Load JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");
            System.out.println("Driver loaded successfully!");

            // Step 2: Establish Connection
            con = DriverManager.getConnection(url, user, password);
            System.out.println("Connected to Bank database!");

            // Step 3: Create Statement
            stmt = con.createStatement();

            // Step 4: Create Customer Table (if not exists)
            String createTable = "CREATE TABLE IF NOT EXISTS Customer (" +
                                 "Account_no INT PRIMARY KEY, " +
                                 "Name VARCHAR(50), " +
                                 "Address VARCHAR(100), " +
                                 "Balance DOUBLE)";
            stmt.executeUpdate(createTable);
            System.out.println("Table created successfully!");

            // Step 5: Insert 5 Customer Records
            stmt.executeUpdate("INSERT INTO Customer VALUES " +
                "(1001, 'Sarwan Jung', 'Kathmandu', 15000.00)");

            stmt.executeUpdate("INSERT INTO Customer VALUES " +
                "(1002, 'Ram Bahadur', 'Pokhara', 3000.00)");

            stmt.executeUpdate("INSERT INTO Customer VALUES " +
                "(1003, 'Sita Devi', 'Chitwan', 8000.00)");

            stmt.executeUpdate("INSERT INTO Customer VALUES " +
                "(1004, 'Hari Prasad', 'Lalitpur', 2500.00)");

            stmt.executeUpdate("INSERT INTO Customer VALUES " +
                "(1005, 'Gita Kumari', 'Bhaktapur', 12000.00)");

            System.out.println("5 records inserted successfully!");

            // Step 6: Display customers with balance > 5000
            System.out.println("\n--- Customers with Balance > Rs.5000 ---");
            System.out.println("------------------------------------------");
            System.out.printf("%-12s %-15s %-12s %-10s%n",
                "Account_no", "Name", "Address", "Balance");
            System.out.println("------------------------------------------");

            rs = stmt.executeQuery(
                "SELECT * FROM Customer WHERE Balance > 5000");

            // Step 7: Display ResultSet
            while (rs.next()) {
                int accNo     = rs.getInt("Account_no");
                String name   = rs.getString("Name");
                String addr   = rs.getString("Address");
                double bal    = rs.getDouble("Balance");

                System.out.printf("%-12d %-15s %-12s %-10.2f%n",
                    accNo, name, addr, bal);
            }
            System.out.println("------------------------------------------");

        } catch (ClassNotFoundException e) {
            System.out.println("Driver not found: " + e.getMessage());

        } catch (SQLException e) {
            System.out.println("Database error: " + e.getMessage());

        } finally {
            // Step 8: Close all resources
            try {
                if (rs != null)   rs.close();
                if (stmt != null) stmt.close();
                if (con != null)  con.close();
                System.out.println("Connection closed.");
            } catch (SQLException e) {
                System.out.println("Error closing: " + e.getMessage());
            }
        }
    }
}
```


### JDBC Steps Summary:
```
Step 1: Load Driver      → Class.forName()
Step 2: Get Connection   → DriverManager.getConnection()
Step 3: Create Statement → con.createStatement()
Step 4: Execute Query    → stmt.executeUpdate() / executeQuery()
Step 5: Process Result   → rs.next(), rs.getString()
Step 6: Close Resources  → rs.close(), stmt.close(), con.close()
```

---

<br><br><br>


## Q: What is JInternalFrame? Write a Java program using Swing component to find largest and smallest number among three numbers. Use text fields for input and output. Your program should display the result when user presses a button.


**Definition:** JInternalFrame is a Swing component that provides a lightweight object that looks and behaves like a native frame inside a JDesktopPane. It is used to create Multiple Document Interface (MDI) applications where multiple windows exist inside a single parent window.

### Key Points:
- It lives inside a **JDesktopPane** (parent container)
- Can be **minimized, maximized, closed and resized** like a regular frame
- Used to create **MDI (Multiple Document Interface)** applications
- It is part of **javax.swing** package

### Syntax:

```java
JInternalFrame inf = new JInternalFrame(
    "Title",   // title
    true,      // resizable
    true,      // closable
    true,      // maximizable
    true       // iconifiable
);
```

### Example:

```java
import javax.swing.*;

public class InternalFrameDemo extends JFrame {
    public InternalFrameDemo() {
        setTitle("MDI Application");
        setSize(500, 400);

        // Create Desktop Pane
        JDesktopPane desktop = new JDesktopPane();

        // Create Internal Frame
        JInternalFrame inf = new JInternalFrame(
            "Internal Frame", true, true, true, true);
        inf.setSize(300, 200);
        inf.setVisible(true);

        // Add internal frame to desktop
        desktop.add(inf);
        add(desktop);

        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new InternalFrameDemo();
    }
}
```

---

## Java Swing Program: Find Largest and Smallest Among Three Numbers

```java
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class LargestSmallest extends JFrame implements ActionListener {

    // Declare components
    JLabel l1, l2, l3, l4, l5;
    JTextField tf1, tf2, tf3, tfLargest, tfSmallest;
    JButton btnFind, btnClear;

    public LargestSmallest() {

        setTitle("Find Largest and Smallest Number");
        setSize(400, 350);
        setLayout(null); // absolute layout
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Labels
        l1 = new JLabel("Enter First Number:");
        l1.setBounds(30, 30, 150, 25);
        add(l1);

        l2 = new JLabel("Enter Second Number:");
        l2.setBounds(30, 70, 150, 25);
        add(l2);

        l3 = new JLabel("Enter Third Number:");
        l3.setBounds(30, 110, 150, 25);
        add(l3);

        l4 = new JLabel("Largest Number:");
        l4.setBounds(30, 190, 150, 25);
        add(l4);

        l5 = new JLabel("Smallest Number:");
        l5.setBounds(30, 230, 150, 25);
        add(l5);

        // Text Fields for Input
        tf1 = new JTextField();
        tf1.setBounds(200, 30, 150, 25);
        add(tf1);

        tf2 = new JTextField();
        tf2.setBounds(200, 70, 150, 25);
        add(tf2);

        tf3 = new JTextField();
        tf3.setBounds(200, 110, 150, 25);
        add(tf3);

        // Text Fields for Output
        tfLargest = new JTextField();
        tfLargest.setBounds(200, 190, 150, 25);
        tfLargest.setEditable(false); // read only
        tfLargest.setBackground(Color.LIGHT_GRAY);
        add(tfLargest);

        tfSmallest = new JTextField();
        tfSmallest.setBounds(200, 230, 150, 25);
        tfSmallest.setEditable(false); // read only
        tfSmallest.setBackground(Color.LIGHT_GRAY);
        add(tfSmallest);

        // Find Button
        btnFind = new JButton("Find");
        btnFind.setBounds(60, 280, 100, 30);
        btnFind.addActionListener(this);
        add(btnFind);

        // Clear Button
        btnClear = new JButton("Clear");
        btnClear.setBounds(220, 280, 100, 30);
        btnClear.addActionListener(this);
        add(btnClear);

        setVisible(true);
    }

    // Action performed when button is clicked
    public void actionPerformed(ActionEvent e) {

        if (e.getSource() == btnFind) {
            try {
                // Read input from text fields
                double a = Double.parseDouble(tf1.getText());
                double b = Double.parseDouble(tf2.getText());
                double c = Double.parseDouble(tf3.getText());

                // Find largest using conditional operator
                double largest  = (a > b) ? ((a > c) ? a : c)
                                          : ((b > c) ? b : c);

                // Find smallest using conditional operator
                double smallest = (a < b) ? ((a < c) ? a : c)
                                          : ((b < c) ? b : c);

                // Display result in output text fields
                tfLargest.setText(String.valueOf(largest));
                tfSmallest.setText(String.valueOf(smallest));

            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(this,
                    "Please enter valid numbers!",
                    "Input Error",
                    JOptionPane.ERROR_MESSAGE);
            }
        }

        if (e.getSource() == btnClear) {
            // Clear all text fields
            tf1.setText("");
            tf2.setText("");
            tf3.setText("");
            tfLargest.setText("");
            tfSmallest.setText("");
        }
    }

    public static void main(String[] args) {
        new LargestSmallest();
    }
}
```


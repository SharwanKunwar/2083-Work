# ☕ Core Java — Complete Study Guide

> A comprehensive reference for learning Core Java from basics to advanced topics.
> Ideal for beginners, interview preparation, and DSA practice.

---

## 📚 Table of Contents

1. [Basics](#1--basics)
2. [OOP — Object-Oriented Programming](#2--oop--object-oriented-programming)
3. [Important Keywords & Concepts](#3--important-keywords--concepts)
4. [Core Classes](#4--core-classes)
5. [Exception Handling](#5--exception-handling)
6. [Collections Framework](#6--collections-framework)
7. [Generics](#7--generics)
8. [Functional Java (Java 8+)](#8--functional-java-java-8)
9. [File I/O](#9--file-io)
10. [Multithreading](#10--multithreading)
11. [Java Memory Management](#11--java-memory-management)
12. [Interview Tips](#12--interview-tips)

---

## 1. 🔤 Basics

### Data Types

| Type | Size | Example |
|------|------|---------|
| `byte` | 1 byte | `byte b = 10;` |
| `short` | 2 bytes | `short s = 200;` |
| `int` | 4 bytes | `int x = 1000;` |
| `long` | 8 bytes | `long l = 99999L;` |
| `float` | 4 bytes | `float f = 3.14f;` |
| `double` | 8 bytes | `double d = 3.14159;` |
| `char` | 2 bytes | `char c = 'A';` |
| `boolean` | 1 bit | `boolean flag = true;` |

### Type Casting

```java
// Widening (automatic)
int x = 10;
double d = x;

// Narrowing (manual)
double pi = 3.14;
int n = (int) pi; // n = 3
```

### Input / Output

```java
import java.util.Scanner;

Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
String s = sc.next();
System.out.println("Hello, " + s);
```

### Control Flow

```java
// if-else
if (x > 0) { ... } else if (x == 0) { ... } else { ... }

// switch
switch (day) {
    case 1: System.out.println("Monday"); break;
    default: System.out.println("Other");
}

// loops
for (int i = 0; i < n; i++) { ... }
while (condition) { ... }
do { ... } while (condition);
```

---

## 2. 🧱 OOP — Object-Oriented Programming

### Class & Object

```java
class Car {
    String brand;
    int speed;

    Car(String brand, int speed) {
        this.brand = brand;
        this.speed = speed;
    }

    void display() {
        System.out.println(brand + " runs at " + speed + " km/h");
    }
}

// Object creation
Car c = new Car("Toyota", 120);
c.display();
```

---

### 🔒 Encapsulation

> Wrapping data (fields) and methods in a class and restricting direct access using access modifiers.

```java
class BankAccount {
    private double balance;

    public double getBalance() { return balance; }
    public void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
}
```

---

### 🧬 Inheritance

> One class acquires the properties of another class using `extends`.

```java
class Animal {
    void eat() { System.out.println("Eating..."); }
}

class Dog extends Animal {
    void bark() { System.out.println("Barking..."); }
}

Dog d = new Dog();
d.eat();   // inherited
d.bark();  // own method
```

> **Types:** Single, Multilevel, Hierarchical  
> ⚠️ Java does **not** support multiple inheritance with classes (use interfaces instead).

---

### 🔄 Polymorphism

**Compile-time (Method Overloading):**
```java
class Calculator {
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; } // overloaded
}
```

**Runtime (Method Overriding):**
```java
class Shape {
    void draw() { System.out.println("Drawing shape"); }
}

class Circle extends Shape {
    @Override
    void draw() { System.out.println("Drawing circle"); }
}

Shape s = new Circle(); // upcasting
s.draw(); // → "Drawing circle"
```

---

### 🎭 Abstraction

**Abstract Class:**
```java
abstract class Vehicle {
    abstract void start();  // no body
    void stop() { System.out.println("Stopped"); }
}
```

**Interface:**
```java
interface Flyable {
    void fly(); // public abstract by default
}

interface Swimmable {
    void swim();
}

class Duck extends Animal implements Flyable, Swimmable {
    public void fly() { System.out.println("Duck flies"); }
    public void swim() { System.out.println("Duck swims"); }
}
```

| Feature | Abstract Class | Interface |
|--------|----------------|-----------|
| Methods | Abstract + Concrete | Abstract (default/static allowed in Java 8+) |
| Variables | Any type | `public static final` only |
| Multiple inheritance | ❌ | ✅ |
| Constructor | ✅ | ❌ |

---

### Constructors

```java
class Student {
    String name;
    int age;

    Student() { this("Unknown", 0); }          // default → calls parameterized
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
}
```

---

## 3. 🧩 Important Keywords & Concepts

| Keyword | Purpose |
|---------|---------|
| `final` | Constant variable / prevent override / prevent inheritance |
| `static` | Belongs to class, not object |
| `abstract` | Declares incomplete method/class |
| `instanceof` | Checks object type |
| `this` | Refers to current object |
| `super` | Refers to parent class |

### Access Modifiers

| Modifier | Same Class | Same Package | Subclass | Outside |
|----------|-----------|--------------|----------|---------|
| `public` | ✅ | ✅ | ✅ | ✅ |
| `protected` | ✅ | ✅ | ✅ | ❌ |
| `default` | ✅ | ✅ | ❌ | ❌ |
| `private` | ✅ | ❌ | ❌ | ❌ |

---

## 4. 📦 Core Classes

### String

```java
String s = "Hello";
s.length();           // 5
s.charAt(0);          // 'H'
s.substring(1, 3);    // "el"
s.toUpperCase();      // "HELLO"
s.contains("ell");    // true
s.replace("l", "r"); // "Herro"
s.split(",");         // array
s.trim();             // removes whitespace
s.equals("Hello");    // true (use this, not ==)
```

### StringBuilder (Mutable & Fast)

```java
StringBuilder sb = new StringBuilder();
sb.append("Hello");
sb.append(" World");
sb.insert(5, ",");
sb.reverse();
sb.delete(0, 3);
System.out.println(sb.toString());
```

> Use `StringBuilder` in loops. `String` creates a new object each time (immutable).

### Math Class

```java
Math.max(10, 20);     // 20
Math.min(10, 20);     // 10
Math.abs(-5);         // 5
Math.pow(2, 10);      // 1024.0
Math.sqrt(16);        // 4.0
Math.floor(3.9);      // 3.0
Math.ceil(3.1);       // 4.0
Math.random();        // 0.0 to 1.0
```

### Arrays Class

```java
int[] arr = {5, 3, 1, 4, 2};
Arrays.sort(arr);                    // [1, 2, 3, 4, 5]
Arrays.binarySearch(arr, 3);         // index of 3
Arrays.fill(arr, 0);                 // [0, 0, 0, 0, 0]
Arrays.copyOf(arr, 3);               // first 3 elements
System.out.println(Arrays.toString(arr));
```

### Wrapper Classes & Autoboxing

```java
Integer a = 10;          // autoboxing: int → Integer
int b = a;               // unboxing:   Integer → int

Integer.parseInt("42");   // String → int
Integer.toBinaryString(10); // "1010"
Integer.MAX_VALUE;        // 2147483647
Double.parseDouble("3.14");
```

---

## 5. ⚠️ Exception Handling

### try-catch-finally

```java
try {
    int result = 10 / 0;
} catch (ArithmeticException e) {
    System.out.println("Error: " + e.getMessage());
} catch (Exception e) {
    System.out.println("General error");
} finally {
    System.out.println("Always runs");
}
```

### throw vs throws

```java
// throw — used to explicitly throw an exception
void checkAge(int age) {
    if (age < 18) throw new IllegalArgumentException("Underage!");
}

// throws — declares that a method might throw an exception
void readFile() throws IOException {
    // ...
}
```

### Custom Exception

```java
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

// Usage
throw new InsufficientFundsException("Balance too low!");
```

### Checked vs Unchecked

| Type | Example | Must Handle? |
|------|---------|--------------|
| Checked | `IOException`, `SQLException` | ✅ Yes |
| Unchecked | `NullPointerException`, `ArrayIndexOutOfBoundsException` | ❌ No |

---

## 6. 📚 Collections Framework

```
Collection (interface)
 ├── List → ArrayList, LinkedList, Vector
 ├── Set  → HashSet, LinkedHashSet, TreeSet
 └── Queue → PriorityQueue, ArrayDeque

Map (interface)
 └── HashMap, LinkedHashMap, TreeMap, Hashtable
```

### ArrayList

```java
ArrayList<Integer> list = new ArrayList<>();
list.add(10);
list.add(20);
list.get(0);           // 10
list.remove(0);        // removes index 0
list.size();           // size
list.contains(20);     // true
Collections.sort(list);
Collections.reverse(list);
```

### HashMap

```java
HashMap<String, Integer> map = new HashMap<>();
map.put("Alice", 90);
map.put("Bob", 85);
map.get("Alice");          // 90
map.containsKey("Bob");    // true
map.remove("Bob");
map.getOrDefault("X", 0); // 0

for (Map.Entry<String, Integer> e : map.entrySet()) {
    System.out.println(e.getKey() + " → " + e.getValue());
}
```

### HashSet

```java
HashSet<String> set = new HashSet<>();
set.add("Java");
set.add("Python");
set.add("Java");       // duplicate ignored
set.contains("Java");  // true
set.size();            // 2
```

### Stack & Queue

```java
// Stack
Stack<Integer> stack = new Stack<>();
stack.push(1);
stack.push(2);
stack.pop();    // 2
stack.peek();   // 1

// Queue
Queue<Integer> queue = new LinkedList<>();
queue.offer(1);
queue.offer(2);
queue.poll();   // 1 (removes)
queue.peek();   // 2 (doesn't remove)

// PriorityQueue (min-heap by default)
PriorityQueue<Integer> pq = new PriorityQueue<>();
pq.offer(5); pq.offer(1); pq.offer(3);
pq.poll(); // 1
```

---

## 7. 🔁 Generics

```java
// Generic class
class Box<T> {
    T value;
    Box(T value) { this.value = value; }
    T get() { return value; }
}

Box<Integer> intBox = new Box<>(42);
Box<String> strBox = new Box<>("Hello");

// Generic method
<T extends Comparable<T>> T findMax(T a, T b) {
    return a.compareTo(b) > 0 ? a : b;
}

// Wildcard
void printList(List<?> list) {
    for (Object o : list) System.out.println(o);
}
```

---

## 8. ⚡ Functional Java (Java 8+)

### Lambda Expressions

```java
// Before Java 8
Runnable r = new Runnable() {
    public void run() { System.out.println("Running"); }
};

// With Lambda
Runnable r = () -> System.out.println("Running");

// With parameters
Comparator<Integer> comp = (a, b) -> a - b;
```

### Functional Interfaces

```java
// Predicate — takes input, returns boolean
Predicate<Integer> isEven = n -> n % 2 == 0;
isEven.test(4); // true

// Function — takes input, returns output
Function<String, Integer> len = s -> s.length();
len.apply("Hello"); // 5

// Consumer — takes input, returns nothing
Consumer<String> print = s -> System.out.println(s);

// Supplier — no input, returns output
Supplier<Double> rand = () -> Math.random();
```

### Streams API

```java
List<Integer> nums = Arrays.asList(1, 2, 3, 4, 5, 6);

// Filter + Map + Collect
List<Integer> result = nums.stream()
    .filter(n -> n % 2 == 0)   // [2, 4, 6]
    .map(n -> n * n)            // [4, 16, 36]
    .collect(Collectors.toList());

// Reduce
int sum = nums.stream().reduce(0, Integer::sum); // 21

// Sorted, Distinct, Count
long count = nums.stream().distinct().sorted().count();

// forEach
nums.stream().forEach(System.out::println);
```

### Optional

```java
Optional<String> opt = Optional.ofNullable(getName());
opt.isPresent();           // true/false
opt.get();                 // value (throws if empty)
opt.orElse("Default");    // value or fallback
opt.ifPresent(System.out::println);
```

---

## 9. 🗂️ File I/O

### Reading a File

```java
try (BufferedReader br = new BufferedReader(new FileReader("file.txt"))) {
    String line;
    while ((line = br.readLine()) != null) {
        System.out.println(line);
    }
} catch (IOException e) {
    e.printStackTrace();
}
```

### Writing to a File

```java
try (BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"))) {
    bw.write("Hello, Java!");
    bw.newLine();
    bw.write("Second line");
} catch (IOException e) {
    e.printStackTrace();
}
```

### Java NIO (Modern Approach)

```java
import java.nio.file.*;

// Read all lines
List<String> lines = Files.readAllLines(Path.of("file.txt"));

// Write to file
Files.writeString(Path.of("output.txt"), "Hello!");

// Check if file exists
Files.exists(Path.of("file.txt"));
```

---

## 10. 🧵 Multithreading

### Creating Threads

```java
// Method 1: Extend Thread
class MyThread extends Thread {
    public void run() { System.out.println("Thread running"); }
}
new MyThread().start();

// Method 2: Implement Runnable (preferred)
Runnable task = () -> System.out.println("Runnable running");
new Thread(task).start();
```

### Synchronization

```java
class Counter {
    private int count = 0;

    synchronized void increment() {
        count++;
    }
}
```

### ExecutorService

```java
ExecutorService executor = Executors.newFixedThreadPool(3);

executor.submit(() -> System.out.println("Task 1"));
executor.submit(() -> System.out.println("Task 2"));

executor.shutdown();
```

---

## 11. 🧠 Java Memory Management

| Area | What it Stores |
|------|----------------|
| **Stack** | Method calls, local variables, references |
| **Heap** | Objects, instance variables |
| **Method Area** | Class metadata, static variables |
| **Garbage Collector** | Auto-removes unreferenced objects |

```java
// Requesting GC (not guaranteed)
System.gc();
```

> ⚠️ Java uses **automatic garbage collection** — you don't need to free memory manually like in C/C++.

---

## 12. 🎯 Interview Tips

### Common Java Interview Topics

- [ ] Difference between `==` and `.equals()`
- [ ] Why `String` is immutable
- [ ] `ArrayList` vs `LinkedList`
- [ ] `HashMap` internal working
- [ ] `abstract class` vs `interface`
- [ ] Checked vs Unchecked exceptions
- [ ] `final`, `finally`, `finalize` difference
- [ ] `static` keyword uses
- [ ] Method overloading vs overriding
- [ ] Java 8 features (Streams, Lambdas, Optional)

### Quick Cheat Sheet

```
Immutable     → String, Integer, wrapper classes
Mutable       → StringBuilder, ArrayList, HashMap
Thread-safe   → Vector, Hashtable, StringBuffer
Not thread-safe → ArrayList, HashMap, StringBuilder
Ordered       → ArrayList, LinkedList, LinkedHashMap
Sorted        → TreeSet, TreeMap, PriorityQueue
No duplicates → Set (HashSet, TreeSet, LinkedHashSet)
```

---

## 🛣️ Recommended Learning Path

```
Basics → OOP → Exception Handling
  → Collections → Generics
    → Java 8 Features → File I/O
      → Multithreading → DSA with Java
```

---

## 📖 Resources

- [Official Java Docs](https://docs.oracle.com/en/java/)
- [GeeksforGeeks Java](https://www.geeksforgeeks.org/java/)
- [LeetCode (Java DSA)](https://leetcode.com/)
- [Baeldung Java Guides](https://www.baeldung.com/)

---

> 💡 **Tip:** Practice at least 2–3 coding problems daily using Java to reinforce these concepts.  
> ⭐ Star this guide and revisit it while solving DSA problems!
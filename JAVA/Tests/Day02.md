# ☕ OOP Concepts in Java — Quiz-Based Learning

> A personal collection of Object-Oriented Programming concepts practiced through Q&A and coding challenges.

---

## 📚 Table of Contents

1. [Encapsulation](#1-encapsulation)
2. [Access Modifiers](#2-access-modifiers)
3. [Inheritance — Method Overriding](#3-inheritance--method-overriding)
4. [Inheritance — Inheriting Methods](#4-inheritance--inheriting-methods)
5. [Inheritance — Constructor Chaining](#5-inheritance--constructor-chaining)
6. [Multilevel Inheritance — Constructor Chain](#6-multilevel-inheritance--constructor-chain)
7. [Runtime Polymorphism — Upcasting](#7-runtime-polymorphism--upcasting)
8. [Compile-time vs Runtime Polymorphism](#8-compile-time-vs-runtime-polymorphism)
9. [Method Overloading](#9-method-overloading)
10. [Abstraction](#10-abstraction)

---

## 1. Encapsulation

### ❓ Question
What is encapsulation in OOP, and why is it used?

### ✅ Answer
Encapsulation is the OOP concept of **wrapping data (variables) and methods (functions) into a single unit (class)** and **restricting access** to internal details using access modifiers.

- Data is kept `private` and accessed via `getter` and `setter` methods
- Protects internal state from being directly changed by outside code
- Promotes data hiding and security within the codebase

### 📌 Key Points
| Term | Meaning |
|------|---------|
| Wrapping | Combining data + methods inside a class |
| Hiding | Restricting direct access using `private` |
| Access | Controlled through `getters` and `setters` |

---

## 2. Access Modifiers

### ❓ Question
What is the difference between `private` and `public` access modifiers?

### ✅ Answer

| Modifier | Accessible From |
|----------|----------------|
| `private` | Only within the **same class** |
| `public` | From **anywhere** (any class, any package) |

### 💡 Example
```java
class Person {
    private String name;  // only accessible inside Person class

    public String getName() {  // accessible from anywhere
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
```

---

## 3. Inheritance — Method Overriding

### ❓ Question
What will be the output of this code?

```java
class Animal {
    void speak() {
        System.out.println("Animal speaks");
    }
}

class Dog extends Animal {
    void speak() {
        System.out.println("Dog barks");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.speak();
    }
}
```

### ✅ Output
```
Dog barks
```

### 💡 Explanation
- `Dog` object is created with `Dog` reference
- `speak()` is **overridden** in the `Dog` class
- Java calls the overridden version in the child class
- This is called **Method Overriding**

---

## 4. Inheritance — Inheriting Methods

### ❓ Question
What will happen here?

```java
class Animal {
    void eat() {
        System.out.println("Animal eats");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog barks");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat();
        d.bark();
    }
}
```

### ✅ Output
```
Animal eats
Dog barks
```

### 💡 Explanation
- `Dog` extends `Animal`, so it **inherits** the `eat()` method
- The child class can access all `public` methods of the parent class
- This is the core principle of **Inheritance** — code reusability

---

## 5. Inheritance — Constructor Chaining

### ❓ Question
What will be the output?

```java
class Animal {
    Animal() {
        System.out.println("Animal constructor");
    }
}

class Dog extends Animal {
    Dog() {
        System.out.println("Dog constructor");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
    }
}
```

### ✅ Output
```
Animal constructor
Dog constructor
```

### 💡 Explanation
- When a child class object is created, Java **automatically calls the parent constructor first** via an implicit `super()` call
- This ensures the **parent is initialized before the child**
- Order is always: **Parent → Child**

---

## 6. Multilevel Inheritance — Constructor Chain

### ❓ Question
What will be the output?

```java
class Animal {
    Animal() {
        System.out.println("Animal constructor");
    }
}

class Dog extends Animal {
    Dog() {
        super();
        System.out.println("Dog constructor");
    }
}

class Puppy extends Dog {
    Puppy() {
        System.out.println("Puppy constructor");
    }
}

public class Main {
    public static void main(String[] args) {
        Puppy p = new Puppy();
    }
}
```

### ✅ Output
```
Animal constructor
Dog constructor
Puppy constructor
```

### 💡 Explanation
- This is **Multilevel Inheritance** — a chain of classes: `Animal → Dog → Puppy`
- Each class constructor calls the parent constructor first
- Order always flows from the **top of the chain down**

---

## 7. Runtime Polymorphism — Upcasting

### ❓ Question
What will be the output and what concept does this show?

```java
class Shape {
    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing a circle");
    }
}

class Rectangle extends Shape {
    void draw() {
        System.out.println("Drawing a rectangle");
    }
}

public class Main {
    public static void main(String[] args) {
        Shape s1 = new Circle();
        Shape s2 = new Rectangle();
        s1.draw();
        s2.draw();
    }
}
```

### ✅ Output
```
Drawing a circle
Drawing a rectangle
```

### 💡 Explanation
- `Shape s1 = new Circle()` → parent reference holds child object → **Upcasting**
- At runtime, Java decides which `draw()` to call based on the **actual object**, not the reference type
- This is **Runtime Polymorphism** (also called **Dynamic Method Dispatch**)
- **Upcasting** is the mechanism; **Polymorphism** is the concept

---

## 8. Compile-time vs Runtime Polymorphism

### ❓ Question
What is the difference between compile-time and runtime polymorphism?

### ✅ Answer

| Type | Achieved Through | Resolved At |
|------|-----------------|-------------|
| Compile-time Polymorphism | Method **Overloading** | Compile time |
| Runtime Polymorphism | Method **Overriding** | Runtime |

### 💡 Key Definitions

**Method Overloading** — Same method name, different parameters (number or type)
```java
int add(int a, int b) { ... }
int add(int a, int b, int c) { ... }   // different number of params
double add(double a, double b) { ... } // different type
```

**Method Overriding** — Child class redefines parent class method to show different behavior
```java
class Animal { void speak() { System.out.println("Animal speaks"); } }
class Dog extends Animal { void speak() { System.out.println("Dog barks"); } }
```

---

## 9. Method Overloading

### ❓ Question
What will be the output?

```java
class Calculator {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        System.out.println(c.add(2, 3));
        System.out.println(c.add(2, 3, 4));
        System.out.println(c.add(2.5, 3.5));
    }
}
```

### ✅ Output
```
5
9
6.0
```

### 💡 Explanation
- Java determines which `add()` to call based on the **number and type of arguments** at **compile time**
- `add(2, 3)` → 2 int params → returns `int` → prints `5`
- `add(2, 3, 4)` → 3 int params → returns `int` → prints `9`
- `add(2.5, 3.5)` → 2 double params → returns `double` → prints `6.0` *(not `6`!)*

> ⚠️ Common mistake: forgetting that `double` returns `6.0`, not `6`

---

## 10. Abstraction

### ❓ Question (In Progress)
What is the output and what is wrong with this code?

```java
abstract class Vehicle {
    abstract void start();

    void fuel() {
        System.out.println("Vehicle needs fuel");
    }
}

public class Main {
    public static void main(String[] args) {
        Vehicle v = new Vehicle();
        v.fuel();
    }
}
```

> 🚧 *This concept is currently being practiced...*

---

## 🧠 Concepts Summary

| Concept | Key Idea |
|---------|----------|
| Encapsulation | Wrapping data + methods, restricting access with modifiers |
| Inheritance | Child class acquires properties and methods of parent class |
| Polymorphism | Same interface, different behavior (overloading & overriding) |
| Abstraction | Hiding implementation details, showing only essential features |
| Method Overloading | Same name, different parameters → Compile-time polymorphism |
| Method Overriding | Child redefines parent method → Runtime polymorphism |
| Upcasting | Parent reference holds child object |
| Constructor Chaining | Parent constructor always called before child |

---

*📅 Session Date: May 09, 2026*  
*💻 Language: Java*  
*📖 Format: Quiz-based learning — one concept at a time*
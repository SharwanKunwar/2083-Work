# ☕ Java Interview Questions & Answers

A concise reference guide covering fundamental Java concepts for interview preparation.

---

## Table of Contents

- [Q1 — What is a Class in Java?](#q1--what-is-a-class-in-java)
- [Q2 — What is the JVM?](#q2--what-is-the-jvm)
- [Q3 — What is the right data type to represent a price in Java?](#q3--what-is-the-right-data-type-to-represent-a-price-in-java)
- [Q4 — Does Java support multiple inheritance?](#q4--does-java-support-multiple-inheritance)
- [Q5 — What platforms does Java support?](#q5--what-platforms-does-java-support)

---

## Q1 — What is a Class in Java?

A **class** is a blueprint or template for creating objects. It encapsulates data (fields) and behavior (methods) into a single unit. Java organizes code into classes that define new data types, which are then used to instantiate objects at runtime.

```java
public class Car {
    String brand;       // field
    int speed;          // field

    void accelerate() { // method
        speed += 10;
    }
}
```

---

## Q2 — What is the JVM?

The **JVM** (Java Virtual Machine) is a runtime environment that executes compiled Java bytecode (`.class` files). It abstracts the underlying hardware and OS, making Java programs platform-independent — *write once, run anywhere*.

```
Java Source (.java)  →  Compiler (javac)  →  Bytecode (.class)  →  JVM  →  Output
```

---

## Q3 — What is the right data type to represent a price in Java?

Use **`BigDecimal`** when precision is critical (e.g. financial calculations), as it avoids the rounding errors inherent in floating-point types. If memory or performance is a concern and you can manage precision manually, `double` with a fixed number of decimal places is an acceptable alternative.

| Type | Use When |
|------|----------|
| `BigDecimal` | Precision is critical (financial, billing) |
| `double` | Performance matters and precision is managed manually |

```java
// Preferred for prices
BigDecimal price = new BigDecimal("19.99");

// Acceptable when performance is critical
double price = 19.99;
```

---

## Q4 — Does Java support multiple inheritance?

**No.** Java does not support multiple inheritance of classes, in order to avoid ambiguity (the *diamond problem*). However, a class can implement multiple `interface`s, and since Java 8, interfaces can contain `default` methods — providing a controlled form of multiple inheritance.

```java
interface Flyable {
    default void fly() { System.out.println("Flying"); }
}

interface Swimmable {
    default void swim() { System.out.println("Swimming"); }
}

// A class can implement multiple interfaces
class Duck implements Flyable, Swimmable { }
```

---

## Q5 — What platforms does Java support?

Java runs on a wide range of platforms including **Windows**, **macOS**, and various **Unix/Linux** distributions (such as Red Hat, Ubuntu, CentOS, and Solaris). This cross-platform capability is enabled by the JVM, which acts as an intermediary between compiled bytecode and the host OS.

| Platform | Examples |
|----------|----------|
| Windows  | Windows 10, 11, Server |
| macOS    | macOS 12+ |
| Linux    | Ubuntu, Red Hat, CentOS, Fedora |
| Unix     | Solaris, HP-UX |

---

## Contributing

Feel free to open a pull request to add more questions or improve existing answers.

## License

This project is open source and available under the [MIT License](LICENSE).
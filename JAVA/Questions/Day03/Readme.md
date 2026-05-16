# ☕ Java Interview Questions & Answers

> A structured reference guide covering core Java concepts — access modifiers, packages, inheritance, exception handling, and more.

---

## 📚 Table of Contents

- [Q11 — Access Modifiers](#q11----access-modifiers)
- [Q12 — Packages](#q12----packages)
- [Q13 — Inheritance](#q13----inheritance)
- [Q14 — Rethrowing Exceptions](#q14----rethrowing-exceptions)
- [Q15 — Default Value of String](#q15----default-value-of-string)

---

## Q11 — Access Modifiers

### ❓ What are the access modifiers in Java?

Java has **4 levels of access control**, defined by 3 explicit modifiers plus a default:

| Modifier       | Same Class | Same Package | Subclass | Everywhere |
|----------------|:----------:|:------------:|:--------:|:----------:|
| `public`       | ✅         | ✅           | ✅       | ✅         |
| `protected`    | ✅         | ✅           | ✅       | ❌         |
| *(default)*    | ✅         | ✅           | ❌       | ❌         |
| `private`      | ✅         | ❌           | ❌       | ❌         |

- **`public`** — accessible from anywhere. Used for APIs and classes intended for broad use.
- **`protected`** — accessible within the same package and by subclasses in other packages. Commonly used in inheritance hierarchies.
- ***(package-private / default)*** — no keyword is written. Accessible only within the same package. Cannot be declared explicitly — omitting any modifier is the only way to apply it.
- **`private`** — accessible only within the same class. The most restrictive level; enforces encapsulation.

> 💡 **Best Practice:** Always use the **most restrictive modifier** that still allows your code to function correctly.

---

## Q12 — Packages

### ❓ What are Packages?

A **package** is a namespace that organises a set of related classes and interfaces into a logical group.

**Key purposes:**
- **Namespace management** — prevents naming conflicts between classes in different packages (e.g., `java.util.Date` vs `java.sql.Date`).
- **Access protection** — package-private members are only visible to classes within the same package.
- **Modularity** — makes large codebases easier to manage and navigate.

**Examples of built-in Java packages:**

| Package    | Contents                                          |
|------------|---------------------------------------------------|
| `java.lang` | Core classes (`String`, `Math`, `Object`) — auto-imported |
| `java.util` | Collections, `Scanner`, `Date`                   |
| `java.io`   | File and stream I/O                               |
| `java.net`  | Networking                                        |

**Declaring and using packages:**

```java
// Declare a package at the top of the file
package com.myapp.utils;

// Import a specific class from another package
import java.util.ArrayList;

// Or import everything from a package (use sparingly)
import java.util.*;
```

---

## Q13 — Inheritance

### ❓ What is meant by inheritance, and what are its advantages?

**Inheritance** is an OOP mechanism where a **subclass** (child class) acquires the fields and methods of a **superclass** (parent class) using the `extends` keyword. It models an *"is-a"* relationship.

```java
// Superclass
public class Animal {
    String name;

    public void eat() {
        System.out.println(name + " is eating.");
    }
}

// Subclass — inherits eat() and name from Animal
public class Dog extends Animal {
    public void bark() {
        System.out.println(name + " says: Woof!");
    }
}
```

**Advantages:**

- **Code reusability** — common logic is written once in the superclass and reused by all subclasses, reducing duplication.
- **Method overriding** — subclasses can redefine superclass methods to provide specialised behaviour using `@Override`.
- **Polymorphism** — a superclass reference can point to a subclass object, enabling flexible and extensible designs.
- **Maintainability** — changes to shared behaviour only need to be made in one place.

**Important notes:**
- Java supports **single inheritance** only — a class can extend only one superclass.
- Multiple inheritance of behaviour is achieved through **interfaces**.
- All classes implicitly extend `java.lang.Object` if no superclass is declared.
- Use the `super` keyword to access the superclass's constructor or methods.

---

## Q14 — Rethrowing Exceptions

### ❓ Can we rethrow the same exception from a catch handler?

Yes, an exception can be rethrown from within a `catch` block using the `throw` keyword. This is useful when you want to log or partially handle an exception but still propagate it up the call stack.

```java
public void readFile(String path) throws IOException {
    try {
        FileReader fr = new FileReader(path);
    } catch (IOException e) {
        System.err.println("Logging error: " + e.getMessage()); // partial handling
        throw e; // rethrow the same exception
    }
}
```

**Rules to remember:**

- **Checked exceptions** — if you rethrow a checked exception, it must be declared in the method signature with `throws`, or the compiler will reject the code.
- **Unchecked exceptions** — subclasses of `RuntimeException` do not need to be declared.
- You can also **wrap** the original exception inside a new one to add context, known as *exception chaining*:

```java
catch (IOException e) {
    throw new RuntimeException("Failed to read config file", e); // e is preserved as the cause
}
```

- The original exception is preserved as the **cause** and can be retrieved with `getCause()`.

---

## Q15 — Default Value of String

### ❓ What value is a variable of the String type automatically initialized to?

A `String` variable — like all **object reference types** in Java — is automatically initialised to `null` when declared as an instance or class (static) field without an explicit value.

```java
public class Example {
    String name;        // automatically null (instance field)
    static String id;   // automatically null (static field)

    void show() {
        System.out.println(name); // prints: null
        System.out.println(id);   // prints: null
    }
}
```

**Important distinctions:**

| Context                | Default Value                                              |
|------------------------|------------------------------------------------------------|
| Instance / static field | `null`                                                    |
| Local variable          | ❌ No default — **must be assigned before use** or the compiler throws an error |

```java
void method() {
    String s;
    System.out.println(s); // ❌ Compile error: variable s might not have been initialized
}
```

> ⚠️ **Watch out:** `null` means the variable holds **no reference** to any object in memory. Calling a method on a `null` reference (e.g., `name.length()`) will throw a **`NullPointerException`** at runtime. Always null-check or use `Optional<String>` to handle it safely.

---

## 🛠️ How to Use This Guide

1. Browse the [Table of Contents](#-table-of-contents) to jump to any topic.
2. Each question includes an explanation, code example, and key notes.
3. Ideal for revision before Java interviews or exams.

---

## 🤝 Contributing

Found an error or want to add more questions? Feel free to open a pull request or raise an issue.

---

## 📄 License

This repository is open-source and available under the [MIT License](LICENSE).
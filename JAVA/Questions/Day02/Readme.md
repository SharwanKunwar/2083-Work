# ☕ Java — Question & Answer Guide
> Questions 06 to 10 | Detailed Explanations with Examples

---

# Question 06
## 📌 List any five features of Java?

Java is one of the most popular programming languages due to its powerful and unique features. Here are five core features:

---

### 1. 🧱 Object-Oriented
Java follows the **Object-Oriented Programming (OOP)** paradigm, meaning everything in Java is treated as an object. It supports all four pillars of OOP:

| Pillar | Description |
|--------|-------------|
| Encapsulation | Bundling data and methods together |
| Inheritance | A class can acquire properties of another class |
| Polymorphism | One interface, many implementations |
| Abstraction | Hiding internal details, showing only functionality |

```java
class Animal {
    String name;
    void speak() { System.out.println(name + " makes a sound"); }
}

class Dog extends Animal {
    void speak() { System.out.println(name + " barks"); } // Polymorphism
}
```

---

### 2. 🌐 Platform Independent
Java follows the principle **"Write Once, Run Anywhere (WORA)"**.  
Java code is compiled into **bytecode** (`.class` file) by the Java compiler, which can run on **any platform** that has a **JVM (Java Virtual Machine)** installed — whether it's Windows, Linux, or macOS.

```
Java Source Code (.java)
        ↓  javac (compiler)
    Bytecode (.class)
        ↓  JVM
  Runs on Any Platform ✅
```

---

### 3. 💪 Robust
Java is designed to be reliable and error-free. It achieves robustness through:
- **Strong type checking** at compile time
- **Exception handling** (`try-catch-finally`) to manage runtime errors
- **Automatic Garbage Collection** to prevent memory leaks
- **No explicit pointers** — reduces memory corruption risks

```java
try {
    int result = 10 / 0;
} catch (ArithmeticException e) {
    System.out.println("Caught: " + e.getMessage()); // Caught: / by zero
} finally {
    System.out.println("Always executes");
}
```

---

### 4. 🔍 Interpreted
Java is both **compiled and interpreted**:
- The Java compiler converts source code into **bytecode**
- The **JVM interprets** (executes) this bytecode line by line at runtime
- This makes Java platform-independent and allows for dynamic code loading

```
Compiler → Bytecode → JVM Interpreter → Output
```

> Modern JVMs use **JIT (Just-In-Time) Compilation** to convert frequently used bytecode into native machine code for better performance.

---

### 5. 🧵 Multi-threaded
Java has **built-in support for multithreading**, allowing multiple threads to run concurrently within a single program. This improves performance for tasks like:
- Downloading files while displaying UI
- Running background tasks
- Handling multiple client requests in a server

```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread " + Thread.currentThread().getName() + " is running");
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        t1.start(); // Thread-0 is running
        t2.start(); // Thread-1 is running
    }
}
```

### 🔖 Other Notable Java Features
- **Secure** — No explicit pointers; bytecode verification before execution
- **Distributed** — Supports networking with `java.net` package
- **High Performance** — JIT compiler speeds up execution
- **Dynamic** — Supports dynamic loading of classes at runtime

---

<br>

# Question 07
## 📌 Explain Method Overloading?

### Definition
**Method Overloading** is a feature in Java where a class can have **more than one method with the same name**, but with **different parameters** (different number, type, or order of parameters). It is a form of **compile-time (static) polymorphism**.

> ⚠️ The return type alone **cannot** differentiate overloaded methods.

---

### Rules for Method Overloading

| Rule | Valid? |
|------|--------|
| Different number of parameters | ✅ Yes |
| Different types of parameters | ✅ Yes |
| Different order of parameters | ✅ Yes |
| Only different return type | ❌ No |
| Only different access modifier | ❌ No |

---

### Example 1 — Different Number of Parameters

```java
class Calculator {
    // No parameters
    int add() { return 0; }

    // Two parameters
    int add(int a, int b) { return a + b; }

    // Three parameters
    int add(int a, int b, int c) { return a + b + c; }

    public static void main(String[] args) {
        Calculator c = new Calculator();
        System.out.println(c.add());          // 0
        System.out.println(c.add(10, 20));    // 30
        System.out.println(c.add(10, 20, 30)); // 60
    }
}
```

---

### Example 2 — Different Types of Parameters

```java
class Display {
    void show(int x)    { System.out.println("Integer: " + x); }
    void show(double x) { System.out.println("Double: " + x); }
    void show(String x) { System.out.println("String: " + x); }
}
```

---

### Example 3 — Different Order of Parameters

```java
class Demo {
    void print(int a, String b) { System.out.println(a + " " + b); }
    void print(String b, int a) { System.out.println(b + " " + a); }
}
```

---

### Why Use Method Overloading?
- Improves **code readability** — same logical operation under one name
- Avoids creating multiple method names like `addInt()`, `addDouble()`
- Makes APIs cleaner and easier to use (e.g., `System.out.println()` is overloaded for all types)

---

<br>

# Question 08
## 📌 What Restrictions Are Placed on the Location of a Package Statement Within a Source Code File?

### Definition
A **package statement** in Java declares which package a class belongs to. It uses the `package` keyword.

```java
package com.myapp.utils;
```

---

### ✅ Rules & Restrictions

#### 1. Must Be the First Statement
The `package` statement must appear as the **very first line** of the source file — before any class declaration, import statements, or code.

```java
// ✅ CORRECT
package com.example;

import java.util.Scanner;

public class MyClass { }
```

```java
// ❌ WRONG — import before package
import java.util.Scanner;

package com.example; // Compile error!

public class MyClass { }
```

---

#### 2. Only One Package Statement Allowed
A source file can have **only one** package statement. A class can belong to only one package.

```java
// ❌ WRONG
package com.example;
package com.other; // Compile error!
```

---

#### 3. Blank Lines and Comments Are Allowed Before It
The only things allowed before a `package` statement are **blank lines** and **comments**.

```java
// ✅ CORRECT — comment before package is fine
// This is my utility class

package com.example;

public class MyClass { }
```

---

#### 4. If No Package Statement → Default Package
If a source file does not contain a `package` statement, the class belongs to the **default (unnamed) package**.

```java
// No package statement → belongs to default package
public class MyClass { }
```

---

### Summary Table

| Condition | Allowed? |
|-----------|----------|
| Package as first statement | ✅ Yes |
| Comments/blank lines before package | ✅ Yes |
| Import statements before package | ❌ No |
| More than one package statement | ❌ No |
| Class declaration before package | ❌ No |

---

<br>

# Question 09
## 📌 What Method Is Used to Specify a Container's Layout?

### Definition
In Java AWT (Abstract Window Toolkit) and Swing, the **`setLayout()`** method is used to set the **layout manager** of a container. A layout manager controls how components (buttons, text fields, labels, etc.) are **arranged** inside a container.

---

### Syntax

```java
containerObject.setLayout(new LayoutManager());
```

---

### Common Layout Managers

| Layout Manager | Description |
|----------------|-------------|
| `FlowLayout` | Default for `Panel` — components arranged left to right |
| `BorderLayout` | Default for `Frame`/`JFrame` — divides into 5 regions |
| `GridLayout` | Arranges components in a grid (rows × columns) |
| `BoxLayout` | Arranges components in a single row or column |
| `CardLayout` | Shows one component at a time (like cards) |
| `GridBagLayout` | Most flexible — fine-grained control over placement |
| `null` | No layout manager — absolute positioning |

---

### Examples

#### FlowLayout
```java
import java.awt.*;

Frame f = new Frame("Demo");
f.setLayout(new FlowLayout());
f.add(new Button("OK"));
f.add(new Button("Cancel"));
f.setSize(300, 200);
f.setVisible(true);
```

#### BorderLayout
```java
JFrame frame = new JFrame();
frame.setLayout(new BorderLayout());
frame.add(new JButton("North"),  BorderLayout.NORTH);
frame.add(new JButton("South"),  BorderLayout.SOUTH);
frame.add(new JButton("East"),   BorderLayout.EAST);
frame.add(new JButton("West"),   BorderLayout.WEST);
frame.add(new JButton("Center"), BorderLayout.CENTER);
```

#### GridLayout
```java
JPanel panel = new JPanel();
panel.setLayout(new GridLayout(2, 3)); // 2 rows, 3 columns
for (int i = 1; i <= 6; i++) {
    panel.add(new JButton("Btn " + i));
}
```

#### Removing Layout (Absolute Positioning)
```java
panel.setLayout(null);
JButton btn = new JButton("Click Me");
btn.setBounds(50, 100, 120, 30); // x, y, width, height
panel.add(btn);
```

---

### Key Points
- Every container has a **default layout** (e.g., `JFrame` → `BorderLayout`, `JPanel` → `FlowLayout`)
- Calling `setLayout(null)` enables **manual (absolute) positioning** using `setBounds()`
- You can call `setLayout()` **before** adding components to ensure proper arrangement

---

<br>

# Question 10
## 📌 What Is the Immediate Superclass of the Applet Class?

### Answer
The **`Panel`** class is the immediate superclass of the **`Applet`** class.

---

### Java AWT Class Hierarchy

```
java.lang.Object
    └── java.awt.Component
            └── java.awt.Container
                    └── java.awt.Panel           ← Immediate superclass of Applet
                            └── java.applet.Applet
                                    └── javax.swing.JApplet  (Swing version)
```

---

### What Is the Applet Class?

The `Applet` class (in `java.applet` package) is used to create **applets** — small Java programs that were embedded in web browsers. Although applets are now **deprecated** (since Java 9) and removed in newer versions, they were a major feature of early Java web development.

---

### Class Details

| Class | Package | Purpose |
|-------|---------|---------|
| `Object` | `java.lang` | Root of all Java classes |
| `Component` | `java.awt` | Basic visual element with paint/event handling |
| `Container` | `java.awt` | Can hold other components |
| `Panel` | `java.awt` | Simplest container; uses `FlowLayout` by default |
| `Applet` | `java.applet` | Base class for Java applets |

---

### Why Does Applet Extend Panel?
Since `Applet` extends `Panel` (which extends `Container`), an applet:
- Can **contain other AWT components** (buttons, text fields, etc.)
- Has its own **display area** for painting
- Uses **FlowLayout** by default (inherited from `Panel`)
- Can respond to **events** (inherited from `Component`)

---

### Applet Life Cycle Methods

```java
import java.applet.Applet;
import java.awt.Graphics;

public class MyApplet extends Applet {

    public void init()    { /* Called once when applet loads */ }
    public void start()   { /* Called each time applet becomes visible */ }
    public void paint(Graphics g) {
        g.drawString("Hello, Applet!", 50, 50);
    }
    public void stop()    { /* Called when applet is hidden */ }
    public void destroy() { /* Called when applet is removed */ }
}
```

### Life Cycle Flow

```
init() → start() → paint()/update()
                         ↓
                       stop()
                         ↓
                      destroy()
```

> 💡 **Note:** Java Applets are **deprecated since Java 9** and fully removed in **Java 17**. Modern Java uses **JavaFX** or web-based technologies for GUI applications.

---

<br>

---

## 📝 Quick Revision Summary

| # | Question | Key Answer |
|---|----------|------------|
| Q06 | Five features of Java | Object-Oriented, Platform Independent, Robust, Interpreted, Multi-threaded |
| Q07 | Method Overloading | Same method name, different parameters — compile-time polymorphism |
| Q08 | Package statement location | Must be the **first line** in source file (comments/blanks allowed before it) |
| Q09 | Container layout method | `setLayout()` — used with layout managers like `FlowLayout`, `BorderLayout`, `GridLayout` |
| Q10 | Immediate superclass of Applet | `Panel` class (`java.awt.Panel`) |

---

> 💡 **Tip:** These are classic Java theory questions often asked in university exams and entry-level interviews. Make sure you understand the concepts, not just memorize the answers!
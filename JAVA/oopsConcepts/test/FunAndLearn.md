# ☕ OOP Learning Journey — Java

> A question-by-question OOP practice log. Each topic is practiced until fully understood before moving on.

---

## 📚 Topics Roadmap

| # | Topic | Status |
|---|-------|--------|
| 1 | Class & Object | ✅ Mastered |
| 2 | Method | 🔜 Up Next |
| 3 | Constructor | ⏳ Pending |
| 4 | Encapsulation | ⏳ Pending |
| 5 | Inheritance | ⏳ Pending |
| 6 | Polymorphism | ⏳ Pending |
| 7 | Abstraction | ⏳ Pending |
| 8 | Interface | ⏳ Pending |
| 9 | Abstract Class | ⏳ Pending |
| 10 | Overloading & Overriding | ⏳ Pending |
| 11 | this, super, static, final | ⏳ Pending |
| 12 | Association, Aggregation, Composition | ⏳ Pending |

---

## 📌 Topic 1: Class & Object

### 💡 Core Concept

> A **class** is a blueprint. An **object** is what you build from that blueprint.
> Multiple objects created from the same class are **independent** of each other.
> Uninitialized fields get **default values** (`null` for objects, `0` for int, `false` for boolean).

---

### ❓ Question 1

```java
class Dog {
    String name = "Bruno";
    int age = 3;
}

public class Main {
    public static void main(String[] args) {
        Dog d1 = new Dog();
        Dog d2 = new Dog();

        d1.name = "Max";

        System.out.println(d1.name);
        System.out.println(d2.name);
    }
}
```

**My Answer:**
```
Max
Bruno
```
> Because in the main class we changed the `d1` reference object's name, that's why `d2` still has the original value.

**Verdict: ✅ Correct**

**What I learned:**
> `d1` and `d2` are two separate objects in memory. Each has its own copy of `name` and `age`. Changing `d1.name` only affects `d1` — `d2` still holds the default `"Bruno"` from the class blueprint.

---

### ❓ Question 2

```java
class Car {
    String brand = "Toyota";

    void showBrand() {
        System.out.println("Brand: " + brand);
    }
}

public class Main {
    public static void main(String[] args) {
        Car c1 = new Car();
        Car c2 = new Car();

        c2.brand = "Honda";

        c1.showBrand();
        c2.showBrand();
    }
}
```

**My Answer:**
```
Brand: Toyota
Brand: Honda
```
> Both `c1` and `c2` use the same `showBrand()` method — this is the concept of method overriding, right?

**Verdict: ⚠️ Output Correct — Concept Wrong**

**What I learned:**
> This is **not** method overriding. Method overriding comes with Inheritance. What's happening here is simpler: `showBrand()` prints the `brand` field of whichever **object** called it. Same method, different object, different data. A **method** is shared from the class blueprint, but the **data (fields)** it works on belongs to each object individually.

---

### ❓ Question 3

```java
class Student {
    String name;
    int marks;
}

public class Main {
    public static void main(String[] args) {
        Student s1 = new Student();
        System.out.println(s1.name);
        System.out.println(s1.marks);
    }
}
```

**My Answer:**
```
null
0
```
> Because when an object is created, a default constructor is executed and initializes `null` and `0`.

**Verdict: ✅ Correct + Bonus Concept!**

**Default Values Cheat Sheet:**

| Data Type | Default Value |
|-----------|---------------|
| `int`, `long`, `short` | `0` |
| `double`, `float` | `0.0` |
| `boolean` | `false` |
| `String` / any Object | `null` |

---

### ❓ Question 4

```java
class Box {
    int length = 10;
    int width = 5;

    void showArea() {
        System.out.println("Area: " + (length * width));
    }
}

public class Main {
    public static void main(String[] args) {
        Box b1 = new Box();
        Box b2 = new Box();

        b1.length = 20;
        b2.width = 2;

        b1.showArea();
        b2.showArea();
    }
}
```

**My Answer:**
```
Area: 100
Area: 20
```
> `b1` and `b2` are objects of the `Box` class. They are also called reference type objects. They do not affect each other.

**Verdict: ✅ Correct**

**What I learned:**
> `b1` is a **reference variable** — it holds the **address** of the object in memory. The actual object lives in **Heap memory**. `b1` and `b2` point to **different addresses**, so they never affect each other.

---

### ❓ Question 5 — 🔥 Tricky (Reference Trap)

```java
class Person {
    String name;
    int age;

    void introduce() {
        System.out.println("Hi, I am " + name + " and I am " + age + " years old.");
    }
}

public class Main {
    public static void main(String[] args) {
        Person p1 = new Person();
        Person p2 = p1;

        p1.name = "Alice";
        p1.age = 25;

        p2.name = "Bob";

        p1.introduce();
        p2.introduce();
    }
}
```

**My Answer:**
```
Hi, I am Alice and I am 25 years old.
Hi, I am Bob and I am 25 years old.
```
> `p1` and `p2` share the same object because `p2` is a reference variable which holds the reference of `p1`'s object, and now if you change the `p2` name, it will affect `p1` too.

**Verdict: ⚠️ Concept Correct — Output Wrong**

**Correct Output:**
```
Hi, I am Bob and I am 25 years old.
Hi, I am Bob and I am 25 years old.
```

**Memory Diagram:**
```
Before p2.name = "Bob":
p1 ──┐
     ├──→ [ name="Alice", age=25 ]
p2 ──┘

After p2.name = "Bob":
p1 ──┐
     ├──→ [ name="Bob", age=25 ]
p2 ──┘
```

**What I learned:**
> `Person p2 = p1` does **NOT** create a new object. Both variables point to the **same object** — so any change through `p2` also reflects in `p1`. This is called a **Reference Copy / Shallow Copy**.

---

### ❓ Question 6

```java
class Bike {
    String color = "Red";
}

public class Main {
    public static void main(String[] args) {
        Bike b1 = new Bike();
        Bike b2 = new Bike();
        Bike b3 = b1;

        b3.color = "Blue";
        b2.color = "Green";

        System.out.println(b1.color);
        System.out.println(b2.color);
        System.out.println(b3.color);
    }
}
```

**My Answer:**
```
Blue
Green
Blue
```

**Verdict: ✅ Perfect!**

**Key Rule:**

| Code | New Object? |
|------|-------------|
| `Bike b2 = new Bike()` | ✅ Yes — separate object |
| `Bike b3 = b1` | ❌ No — same object, new reference |

---

### ❓ Question 7

```java
class Counter {
    int count = 0;

    void increment() {
        count = count + 1;
    }

    void showCount() {
        System.out.println("Count: " + count);
    }
}

public class Main {
    public static void main(String[] args) {
        Counter c1 = new Counter();
        Counter c2 = new Counter();
        Counter c3 = c1;

        c1.increment();
        c1.increment();
        c3.increment();
        c2.increment();

        c1.showCount();
        c2.showCount();
        c3.showCount();
    }
}
```

**My Answer:**
```
Count: 3
Count: 1
Count: 3
```
> There are only **2 actual objects** in memory. `c3` is just a reference variable pointing to the same object as `c1`.

**Verdict: ✅ Correct — Both Output and Object Count!**

---

### ❓ Question 8 — 🏆 Ultimate Challenge

```java
class BankAccount {
    String owner;
    int balance = 1000;

    void deposit(int amount) {
        balance = balance + amount;
    }

    void withdraw(int amount) {
        balance = balance - amount;
    }

    void showBalance() {
        System.out.println(owner + " : " + balance);
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount acc1 = new BankAccount();
        BankAccount acc2 = new BankAccount();
        BankAccount acc3 = acc1;

        acc1.owner = "Alice";
        acc2.owner = "Bob";

        acc1.deposit(500);
        acc3.withdraw(200);
        acc2.deposit(300);
        acc3.owner = "Charlie";

        acc1.showBalance();
        acc2.showBalance();
        acc3.showBalance();
    }
}
```

**My Answer:**
```
Charlie : 1300
Bob : 1300
```
> `acc1` and `acc3` are sharing the same object living in the heap, with their address stored in the stack. If `acc3` is affected, `acc1` is too. There are only **2 objects** — the third one is just a reference variable.

**Verdict: ⚠️ Concept Perfect — Missed the third print line**

**Correct Output:**
```
Charlie : 1300
Bob : 1300
Charlie : 1300
```

**Memory Trace:**

| Action | Effect |
|--------|--------|
| `acc1.deposit(500)` | Object1 balance → 1500 |
| `acc3.withdraw(200)` | Object1 balance → 1300 (same object as acc1!) |
| `acc2.deposit(300)` | Object2 balance → 1300 |
| `acc3.owner = "Charlie"` | Object1 owner → "Charlie" (affects acc1 too!) |

```
acc1 ──┐
       ├──→ Object1 [ owner="Charlie", balance=1300 ]
acc3 ──┘

acc2 ───→ Object2 [ owner="Bob", balance=1300 ]
```

---

## 🏆 Topic 1 Scorecard — Class & Object

| Question | Result | Note |
|----------|--------|------|
| Q1 — Basic Output | ✅ | Clean |
| Q2 — Method on Objects | ⚠️ | Output right, confused with method overriding |
| Q3 — Default Values | ✅ | Even mentioned default constructor! |
| Q4 — Independent Objects | ✅ | Used correct term "reference type object" |
| Q5 — Reference Trap | ⚠️ | Concept right, output wrong |
| Q6 — Reference vs New Object | ✅ | Nailed it |
| Q7 — Combined Concepts | ✅ | Got output and object count |
| Q8 — Ultimate Challenge | ⚠️ | Concept perfect, missed one print line |

---

## 💡 Key Takeaways — Class & Object

| Concept | Summary |
|---------|---------|
| Class vs Object | Class is blueprint, Object is instance |
| Independent Objects | Each `new` creates a separate object in heap |
| Reference Copy | `b = a` means same object, not a new one |
| Default Values | `null` for objects, `0` for int, `false` for boolean |
| Stack & Heap | Reference variables live in Stack, Objects live in Heap |

---

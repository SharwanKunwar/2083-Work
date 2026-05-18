bash

cat > /mnt/user-data/outputs/OOP_Learning_Journey.md << 'ENDOFFILE'
# ☕ OOP Learning Journey — Java

> A question-by-question OOP practice log.
> Each topic is practiced until fully understood before moving on.
> Answers are kept as-is (with grammar corrections) to show real learning progress. ✍️

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

| Concept | Summary |
|---------|---------|
| Class | A blueprint — defines fields and methods |
| Object | An instance built from the blueprint |
| Independence | Each `new` creates a separate object in heap |
| Reference Copy | `b = a` means same object, NOT a new one |
| Default Values | `null` for objects, `0` for int, `false` for boolean |
| Stack & Heap | Reference variables live in Stack, Objects live in Heap |
| Null | Disconnects the reference — does NOT destroy the object |
| NullPointerException | Calling a method on null crashes the program |
| Garbage Collection | Object is GC eligible when zero references point to it |

---

## 🧪 Practice Questions

---

### ❓ Q1 — Basic Output

**Question asked:**
> What will this code print? And WHY?

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
> Because in the main class we changed the d1 reference object's name, that's why d2 still has the original value.

**Verdict: ✅ Correct**

**What I Learned:**
> `d1` and `d2` are two separate objects in memory. Each has its own copy of `name` and `age`.
> Changing `d1.name` only affects `d1` — `d2` still holds `"Bruno"` from the class blueprint.

---

### ❓ Q2 — Shared Method, Own Data

**Question asked:**
> What will this print?
> Both `c1` and `c2` use the same `showBrand()` method — but they print different values. Why?

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
> Both c1 and c2 use the same showBrand() method — this is the concept of method overriding, right?

**Verdict: ⚠️ Output Correct — Concept Wrong**

**What I Learned:**
> This is **NOT** method overriding — that comes with Inheritance.
> `showBrand()` simply prints the `brand` field of whichever **object** called it.
> A method is shared from the class blueprint, but the **data it works on** belongs to each object individually.

---

### ❓ Q3 — Default Values

**Question asked:**
> What will this print and why?

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
> Because when an object is created, a default constructor is executed and initializes null and 0.

**Verdict: ✅ Correct + Bonus Concept!**

**Default Values Cheat Sheet:**

| Data Type | Default Value |
|-----------|---------------|
| `int`, `long`, `short` | `0` |
| `double`, `float` | `0.0` |
| `boolean` | `false` |
| `String` / any Object | `null` |

---

### ❓ Q4 — Independent Objects

**Question asked:**
> 1. What is the output?
> 2. What are `b1` and `b2` — and do they affect each other?

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
> b1 and b2 are objects of the Box class. They are also called reference type objects. They do not affect each other.

**Verdict: ✅ Correct**

**What I Learned:**
> `b1` is a **reference variable** — it holds the **address** of the object in heap memory.
> `b1` and `b2` point to **different addresses**, so they never affect each other.

---

### ❓ Q5 — Reference Trap (Shallow Copy)

**Question asked:**
> What will this print? (Hint: This is a trap — think carefully!)

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
> p1 and p2 share the same object because p2 is a reference variable which holds the reference of p1's object,
> and if you change p2's name, it will affect p1 too.

**Verdict: ⚠️ Concept Correct — Output Wrong**

**Correct Output:**
```
Hi, I am Bob and I am 25 years old.
Hi, I am Bob and I am 25 years old.
```

**Memory Diagram:**
```
Before p2.name = "Bob":        After p2.name = "Bob":
p1 ──┐                         p1 ──┐
     ├──→ [ Alice, 25 ]              ├──→ [ Bob, 25 ]
p2 ──┘                         p2 ──┘
```

**What I Learned:**
> `Person p2 = p1` does NOT create a new object.
> Both point to the **same object** — any change through `p2` reflects in `p1` too.
> This is called a **Reference Copy / Shallow Copy**.

---

### ❓ Q6 — new vs = Reference

**Question asked:**
> What is the output?

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
| `Bike b2 = new Bike()` | ✅ Yes — separate object in heap |
| `Bike b3 = b1` | ❌ No — same object, new reference only |

---

### ❓ Q7 — Methods + References

**Question asked:**
> 1. What is the output?
> 2. How many actual objects are created in memory?

```java
class Counter {
    int count = 0;

    void increment() { count = count + 1; }

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
> There are only 2 actual objects in memory. c3 is just a reference variable pointing to the same object as c1.

**Verdict: ✅ Correct — Both Output and Object Count!**

---

### ❓ Q8 — BankAccount Challenge

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. What is `acc1.owner` at the end — "Alice" or "Charlie" and why?

```java
class BankAccount {
    String owner;
    int balance = 1000;

    void deposit(int amount) { balance = balance + amount; }
    void withdraw(int amount) { balance = balance - amount; }

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
> acc1 and acc3 are sharing the same object living in the heap, with their address stored in the stack.
> If acc3 is affected, acc1 is too. There are only 2 objects — the third one is just a reference variable.

**Verdict: ⚠️ Concept Perfect — Missed the third print line**

**Correct Output:**
```
Charlie : 1300
Bob : 1300
Charlie : 1300
```

**Memory & Trace:**
```
acc1 ──┐
       ├──→ Object1 [ owner="Charlie", balance=1300 ]
acc3 ──┘
acc2 ───→ Object2 [ owner="Bob", balance=1300 ]
```

| Action | Effect |
|--------|--------|
| `acc1.deposit(500)` | Object1 balance → 1500 |
| `acc3.withdraw(200)` | Object1 balance → 1300 |
| `acc2.deposit(300)` | Object2 balance → 1300 |
| `acc3.owner = "Charlie"` | Object1 owner → "Charlie" |

---

### ❓ Q9 — Double Reference Trap

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. Draw the memory picture — who points to what?

```java
class Laptop {
    String brand;
    int ram;

    void showSpec() {
        System.out.println(brand + " - " + ram + "GB");
    }
}

public class Main {
    public static void main(String[] args) {
        Laptop l1 = new Laptop();
        Laptop l2 = new Laptop();
        Laptop l3 = l2;
        Laptop l4 = l1;
        l1.brand = "Dell"; l1.ram = 16;
        l2.brand = "HP";   l2.ram = 8;
        l4.brand = "Apple";
        l3.ram = 32;
        l1.showSpec();
        l2.showSpec();
        l3.showSpec();
        l4.showSpec();
    }
}
```

**My Answer:**
```
Apple - 16GB
HP - 32GB
Apple - 16GB   ← (said Apple instead of HP — wrong!)
```
> There are only 2 actual objects. l1 and l4 share the same address, l2 and l3 share the same memory.

**Verdict: ⚠️ Object Count & Memory Perfect — l3 output wrong**

**Correct Output:**
```
Apple - 16GB   ← l1 (Object1)
HP - 32GB      ← l2 (Object2)
HP - 32GB      ← l3 (same as Object2!)
Apple - 16GB   ← l4 (same as Object1!)
```

**Memory Picture:**
```
l1 ──┐
     ├──→ Object1 [ brand="Apple", ram=16 ]
l4 ──┘

l2 ──┐
     ├──→ Object2 [ brand="HP", ram=32 ]
l3 ──┘
```

**What I Learned:**
> I understood the memory picture perfectly but didn't apply it to l3.
> Always trace output using your memory diagram — don't skip steps!

---

### ❓ Q10 — Double Swap Trap

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. What happened to p1 and p2 after the swap?

```java
class Phone {
    String model;
    int battery;

    void showInfo() {
        System.out.println(model + " : " + battery + "%");
    }
}

public class Main {
    public static void main(String[] args) {
        Phone p1 = new Phone();
        Phone p2 = new Phone();
        p1.model = "iPhone";  p1.battery = 100;
        p2.model = "Samsung"; p2.battery = 80;
        Phone temp = p1;
        p1 = p2;
        p2 = temp;
        p1.showInfo();
        p2.showInfo();
    }
}
```

**My Answer:**
```
Samsung : 80%
iPhone : 100%
```
> There are 2 objects. p1's reference is swapped with p2's.
>
> Workflow: First p1's reference is saved to temp, then p2's reference is assigned to p1,
> and finally temp (old p1) is assigned to p2.

**Verdict: ✅ 100% Perfect!**

**Memory Trace:**
```
Step 1: temp = p1 → temp & p1 both point to Object1 [iPhone]
Step 2: p1 = p2  → p1 now points to Object2 [Samsung]
Step 3: p2 = temp → p2 now points to Object1 [iPhone]

Final:
p1 ───→ Object2 [ Samsung, 80 ]
p2 ───→ Object1 [ iPhone, 100 ]
```

> Key Insight: The **objects never moved** — only the **references got swapped!**

---

### ❓ Q11 — Null Trap

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. What happens when we do `a1 = null`? Does it destroy the object?

```java
class Animal {
    String name;
    String sound;

    void makeSound() {
        System.out.println(name + " says " + sound);
    }
}

public class Main {
    public static void main(String[] args) {
        Animal a1 = new Animal();
        Animal a2 = new Animal();
        Animal a3 = a1;
        a1.name = "Dog"; a1.sound = "Woof";
        a2.name = "Cat";
        a3.sound = "Meow";
        a1 = null;
        a1.makeSound();
        a2.makeSound();
        a3.makeSound();
    }
}
```

**My Answer:**
```
null
null
null
```
> a1 = null destroys the object and affects a3 too because they share the same memory reference.

**Verdict: ❌ All 3 Needed Correction**

**Correct Output:**
```
💥 Exception in thread "main" java.lang.NullPointerException
```

**Memory after `a1 = null`:**
```
a1 ──→ null
a3 ──→ Object1 [ "Dog", "Meow" ]  ← still alive!
a2 ──→ Object2 [ "Cat", null ]
```

**What I Learned:**

| Concept | Rule |
|---------|------|
| `a1 = null` | Only disconnects the reference — object lives on in heap |
| `a1.makeSound()` after null | 💥 NullPointerException — crashes immediately! |
| Object destruction | Only when ZERO references point to it — GC removes it |

> 🔥 Golden Rule: **null kills the reference — not the object!**

---

### ❓ Q12 — Garbage Collector Trap

**Question asked:**
> 1. How many objects are eligible for Garbage Collection?
> 2. Which object is eligible and why?
> 3. What is the output?
> 4. Which line crashes and why?

```java
class Robot {
    String name;

    void showName() {
        System.out.println("Robot: " + name);
    }
}

public class Main {
    public static void main(String[] args) {
        Robot r1 = new Robot();
        Robot r2 = new Robot();
        Robot r3 = new Robot();
        r1.name = "Atlas";
        r2.name = "Sophia";
        r3.name = "Optimus";
        r2 = r1;
        r3 = r1;
        r1 = null;
        r1.showName();
        r2.showName();
        r3.showName();
    }
}
```

**My Answer:**
> No objects are GC eligible because r1 = null only removes r1's reference,
> and r2 and r3 still hold that reference address.
> r1.showName() crashes because r1 doesn't have an address.

**Verdict: ⚠️ Crash Line Correct — GC Answer Wrong**

**Correct Answer:**

| Reference | Points To | GC Eligible? |
|-----------|-----------|--------------|
| `r1` | null | — |
| `r2` | Atlas | ❌ No |
| `r3` | Atlas | ❌ No |
| Sophia object | nothing | ✅ Yes! |
| Optimus object | nothing | ✅ Yes! |

**Memory Picture:**
```
r1 ───→ null
r2 ──┐
     ├──→ Object1 [ Atlas ] ← still alive
r3 ──┘
Object2 [ Sophia  ] ← 🗑️ GC Eligible!
Object3 [ Optimus ] ← 🗑️ GC Eligible!
```

**What I Learned:**
> I focused only on `r1 = null` but missed that `r2 = r1` and `r3 = r1` already
> orphaned Sophia and Optimus BEFORE the null assignment!
> An object becomes GC eligible the moment NO reference points to it!

---

### ❓ Q13 — The Full Package

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are eligible for Garbage Collection?
> 4. Draw the memory picture after all assignments!

```java
class House {
    String owner;
    int rooms;

    void showInfo() {
        System.out.println(owner + " has " + rooms + " rooms");
    }
}

public class Main {
    public static void main(String[] args) {
        House h1 = new House();
        House h2 = new House();
        House h3 = new House();
        House h4 = h1;
        h1.owner = "Alice"; h1.rooms = 3;
        h2.owner = "Bob";   h2.rooms = 5;
        h3.owner = "Charlie"; h3.rooms = 2;
        h4.rooms = 10;
        h2 = h3;
        h3 = null;
        h1.showInfo();
        h2.showInfo();
        h3.showInfo();
        h4.showInfo();
    }
}
```

**My Answer:**
> h1 → Alice has 10 rooms, h2 → Charlie has 2 rooms, h3 hits NullPointerException and program crashes.
> 3 actual objects. 1 object is GC eligible.
> h1 has its own reference, h2 has h3's reference, h3 is null so it doesn't have any reference address.

**Verdict: ✅ All 4 Perfect!**

**Memory Picture:**
```
h1 ──┐
     ├──→ Object1 [ "Alice", rooms=10 ] ← alive
h4 ──┘
h2 ───→ Object3 [ "Charlie", rooms=2 ] ← alive
h3 ───→ null
Object2 [ "Bob", rooms=5 ] ← 🗑️ GC Eligible!
```

**Output:**
```
Alice has 10 rooms
Charlie has 2 rooms
💥 NullPointerException ← h3 is null!
// h4 never executes
```

---

### ❓ Q14 — Chain Reaction

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many unique objects does s5 share with s1?
> 4. Draw the memory picture — who points to what?
> (Hint: There is a chain — s3 = s1 and s5 = s3!)

```java
class Student {
    String name;
    int marks;

    void promote() { marks = marks + 10; }

    void showResult() {
        System.out.println(name + " : " + marks);
    }
}

public class Main {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = s1;
        Student s4 = s2;
        Student s5 = s3;
        s1.name = "Alice"; s1.marks = 50;
        s2.name = "Bob";   s2.marks = 60;
        s5.promote();
        s5.promote();
        s4.promote();
        s3.name = "Charlie";
        s1.showResult();
        s2.showResult();
        s3.showResult();
        s4.showResult();
        s5.showResult();
    }
}
```

**My Answer:**
```
Charlie : 70
Bob : 80        ← (should be 70 — calculation slip)
Charlie : 70
Bob : 80        ← (should be 70 — calculation slip)
Charlie : 70
```
> 2 actual objects — others are reference type variables.
> s1, s3, s5 all point to same object. s2, s4 point to same object.

**Verdict: ⚠️ Concepts Perfect — s2/s4 score wrong**

**Correct Output:**
```
Charlie : 70
Bob : 70        ← s4.promote() hit Object2 too! 60+10=70
Charlie : 70
Bob : 70
Charlie : 70
```

**Memory Picture:**
```
s1 ──┐
s3 ──┼──→ Object1 [ "Charlie", marks=70 ]
s5 ──┘

s2 ──┐
s4 ──┴──→ Object2 [ "Bob", marks=70 ]
```

| Action | Who It Hits | Result |
|--------|-------------|--------|
| `s5.promote()` x2 | Object1 (s5=s3=s1!) | 50→60→70 |
| `s4.promote()` | Object2 (s4=s2!) | 60→70 |

---

### ❓ Q15 — Reassignment Trap

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are GC eligible?
> 4. Draw memory picture — before AND after `e3 = e2`

```java
class Employee {
    String name;
    int salary;

    void applyBonus() { salary = salary + 5000; }

    void showInfo() {
        System.out.println(name + " earns " + salary);
    }
}

public class Main {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        Employee e2 = new Employee();
        Employee e3 = e1;
        e1.name = "Alice"; e1.salary = 30000;
        e2.name = "Bob";   e2.salary = 40000;
        e3.applyBonus();
        e3 = e2;
        e3.applyBonus();
        e3.name = "Charlie";
        e1.showInfo();
        e2.showInfo();
        e3.showInfo();
    }
}
```

**My Answer:**
```
Alice earns 8000    ← (should be 35000 — calculation slip, confused 30k+5k as 8k)
Charlie earns 45000
Charlie earns 45000
```
> 2 objects. 0 GC eligible.
> Before e3=e2: e1 and e3 point to same object, e2 points to its own.
> After e3=e2: e1 alone, e2 and e3 share same object.

**Verdict: ⚠️ Concepts & Memory Perfect — salary was a calculation slip**

**Correct Output:**
```
Alice earns 35000
Charlie earns 45000
Charlie earns 45000
```

**Memory Picture:**
```
Before e3 = e2:             After e3 = e2:
e1 ──┐                      e1 ───→ Object1 [ Alice, 35000 ]
     ├──→ Object1            e2 ──┐
e3 ──┘                           ├──→ Object2 [ Charlie, 45000 ]
e2 ───→ Object2             e3 ──┘
```

---

### ❓ Q16 — 3-Way Swap Trap

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are GC eligible?
> 4. Draw memory picture — before and after swap!

```java
class Game {
    String player;
    int score;

    void addScore(int points) { score = score + points; }

    void showScore() {
        System.out.println(player + " : " + score);
    }
}

public class Main {
    public static void main(String[] args) {
        Game g1 = new Game();
        Game g2 = new Game();
        Game g3 = new Game();
        g1.player = "Alice";   g1.score = 100;
        g2.player = "Bob";     g2.score = 200;
        g3.player = "Charlie"; g3.score = 300;
        Game temp = g1;
        g1 = g2;
        g2 = g3;
        g3 = temp;
        g1.addScore(50);
        g2.addScore(100);
        g3.addScore(200);
        g1.showScore();
        g2.showScore();
        g3.showScore();
    }
}
```

**My Answer:**
```
Bob : 400      ← (should be 250)
Charlie : 350  ← (should be 400)
Alice : 200    ← (should be 300)
```
> 3 objects. 0 GC eligible.
> After swap: g1→Object2(Bob), g2→Object3(Charlie), g3→Object1(Alice).

**Verdict: ⚠️ Swap Logic Perfect — Score calculations wrong**

**Correct Output:**
```
Bob : 250       ← g1 → Object2 (200+50)
Charlie : 400   ← g2 → Object3 (300+100)
Alice : 300     ← g3 → Object1 (100+200)
```

**Memory Picture:**
```
Before swap:                After swap:
g1 ───→ Object1 [Alice,100] g1 ───→ Object2 [Bob, 250]
g2 ───→ Object2 [Bob, 200]  g2 ───→ Object3 [Charlie, 400]
g3 ───→ Object3 [Charlie,300] g3 ──→ Object1 [Alice, 300]
```

> 🔥 Golden Rule: After a swap, always re-identify who points where BEFORE calculating!

---

### ❓ Q17 — Mixed Bag of Everything

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are GC eligible?
> 4. Which line crashes and why?
> 5. Draw the memory picture after `l2 = null`

```java
class Library {
    String bookName;
    int copies;

    void addCopies(int n) { copies = copies + n; }
    void removeCopies(int n) { copies = copies - n; }

    void showInfo() {
        System.out.println(bookName + " : " + copies + " copies");
    }
}

public class Main {
    public static void main(String[] args) {
        Library l1 = new Library();
        Library l2 = new Library();
        Library l3 = l1;
        l1.bookName = "Java";   l1.copies = 10;
        l2.bookName = "Python"; l2.copies = 20;
        l3.addCopies(5);
        Library temp = l1;
        l1 = l2;
        l2 = temp;
        l1.removeCopies(5);
        l3.addCopies(3);
        l2 = null;
        l1.showInfo();
        l2.showInfo();
        l3.showInfo();
    }
}
```

**My Answer:**
```
Python : 20 copies   ← (should be 15)
```
> 2 objects. 1 GC eligible.
> Crash at `l2 = null` — throws NullPointerException.

**Verdict: ❌ 3 Things Needed Correction**

**Correct Output:**
```
Python : 15 copies
💥 NullPointerException ← at l2.showInfo(), NOT l2=null!
// l3 never executes
```

**Memory after `l2 = null`:**
```
l1 ───→ Object2 [ Python, 15 ] ← alive!
l2 ───→ null
l3 ───→ Object1 [ Java, 18 ]   ← alive!
0 objects GC eligible!
```

**What I Learned:**

| Mistake | Correct Rule |
|---------|-------------|
| Crash at `l2 = null` | Safe! Crash is at `l2.showInfo()` |
| 1 GC eligible | 0 GC eligible — both objects have references |
| Python : 20 | Python : 15 — removeCopies(5) was missed! |

---

### ❓ Q18 — The Final Boss

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are GC eligible and which ones?
> 4. Which line crashes and why?
> 5. Draw the final memory picture after all assignments!

```java
class Hospital {
    String doctorName;
    int patients;

    void admitPatients(int n) { patients = patients + n; }
    void dischargePatients(int n) { patients = patients - n; }

    void showInfo() {
        System.out.println(doctorName + " : " + patients + " patients");
    }
}

public class Main {
    public static void main(String[] args) {
        Hospital h1 = new Hospital();
        Hospital h2 = new Hospital();
        Hospital h3 = new Hospital();
        Hospital h4 = h1;
        h1.doctorName = "Dr. Smith";  h1.patients = 10;
        h2.doctorName = "Dr. Jones";  h2.patients = 20;
        h3.doctorName = "Dr. Brown";  h3.patients = 30;
        h4.admitPatients(5);
        Hospital temp = h2;
        h2 = h3;
        h3 = temp;
        h2.admitPatients(10);
        h4.dischargePatients(3);
        h1 = null;
        h3 = null;
        h1.showInfo();
        h2.showInfo();
        h3.showInfo();
        h4.showInfo();
    }
}
```

**My Answer:**
> NullPointerException at `h1.showInfo()` because h1 is set to null.
> 3 actual objects. 0 GC eligible — h4 still points to h1's object.
> Memory: h1→null, h2→Object2, h3 pointing to h2's object, h4→Object1.

**Verdict: ⚠️ Output & Crash Line Perfect — GC and Memory needed fixes**

**Correct Output:**
```
💥 NullPointerException at h1.showInfo()
// h2, h3, h4 never execute
```

**Final Memory Picture:**
```
h1 ───→ null
h2 ───→ Object3 [ Dr. Brown, 40 ]  ← alive!
h3 ───→ null
h4 ───→ Object1 [ Dr. Smith, 12 ]  ← alive!
Object2 [ Dr. Jones, 20 ] ← 🗑️ GC Eligible!
```

**Patient Trace:**

| Action | Who It Hits | Result |
|--------|-------------|--------|
| `h4.admitPatients(5)` | Object1 (h4=h1!) | 10→15 |
| swap: h2→Object3, h3→Object2 | — | — |
| `h2.admitPatients(10)` | Object3 (Brown) | 30→40 |
| `h4.dischargePatients(3)` | Object1 (Smith) | 15→12 |
| `h3 = null` | Object2 (Jones) orphaned! | 🗑️ GC! |

**What I Learned:**
> After the swap, h3 → Object2 (Jones). When h3 = null, Object2 loses its ONLY reference → GC eligible!
> I missed tracking who h3 pointed to after the swap.

---

### ❓ Q19 — The Grand Finale 🏆

**Question asked:**
> 1. What is the output?
> 2. How many actual objects in memory?
> 3. How many objects are GC eligible and which ones?
> 4. Which line crashes and why?
> 5. Draw the final memory picture after all assignments!
> 6. What is Alice's final balance — step by step?

```java
class Bank {
    String accountHolder;
    int balance;

    void deposit(int amount) { balance = balance + amount; }
    void withdraw(int amount) { balance = balance - amount; }

    void showInfo() {
        System.out.println(accountHolder + " : Rs." + balance);
    }
}

public class Main {
    public static void main(String[] args) {
        Bank b1 = new Bank();
        Bank b2 = new Bank();
        Bank b3 = new Bank();
        Bank b4 = b1;
        Bank b5 = b3;
        b1.accountHolder = "Alice";   b1.balance = 5000;
        b2.accountHolder = "Bob";     b2.balance = 8000;
        b3.accountHolder = "Charlie"; b3.balance = 3000;
        b4.deposit(2000);
        b5.withdraw(1000);
        Bank temp = b1;
        b1 = b2;
        b2 = temp;
        b1.deposit(1000);
        b2.withdraw(500);
        b3 = null;
        b4 = null;
        b5 = null;
        b2 = null;
        b1.showInfo();
        b2.showInfo();
        b3.showInfo();
    }
}
```

**My Answer:**
```
Bob : Rs.9000
💥 NullPointerException at b2.showInfo()
```
> 3 objects. 2 GC eligible — Object1 (Alice) and Object3 (Charlie) because all their references are null.
> Crash at `b2.showInfo()` — b2 is null.
> Alice: 5000 → b4 deposit +2000 = 7000 → after swap b2 withdraw -500 = 6500.

**Verdict: ✅ All 6 Questions Perfect! 🏆**

**Final Memory Picture:**
```
b1 ───→ Object2 [ Bob, 9000 ]     ← only survivor!
b2 ───→ null
b3 ───→ null
b4 ───→ null
b5 ───→ null
Object1 [ Alice, 6500 ]   ← 🗑️ GC Eligible!
Object3 [ Charlie, 2000 ] ← 🗑️ GC Eligible!
```

**Balance Trace:**

| Action | Who It Hits | Calculation | Result |
|--------|-------------|-------------|--------|
| `b1.balance = 5000` | Object1 (Alice) | — | 5000 |
| `b2.balance = 8000` | Object2 (Bob) | — | 8000 |
| `b3.balance = 3000` | Object3 (Charlie) | — | 3000 |
| `b4.deposit(2000)` | Object1 (b4=b1!) | 5000+2000 | 7000 |
| `b5.withdraw(1000)` | Object3 (b5=b3!) | 3000-1000 | 2000 |
| swap: b1→Object2, b2→Object1 | — | — | — |
| `b1.deposit(1000)` | Object2 (Bob) | 8000+1000 | 9000 |
| `b2.withdraw(500)` | Object1 (Alice) | 7000-500 | 6500 |

---

## 🏆 Complete Scorecard — All 19 Questions

| # | Question | Topic Tested | Result |
|---|----------|-------------|--------|
| Q1 | Dog Names | Independent objects | ✅ |
| Q2 | Car Brand | Shared method, own data | ⚠️ Output right, wrong concept |
| Q3 | Student Fields | Default values | ✅ Bonus concept! |
| Q4 | Box Area | Reference variable | ✅ |
| Q5 | Person Introduce | Shallow copy trap | ⚠️ Concept right, output wrong |
| Q6 | Bike Color | new vs = | ✅ |
| Q7 | Counter | Reference + methods | ✅ |
| Q8 | BankAccount | Full combined | ⚠️ Missed one print line |
| Q9 | Laptop Specs | Double reference pairs | ⚠️ l3 output wrong |
| Q10 | Phone Swap | Temp swap logic | ✅ Perfect! |
| Q11 | Animal Null | NullPointerException | ❌ Null misconception |
| Q12 | Robot GC | Garbage Collection | ⚠️ Missed orphaned objects |
| Q13 | House Full | Everything combined | ✅ Perfect! |
| Q14 | Chain Reaction | Chain references | ⚠️ Concept perfect, s2/s4 calc wrong |
| Q15 | Reassignment Trap | Reference switch | ⚠️ Memory perfect, salary calc slip |
| Q16 | 3-Way Swap | Triple rotation | ⚠️ Swap logic perfect, scores wrong |
| Q17 | Mixed Bag | Swap + null + GC | ❌ Crash line + GC + score wrong |
| Q18 | Final Boss | Everything combined | ⚠️ Output perfect, GC missed |
| Q19 | Grand Finale | Absolute hardest | ✅ All 6 Perfect! 🏆 |

---

## 💡 Final Key Takeaways — Class & Object

| Concept | Rule |
|---------|------|
| Class vs Object | Class is blueprint, Object is instance |
| Independent Objects | Each `new` = new object in heap |
| Reference Copy | `b = a` = same object, NOT new |
| Default Values | `null`, `0`, `false` for uninitialized fields |
| Stack & Heap | References in Stack, Objects in Heap |
| Chain References | `s5=s3=s1` — all three hit the same object |
| Reference Switch | `e3=e2` leaves old object, points to new one |
| 3-Way Swap | Re-identify who points where BEFORE calculating |
| `x = null` | Safe — just disconnects the reference |
| `x.method()` on null | 💥 NullPointerException — crashes! |
| GC Rule | Object dies only when ZERO references point to it |
| Calculation Care | Always trace step by step — never in your head! |

---

> 📝 *This README is generated from a live Q&A learning session.*
> *Answers are kept as-is (with grammar corrections) to reflect real 
learning progress and mistakes.*
> *Topic 1: Class & Object — Fully Mastered ✅*

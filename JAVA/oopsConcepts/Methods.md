# ☕ OOP Learning Journey — Java

> A question-by-question OOP practice log.
> Each topic is practiced until every important concept is covered.
> Answers are kept as-is (with grammar corrections) to show real learning progress. ✍️

---

## 📚 Topics Roadmap

| # | Topic | Status |
|---|-------|--------|
| 1 | Class & Object | ✅ Mastered |
| 2 | Method | ✅ Mastered |
| 3 | Constructor | 🔜 Up Next |
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

## 📌 Topic 2: Methods

### 💡 Core Concept

> A **method** is a block of code inside a class that performs a specific task.
> It runs only when **called**.

| Concept | Summary |
|---------|---------|
| **Parameter** | Variable in the method definition → `int a, int b` |
| **Argument** | Actual value passed when calling the method → `c.add(10, 20)` |
| **return** | Sends a value back to the caller — method stops immediately |
| **void** | Method performs a task but returns nothing |
| **Return Type** | The data type a method returns — `int`, `String`, `boolean`, etc. |
| **Internal Method Call** | A method calling another method inside the same class |
| **Unreachable Code** | Code written after `return` — Java throws a Compile Error |
| **Object as Argument** | Java passes the reference — same object, not a copy |
| **Returning an Object** | Method returns the reference of the object, not the object itself |

---

## 🧪 Practice Questions

---

### ❓ Q1 — Return Type vs Void

**Question asked:**
> What will this print and why?
> Notice — `add()` has a return type of `int` and `showResult()` has `void`. What is the difference?

```java
class Calculator {
    int add(int a, int b) {
        return a + b;
    }

    void showResult(int result) {
        System.out.println("Result: " + result);
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        int sum = c.add(10, 20);
        c.showResult(sum);
    }
}
```

**My Answer:**
```
Result: 30
```
> We are passing 10 and 20 to the `add()` method. That method adds them and returns an `int`,
> which we store in `sum`. Then we pass `sum` to `showResult()`, which doesn't return anything
> — it just prints the result.

**Verdict: ✅ 100% Perfect — Output, Explanation, and void vs return!**

**What I Learned:**

| Term | Meaning |
|------|---------|
| **Parameter** | Variable in method definition → `int a, int b` |
| **Argument** | Actual value passed when calling → `c.add(10, 20)` |
| **return** | Sends a value back to the caller |
| **void** | Method does something but sends nothing back |

---

### ❓ Q2 — Boolean Return + Internal Method Call

**Question asked:**
> 1. What will this print?
> 2. `showStatus()` calls `isPassed()` from inside itself — what do we call that?

```java
class Student {
    String name;
    int marks;

    boolean isPassed() {
        return marks >= 50;
    }

    void showStatus() {
        if (isPassed()) {
            System.out.println(name + " : Passed");
        } else {
            System.out.println(name + " : Failed");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        s1.name = "Alice"; s1.marks = 75;
        s2.name = "Bob";   s2.marks = 30;
        s1.showStatus();
        s2.showStatus();
    }
}
```

**My Answer:**
```
Alice : Passed
Bob : Failed
```
> I didn't know what calling a method inside another method is called.

**Verdict: ✅ Output Correct — Learned new concept!**

**What I Learned:**
> When one method calls another method inside the same class, it is called an **Internal Method Call**.

| Scenario | Example |
|----------|---------|
| Calling method **inside same class** | `isPassed()` called inside `showStatus()` |
| Calling method **from outside** | `s1.showStatus()` called from `main` |

> Methods can call other methods — they don't have to do everything themselves.
> This keeps code **clean and reusable!**

---

### ❓ Q3 — Multiple Return Types + Return Behavior

**Question asked:**
> 1. What will this print?
> 2. A method can `return` in the middle — what happens to the rest of the method after `return`?

```java
class Circle {
    double radius;

    double getArea() {
        return 3.14 * radius * radius;
    }

    String getSize() {
        if (radius > 5) {
            return "Large";
        } else {
            return "Small";
        }
    }

    void showInfo() {
        System.out.println("Area: " + getArea());
        System.out.println("Size: " + getSize());
    }
}

public class Main {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.radius = 7;
        c1.showInfo();
    }
}
```

**My Answer:**
```
Area: 153.86
Size: Large
```
> `getArea()` and `getSize()` are called inside `showInfo()` — method calling method.
> After `return`, control goes back to whoever called the method.

**Verdict: ✅ Output Correct + Concept Correct!**

**What I Learned:**
> `return` is like an **exit door** — the method stops immediately and control returns to the caller.

```
Method starts
     ↓
hits return
     ↓
EXIT immediately ← nothing after this runs!
     ↓
control back to caller
```

---

### ❓ Q4 — Unreachable Code (Compile Error)

**Question asked:**
> This code has a problem — can you spot it and tell me WHY it is wrong?

```java
class Number {
    int getDouble(int n) {
        return n * 2;
        System.out.println("This line exists!");
    }
}
```

**My Answer:**
> The `println` line will never execute because after `return`, control goes back to
> whoever called the method. So this line does not exist in terms of execution.

**Verdict: ✅ Correct — And there is more to it!**

**What I Learned:**
> In Java, code written after `return` is called **Unreachable Code**.
> Java detects this **before running** and throws a **Compile Error** — it refuses to even compile!

| Error Type | When It Happens | Example |
|------------|----------------|---------|
| **Compile Error** | Before running — Java catches it | Code after `return` |
| **Runtime Error** | While running — crashes the program | NullPointerException |

---

### ❓ Q5 — Full Methods Challenge 🏆

**Question asked:**
> 1. What is the output?
> 2. Why does `withdraw(8000)` return `-1`?
> 3. What is the final balance and why?

```java
class ATM {
    int balance = 5000;

    boolean canWithdraw(int amount) {
        return amount <= balance;
    }

    int withdraw(int amount) {
        if (canWithdraw(amount)) {
            balance = balance - amount;
            return balance;
        }
        return -1;
    }

    void showBalance() {
        System.out.println("Balance: " + balance);
    }
}

public class Main {
    public static void main(String[] args) {
        ATM atm = new ATM();
        int result1 = atm.withdraw(2000);
        int result2 = atm.withdraw(8000);
        System.out.println(result1);
        System.out.println(result2);
        atm.showBalance();
    }
}
```

**My Answer:**
```
3000
-1
Balance: 3000
```
> `withdraw(2000)` calls `canWithdraw(2000)` — checks if 2000 <= 5000 which is true,
> so it subtracts and returns the new balance = 3000.
>
> `withdraw(8000)` calls `canWithdraw(8000)` — checks if 8000 <= 3000 which is false,
> so it skips the if block and returns -1.
>
> The final balance is 3000 because only the first withdrawal executed successfully.

**Verdict: ✅ 100% Perfect — Output, Reasoning, and Final Balance!**

**What I Learned:**
> Returning `-1` is a common programming pattern meaning **"operation failed"**.

| Call | canWithdraw Check | Return Value | Balance After |
|------|------------------|--------------|---------------|
| `withdraw(2000)` | 2000 <= 5000 ✅ | 3000 | 3000 |
| `withdraw(8000)` | 8000 <= 3000 ❌ | -1 | 3000 (unchanged) |

---

### ❓ Q6 — Passing Object as Argument

**Question asked:**
> 1. What is the output?
> 2. We are passing objects as arguments — is a copy made or is the same object passed?

```java
class Player {
    String name;
    int score;
}

class Game {
    void compare(Player p1, Player p2) {
        if (p1.score > p2.score) {
            System.out.println(p1.name + " wins!");
        } else if (p2.score > p1.score) {
            System.out.println(p2.name + " wins!");
        } else {
            System.out.println("It's a tie!");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Player player1 = new Player();
        player1.name = "Alice";
        player1.score = 95;

        Player player2 = new Player();
        player2.name = "Bob";
        player2.score = 80;

        Game g = new Game();
        g.compare(player1, player2);
    }
}
```

**My Answer:**
```
Alice wins!
```
> The same object is passed — we pass the reference of the object, not a copy.

**Verdict: ✅ 100% Perfect!**

**What I Learned:**

| What You Pass | What Java Sends |
|---------------|----------------|
| Primitive (`int`, `double`) | A **copy** of the value |
| Object | The **reference** (address) — same object! |

**Memory Picture:**
```
player1 ───→ Object1 [ Alice, 95 ]
                 ↑
                p1  ← same address inside compare()!

player2 ───→ Object2 [ Bob, 80 ]
                 ↑
                p2  ← same address inside compare()!
```

---

### ❓ Q7 — Modifying Object Fields Inside a Method

**Question asked:**
> 1. What is the output?
> 2. We passed `b1` into its own method — did it affect the original object? Why?

```java
class BankAccount {
    String owner;
    int balance;

    void addBonus(BankAccount acc, int amount) {
        acc.balance = acc.balance + amount;
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount b1 = new BankAccount();
        b1.owner = "Alice";
        b1.balance = 1000;
        b1.addBonus(b1, 500);
        System.out.println(b1.owner + " : " + b1.balance);
    }
}
```

**My Answer:**
```
Alice : 1500
```
> Yes it does affect the original object because we passed the reference of the object.
> So `acc` inside the method points to the same object as `b1`.

**Verdict: ✅ 100% Perfect!**

**Memory Picture:**
```
b1  ───→ Object1 [ Alice, 1000 → 1500 ]
              ↑
             acc  ← same address! modifying acc = modifying b1!
```

---

### ❓ Q8 — Returning an Object from a Method

**Question asked:**
> 1. What is the output?
> 2. A method is returning an object — what exactly gets returned, the object or its reference?
> 3. How many actual objects are in memory?

```java
class Rectangle {
    int length;
    int width;

    Rectangle getBigger(Rectangle r1, Rectangle r2) {
        if (r1.length * r1.width > r2.length * r2.width) {
            return r1;
        } else {
            return r2;
        }
    }

    void showArea() {
        System.out.println("Area: " + (length * width));
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rect1 = new Rectangle();
        rect1.length = 10; rect1.width = 5;

        Rectangle rect2 = new Rectangle();
        rect2.length = 4; rect2.width = 4;

        Rectangle r = new Rectangle();
        Rectangle bigger = r.getBigger(rect1, rect2);
        bigger.showArea();
    }
}
```

**My Answer:**
```
Area: 50
```
> `bigger` receives the reference of `rect1` (Object1) because its area is bigger.
> When we call `bigger.showArea()` it prints rect1's area which is 50.
> There are 3 actual objects and `bigger` is a reference variable holding the address of rect1.

**Verdict: ✅ Almost Perfect — 3 objects correct, bigger is a reference correct!**

**Memory Picture:**
```
rect1  ───→ Object1 [ length=10, width=5 ]
                ↑
bigger ─────────┘  ← same address after getBigger returns!

rect2  ───→ Object2 [ length=4, width=4 ]

r      ───→ Object3 [ length=0, width=0 ] ← used only to call the method!
```

**What I Learned:**
> A method always returns the **reference** of the object — not the object itself.
> `bigger` is just a new reference variable pointing to the same Object1 as `rect1`.

---

### ❓ Q9 — Multiple Return Points

**Question asked:**
> 1. What is the output?
> 2. This method has 5 return statements — does Java get confused? How does it decide?

```java
class Grader {
    String getGrade(int marks) {
        if (marks >= 90) return "A";
        if (marks >= 75) return "B";
        if (marks >= 60) return "C";
        if (marks >= 50) return "D";
        return "F";
    }
}

public class Main {
    public static void main(String[] args) {
        Grader g = new Grader();
        System.out.println(g.getGrade(95));
        System.out.println(g.getGrade(72));
        System.out.println(g.getGrade(45));
    }
}
```

**My Answer (after self-correction):**
```
A
C     ← initially said B, then self-corrected to C (72 >= 75 is false!)
F
```
> Java checks conditions top to bottom. The moment a condition is true,
> it hits `return`, sends the value back, and the method kills itself.
> Java never gets confused — the first matching condition wins!

**Verdict: ✅ Correct — and caught own mistake! 💪**

**Trace:**
```
getGrade(95) → 95 >= 90 ✅ → returns "A"
getGrade(72) → 72 >= 90 ❌ → 72 >= 75 ❌ → 72 >= 60 ✅ → returns "C"
getGrade(45) → all fail ❌ → returns "F"
```

**What I Learned:**
> Java executes conditions **top to bottom** — the first `return` that is hit wins!
> Self-correcting mistakes is the best kind of learning 💪

---

### ❓ Q10 — Calling Same Method Multiple Times

**Question asked:**
> 1. What is the output?
> 2. Every time `increment()` is called — does it start fresh or remember the previous value? Why?

```java
class Counter {
    int count = 0;

    void increment() {
        count = count + 1;
        System.out.println("Count: " + count);
    }

    void reset() {
        count = 0;
        System.out.println("Reset!");
    }
}

public class Main {
    public static void main(String[] args) {
        Counter c = new Counter();
        c.increment();
        c.increment();
        c.increment();
        c.reset();
        c.increment();
    }
}
```

**My Answer:**
```
Count: 1
Count: 2
Count: 3
Reset!
Count: 1
```
> The method does not forget the value because `count` is stored in the heap memory
> as part of the object — it stays alive as long as the object is alive.

**Verdict: ✅ 100% Perfect — Output and Concept!**

**What I Learned:**
> `count` is a **field** of the object — it lives in **heap memory**.
> Every call to `increment()` works on the **same `count`** — it never forgets between calls!
> `reset()` sets it back to 0 — so the next `increment()` starts fresh from 1 again.

---

## 🏆 Topic 2 Final Scorecard — Methods

| # | Question | Concept Tested | Result |
|---|----------|---------------|--------|
| Q1 | Calculator | Return type + void + parameters | ✅ Perfect |
| Q2 | Student Status | Boolean return + internal method call | ✅ Output perfect, learned new concept |
| Q3 | Circle | Double/String return + return behavior | ✅ Perfect |
| Q4 | Unreachable Code | Compile error after return | ✅ Perfect |
| Q5 | ATM Challenge | Full methods combined | ✅ Perfect |
| Q6 | Player Compare | Passing object as argument | ✅ Perfect |
| Q7 | BankAccount Bonus | Modifying fields inside method | ✅ Perfect |
| Q8 | Rectangle Bigger | Returning object from method | ✅ Almost perfect |
| Q9 | Grader | Multiple return points | ✅ Self-corrected! |
| Q10 | Counter | Calling same method multiple times | ✅ Perfect |

---

## 💡 Key Takeaways — Methods

| Concept | Rule |
|---------|------|
| Parameter vs Argument | Parameter = in definition, Argument = value passed when calling |
| void | Performs a task, returns nothing |
| return | Sends value back + **stops method immediately** |
| Return Types | `int`, `double`, `String`, `boolean` — must match declared type |
| Internal Method Call | A method can call another method inside the same class |
| Unreachable Code | Code after `return` = **Compile Error** in Java |
| Passing Object | Java passes the **reference** — same object, not a copy! |
| Returning Object | Method returns the **reference** of the object |
| Multiple return points | Java checks top to bottom — **first match wins!** |
| Field persistence | Object fields live in heap — remembered across all method calls |
| `-1` as return | Common pattern to signal **operation failed** |

---

> 📝 *This README is part of a live Q&A OOP learning session.*
> *Topic 2: Methods — Fully Mastered ✅*
> *Every important concept covered and practiced before moving on.*
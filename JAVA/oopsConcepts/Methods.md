# ☕ OOP Learning Journey — Java

> A question-by-question OOP practice log.
> Each topic is practiced until fully understood before moving on.
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
| **Parameter** | Variable in method definition → `int a, int b` |
| **Argument** | Actual value passed when calling → `c.add(10, 20)` |
| **return** | Sends a value back to the caller — method stops immediately |
| **void** | Method performs a task but returns nothing |
| **Return Type** | The data type a method returns — `int`, `String`, `boolean`, etc. |
| **Internal Method Call** | A method calling another method inside the same class |
| **Unreachable Code** | Code written after `return` — Java throws a Compile Error |

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
> We are passing 10 and 20 to the `add()` method of the Calculator class.
> That method adds them and returns an `int`, which we store in `sum`.
> Then we pass `sum` to `showResult()`, which doesn't return anything — it just prints the result.

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
> This keeps code **clean and reusable**!

---

### ❓ Q3 — Multiple Return Types

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
> `return` is like an **exit door** 🚪 — the method stops immediately and control returns to the caller.

```
Method starts
     ↓
hits return
     ↓
EXIT immediately ← nothing after this runs!
     ↓
back to caller
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
> The `println` line will never execute because after `return`, control goes back to whoever called the method.
> So this line does not exist in terms of execution.

**Verdict: ✅ Correct — And there is more to it!**

**What I Learned:**
> In Java, code written after `return` is called **Unreachable Code**.
> Java detects this at compile time and throws a **Compile Error** — it refuses to even run!

| Error Type | When It Happens |
|------------|----------------|
| **Compile Error** | Java catches it before running — like unreachable code |
| **Runtime Error** | Happens while running — like NullPointerException |

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
> `withdraw(2000)` calls `canWithdraw(2000)` — it checks if the amount is less than or equal to
> the balance. 2000 <= 5000 is true, so it subtracts and returns the new balance = 3000.
>
> `withdraw(8000)` calls `canWithdraw(8000)` — 8000 <= 3000 is false, so it skips the if block
> and returns -1.
>
> The final balance is 3000 because only the first withdrawal executed successfully.

**Verdict: ✅ 100% Perfect — Output, Reasoning, and Final Balance!**

**What I Learned:**
> Returning `-1` is a common programming pattern meaning **"operation failed"**.

| Call | canWithdraw Result | Return Value | Balance |
|------|--------------------|--------------|---------|
| `withdraw(2000)` | 2000 <= 5000 ✅ | 3000 | 3000 |
| `withdraw(8000)` | 8000 <= 3000 ❌ | -1 | 3000 (unchanged) |

---

## 🏆 Topic 2 Final Scorecard — Methods

| Question | Topic Tested | Result |
|----------|-------------|--------|
| Q1 — Calculator | Return type + void | ✅ Perfect |
| Q2 — Student Status | Boolean return + internal method call | ✅ Output perfect, learned new concept |
| Q3 — Circle | Double/String return + return behavior | ✅ Perfect |
| Q4 — Unreachable Code | Compile error after return | ✅ Perfect |
| Q5 — ATM Challenge | Full methods combined | ✅ Perfect |

---

## 💡 Key Takeaways — Methods

| Concept | Rule |
|---------|------|
| Parameter vs Argument | Parameter = definition, Argument = actual value passed |
| void | Method performs a task, returns nothing |
| return | Sends value back + stops method immediately |
| Return Types | `int`, `double`, `String`, `boolean` — must match declared type |
| Internal Method Call | A method can call another method inside the same class |
| Unreachable Code | Code after `return` = Compile Error in Java |
| `-1` as return | Common pattern to signal operation failure |

---

> 📝 *This README is part of a live Q&A OOP learning session.*
> *Topic 2: Methods — Fully Mastered ✅*
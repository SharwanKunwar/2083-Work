# 1. What is data structure?

A **Data Structure** is a way of organizing, storing, and managing data in a computer so that it can be accessed, modified, and processed efficiently.


Data structures help programmers handle large amounts of data in an organized manner. By using proper data structures, operations like searching, inserting, deleting, and updating data can be performed efficiently.

## Examples of Data Structures
- Array
- Linked List
- Stack
- Queue
- Tree
- Graph



<br><br>

## 2. Explain an Abstract Data Type with suitable example.

An **Abstract Data Type (ADT)** is a logical description of data and the operations that can be performed on it, without specifying how it is implemented.

## Example: Stack
- **Operations:**  
  - **Push:** Add an element to the top  
  - **Pop:** Remove the top element  
- **Behavior:** Last-In-First-Out (LIFO)  
- **Implementation:** Can be done using an array or linked list, but the ADT does not specify it.

```java
Stack<Integer> stack = new Stack<>();
stack.push(10);
stack.push(20);
System.out.println(stack.pop()); // Output: 20
```
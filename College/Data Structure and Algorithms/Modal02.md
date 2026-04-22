## 1. What is singly linked list ? Write an algorithm to add a node at the beginning and end of singly linked list.

A Singly Linked List is a linear data structure in which each node contains:

1. Data
2. A pointer to the next node

Each node points to the next node and the last node points to NULL.

### Algorithm to Insert at Beginning
INSERT_BEGIN(START, ITEM)

1. Create NEW node
2. NEW → data = ITEM
3. NEW → next = START
4. START = NEW
5. Return START

### Algorithm to Insert at End
1. Create NEW node
2. NEW → data = ITEM
3. NEW → next = NULL
```
4. If START = NULL 
        START = NEW 
    Else 
       PTR = START 
       While PTR → next ≠ NULL 
          PTR = PTR → next 
          PTR → next = NEW
```
5. Return START

<br><br>

## 2. Define circular queue. Write an algorithm to insert an item in a circluar queue.

A Circular Queue is a linear data structure in which the last position is connected back to the first position to form a circle. It follows FIFO (First In First Out) principle.

In circular queue, when REAR reaches the last position, it moves to the first position if space is available.

### Algorithm: INSERT

Let:
* CQ[MAX] be the array
* FRONT, REAR be pointers
```
1. If (FRONT == 0 AND REAR == MAX-1) OR (FRONT == REAR + 1)
      Print "Overflow"
      Exit
```
```
2. If FRONT == -1
      FRONT = 0
      REAR = 0
   Else If REAR == MAX-1
      REAR = 0
   Else
      REAR = REAR + 1
```
3. CQ[REAR] = ITEM
4. Return FRONT, REAR

<br><br>

# 3. Difference between circular and linear queue.


| Basis | Linear Queue | Circular Queue |
|-------|--------------|----------------|
| Structure | Follows a straight line structure | Last position is connected to first (circular form) |
| Memory Utilization | Wastage of space may occur after deletion | Efficient use of memory |
| Rear Movement | Rear moves only forward | Rear can move to the beginning after reaching end |
| Condition of Full Queue | Rear = MAX - 1 | (FRONT = 0 AND REAR = MAX-1) OR (FRONT = REAR + 1) |
| Implementation | Simple to implement | Slightly more complex than linear queue |

---
<br><br>

## 4. How can we implement stack using linked list ? Explain.

A **Stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle. When implementing a stack using a **linked list**, we use a pointer called `TOP` that always points to the first node of the linked list.

Insertion and deletion are done at the beginning of the list.

---

## Representation

Each node contains:
- `data`
- `next` pointer

`TOP` → [Data | Next] → [Data | Next] → NULL

---

## PUSH Operation (Insert)

### Algorithm: PUSH(TOP, ITEM)

1. Create a new node `NEW`
2. If `NEW = NULL`
      Print "Overflow"
      Exit
3. Set `NEW → data = ITEM`
4. Set `NEW → next = TOP`
5. Set `TOP = NEW`
6. Return TOP

---

## POP Operation (Delete)

### Algorithm: POP(TOP)

1. If `TOP = NULL`
      Print "Underflow"
      Exit
2. Set `PTR = TOP`
3. Set `TOP = TOP → next`
4. Free PTR
5. Return TOP

---

<br><br>

# 5. What is linear queue? Why do we need circular queue? Explain Queue traversal

A **Linear Queue** is a linear data structure that follows the **FIFO (First In First Out)** principle.

Insertion is done from the **REAR** end and deletion is done from the **FRONT** end.

Condition:
- Queue is Full → `REAR = MAX - 1`
- Queue is Empty → `FRONT = -1` or `FRONT > REAR`

---

# Why Do We Need Circular Queue?

In a linear queue, after several deletions, empty spaces are created at the beginning.  
Even if space is available, insertion is not possible when `REAR = MAX - 1`.

This causes **wastage of memory**.

To solve this problem, we use a **Circular Queue**, where:
- The last position connects back to the first.
- Empty spaces are reused.
- Memory is efficiently utilized.

---

# Queue Traversal

Traversal means displaying all elements of the queue from **FRONT to REAR**.

## Algorithm: TRAVERSE(QUEUE, FRONT, REAR)

1. If `FRONT = -1`
      Print "Queue is Empty"
      Exit
2. Set `PTR = FRONT`
3. While `PTR ≤ REAR`
      Print `QUEUE[PTR]`
      PTR = PTR + 1

---

<br><br>

# 6. What is stack? List the application of the stack. Write an algorithm to perfrom PUSH and POP operation in stack.

A **Stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle.

Insertion and deletion are performed only at one end called **TOP**.

---

## Applications of Stack

1. Expression evaluation (Postfix, Prefix)
2. Infix to Postfix conversion
3. Function calls (Recursion / Call Stack)
4. Parenthesis checking
5. Undo/Redo operations
6. Backtracking (e.g., maze solving)

---

# Algorithm for PUSH Operation

Let `STACK[MAX]` be an array and `TOP` be the pointer.

### PUSH(STACK, TOP, ITEM)

1. If `TOP = MAX - 1`
      Print "Overflow"
      Exit
2. `TOP = TOP + 1`
3. `STACK[TOP] = ITEM`
4. Return TOP

---

# Algorithm for POP Operation

### POP(STACK, TOP)

1. If `TOP = -1`
      Print "Underflow"
      Exit
2. `ITEM = STACK[TOP]`
3. `TOP = TOP - 1`
4. Return ITEM, TOP

---

<br><br>

# 7. Write an algorithms and translate the following infix expression into its equivalent postfix expression using algorithm : ((A-(B+C))*D)$(E+F)


## Algorithm: INFIX_TO_POSTFIX(EXP)

1. Create an empty stack `S`
2. Create an empty postfix string `POST`
3. Scan the infix expression from left to right
4. If operand → Add to `POST`
5. If '(' → Push into stack
6. If ')' → Pop from stack and add to `POST` until '(' is removed
7. If operator:
      While stack is not empty AND
      precedence(top of stack) ≥ precedence(current operator)
            Pop from stack and add to `POST`
      Push current operator into stack
8. After scanning complete expression,
      Pop all remaining operators from stack into `POST`
9. Return `POST`
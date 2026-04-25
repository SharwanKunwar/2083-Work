## 1. What is binary search tree ? Write algorithm to implement insertion and deletion in binary search tree ?

A **Binary Search Tree (BST)** is a binary tree in which each node satisfies the following properties:

- All elements in the left subtree are less than the root node.
- All elements in the right subtree are greater than the root node.
- Both left and right subtrees are also BSTs.

This property makes searching, insertion, and deletion efficient.

---

## 🌳 Example

```

           50
         /    \
       30      70
      /  \    /  \
     20  40  60  80
   ```


---

## ✏️ Algorithm for Insertion in BST

1. If the tree is empty, create a new node as the root.
2. Start from the root node.
3. Compare the value to be inserted with the current node:
   - If smaller, move to the left child.
   - If larger, move to the right child.
4. Repeat until a `NULL` position is found.
5. Insert the new node at that position.

---

## ❌ Algorithm for Deletion in BST

Deletion in BST involves three cases:

### Case 1: Node is a leaf (no children)
- Simply remove the node.

### Case 2: Node has one child
- Replace the node with its child.

### Case 3: Node has two children
- Find the inorder successor (smallest value in right subtree).
- Replace the node’s value with the successor’s value.
- Delete the successor node.

---

## ✅ Conclusion

A **Binary Search Tree (BST)** is an efficient data structure for storing sorted data.  
Insertion and deletion operations maintain the BST property, making searching faster compared to unsorted structures.


<br><br>

## 2. What is AVL tree? Construct AVL tree for the following data 21,26,30,9,4,14,28,18,15
An AVL Tree is a self-balancing Binary Search Tree (BST) introduced by Adelson-Velsky and Landis.

**It keeps the tree balanced by ensuring:**
* Balance Factor = Height(left) − Height(right)
* Value must be -1, 0, or +1

If imbalance happens, rotations are used to fix it. Think of it as a tree with control issues.

# Construction of AVL 
```
Given Data:  21, 26, 30, 9, 4, 14, 28, 18, 15

        21
       /  \
      9    28
     / \   / \
    4  15 26 30
       / \
      14 18
```
<br><br>

## 3. What is queue. Explain about enqueue and dequeue operation in circular queue

A **Queue** is a linear data structure that follows **FIFO (First In First Out)**.

- Insertion is done at the **rear**
- Deletion is done from the **front**

---

## 🔄 Circular Queue

A **Circular Queue** connects the last position to the first, allowing unused space to be reused.

- It works using the **modulo (%) operation**
- Prevents wastage of space compared to a linear queue

---

## ➕ Enqueue (Insertion)

### Steps:
1. Check overflow condition:
   - `(rear + 1) % size == front`
2. If queue is empty:
   - `front = rear = 0`
3. Else:
   - `rear = (rear + 1) % size`
4. Insert element at:
   - `queue[rear]`

---

## ➖ Dequeue (Deletion)

### Steps:
1. Check underflow condition:
   - `front == -1`
2. Store element from:
   - `queue[front]`
3. If only one element:
   - `front = rear = -1`
4. Else:
   - `front = (front + 1) % size`

---

## ✅ Summary

A **Circular Queue** avoids space wastage by reusing empty positions and performs insertion and deletion efficiently.


<br><br>

## 4. What do you mean by MST? explain kruskai algorithm with example.

A **Minimum Spanning Tree (MST)** is a subset of edges of a connected weighted graph that:

- Connects all vertices
- Has no cycles
- Has the minimum total weight

---

## 🌿 Kruskal’s Algorithm

**Kruskal’s Algorithm** is a greedy algorithm used to find the MST.

### Steps:
1. Sort all edges in increasing order of weight
2. Select the smallest edge
3. Include it if it does not form a cycle
4. Repeat until `(V − 1)` edges are selected

---

## 🔍 Example

**Edges:**  
`AB(1), BC(2), AC(3), CD(4)`

### Process:
- Pick `AB(1)`
- Pick `BC(2)`
- Skip `AC(3)` (forms a cycle)
- Pick `CD(4)`

### MST Cost: 1 + 2 + 4 = 7


---

## ✅ Summary

Kruskal’s Algorithm constructs a **Minimum Spanning Tree** by selecting the smallest edges while avoiding cycles.

<br><br>

## 5. State problem Tower of Hanoi. Explain the algorithm to solve the problem and trace for 4 disks.

The Tower of Hanoi consists of three rods (A, B, C) and n disks of different sizes placed on rod A (largest at bottom).
The goal is to move all disks from A to C using rod B.

**Rules:**

1. Only one disk can be moved at a time
2. Only the top disk can be moved
3. A larger disk cannot be placed on a smaller disk

### 🧠 Algorithm (Recursive)

```
TOH(n, A, B, C):
  if n == 1:
     move A → C
  else:
     TOH(n-1, A, C, B)
     move A → C
     TOH(n-1, B, A, C)
```

### 🔁 Trace for 4 Disks (15 Moves)
```

Moves:
A→B, A→C, B→C, A→B, C→A, C→B, A→B,
A→C, B→C, B→A, C→A, B→C, A→B, A→C, B→C
```
**✅ Result**
* Total moves = 2ⁿ − 1 = 15
* All disks moved from A to C

<br><br>

## 6. Assume you have to store the data {0,1,2,3,4,5,7} into a hash table of size 5, with hash function h(x) = x%5. apply linear probing and quadratic probing as collision resolution techniques.
```
Given:
    * Data: {0,1,2,3,4,5,7}
    * Hash function: h(x) = x % 5
    * Table size = 5
```
---

## Hash Values:
0→0, 1→1, 2→2, 3→3, 4→4, 5→0, 7→2

---

## 1. Linear Probing
Formula: (h(x) + i) % 5
* Insert 0,1,2,3,4 → placed at index 0–4
* 5 → collision at 0 → check next slots → all full → not inserted
* 7 → collision at 2 → all full → not inserted

Final Table: 0→0, 1→1, 2→2, 3→3, 4→4

---

## 2. Quadratic Probing
Formula: (h(x) + i²) % 5
* Insert 0,1,2,3,4 → placed at index 0–4
* 5 and 7 → collisions occur, but all positions are full → not inserted

Final Table: 0→0, 1→1, 2→2, 3→3, 4→4

---

## Conclusion:
Both methods fail to insert all elements because the table is full. Linear probing checks sequentially, while quadratic probing uses square jumps.
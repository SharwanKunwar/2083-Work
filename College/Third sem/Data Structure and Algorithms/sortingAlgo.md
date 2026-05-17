# Heap Sort

Heap Sort is a **comparison-based sorting algorithm** that uses the **heap data structure** (usually a max heap) to sort elements.

---

## 🔹 Steps of Heap Sort

1. Build a **max heap** from the given array.  
2. Swap the **root (largest element)** with the last element.  
3. Reduce heap size by 1.  
4. Heapify the root again to maintain heap property.  
5. Repeat steps 2–4 until all elements are sorted.

---

## 🔹 Time Complexity

| Case        | Complexity   |
|------------|-------------|
| Best Case   | O(n log n)  |
| Average Case| O(n log n)  |
| Worst Case  | O(n log n)  |

---

## 🔹 Advantages

- Does not require extra memory (**in-place sorting**)  
- Suitable for large datasets  

---

## 🔹 Disadvantages

- Not a **stable sorting algorithm**  
- Slightly slower than Quick Sort in practice  

---

<br><br>

# 📘 Sorting Algorithms (BCA)

---

## 📝 1. Quick Sort (5 Marks Answer)

**Quick Sort** is a divide and conquer algorithm that sorts elements by selecting a pivot and partitioning the array.

### 🔹 Steps of Quick Sort:
- Choose a pivot element from the array  
- Partition the array into two parts:  
  - Elements smaller than pivot  
  - Elements greater than pivot  
- Recursively apply Quick Sort to both subarrays  

### 🔹 Example:
Array: `5, 3, 8, 4, 2`  
Pivot = `5` → Left: `3, 4, 2` → Right: `8`  
Sorted result: `2, 3, 4, 5, 8`  

### 🔹 Time Complexity:
- Best Case: `O(n log n)`  
- Average Case: `O(n log n)`  
- Worst Case: `O(n²)` (when pivot is poorly chosen)  

### 🔹 Features:
- Fast in practice  
- In-place sorting  
- Not stable  

---

<br><br>

## 📝 2. Merge Sort (5 Marks Answer)

**Merge Sort** is a divide and conquer sorting algorithm that divides the array into smaller parts and then merges them in sorted order.

### 🔹 Steps of Merge Sort:
- Divide the array into two halves  
- Recursively divide each half until single elements remain  
- Merge the sorted halves to produce a sorted array  

### 🔹 Merging Process:
- Compare elements from both halves  
- Place smaller element into new array  
- Continue until all elements are merged  

### 🔹 Time Complexity:
- Best Case: `O(n log n)`  
- Average Case: `O(n log n)`  
- Worst Case: `O(n log n)`  

### 🔹 Features:
- Stable sorting algorithm  
- Works well for large datasets  
- Requires extra memory  

---
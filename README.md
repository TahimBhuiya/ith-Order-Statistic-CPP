# ith Order Statistic in C++

## 📌 Overview

This C++ program demonstrates how to find the **i-th Order Statistic** — also known as the _k-th smallest element_ — using the **Quickselect algorithm**, a highly efficient selection method derived from Quick Sort:

1. Selects a **pivot** element from the array.
2. Partitions the array so that elements smaller than the pivot go left, and larger elements go right.
3. Recursively selects one side of the partition that contains the desired order statistic.

It prompts the user to input which order statistic (`k`) to find and displays the corresponding element in the array.

---

## 🔧 Features

- **Quickselect Algorithm**: Efficiently finds the k-th smallest element without fully sorting the array.
- **Divide and Conquer**: Similar to Quick Sort but only processes one side of the partition.
- **Average Time Complexity**: _O(n)_ — faster than full sorting for large datasets.
- **Fully Commented Code**: Explains each step for easy learning and modification.

---

## 📋 Example Run

**Input:**
Array:
12 3 5 7 19 26 4

Enter the order (k) of the smallest element to find: 3

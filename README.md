# Stack & Monotonic Stack Practice

This repository contains my implementations and notes while learning stack patterns in DSA.

---

## ✅ Problems Covered

### Basic Stack
- Valid Parentheses
- Min Stack (Two-stack approach)
- Min Stack (Single stack encoding trick)

### Monotonic Stack
- Next Greater Element
- Next Greater Element I (LC 496)
- Daily Temperatures (LC 739)

---

## 🧠 Key Concepts Learned

- LIFO structure
- Handling edge cases (empty stack)
- Monotonic Decreasing Stack
- Why we pop smaller elements
- Value vs Index in stack
- Strictly greater vs greater-or-equal
- State encoding using `2*val - minVal`

---

## 🔥 Patterns Understood

### 1. Matching Problems
Use stack for structure validation.

### 2. Min Tracking
Maintain extra state (pair / second stack / encoding).

### 3. Next Greater Element Pattern
Traverse from right to left.
Pop useless candidates.
Maintain monotonic property.

### 4. Daily Temperatures
Store indices to compute distance.

---

## 🎯 Goal

Not just solving problems, but understanding:
> Why the pattern works.

Building layer by layer.

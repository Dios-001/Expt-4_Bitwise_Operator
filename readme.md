# Bitwise Operators in C++

This repository contains examples and explanations of **bitwise operators** implemented in C++.

## What are Bitwise Operators?

Bitwise operators perform operations directly on the **binary representation** of integers. They are useful in low-level programming tasks like optimization, cryptography, and networking.

---

## Common Bitwise Operators

| Operator   | Symbol | Description                                 | Example (A = 5, B = 3)             |
|------------|--------|---------------------------------------------|------------------------------------|
| AND        | `&`    | Sets each bit to 1 if both bits are 1       | `A & B = 1` (0101 & 0011 = 0001)  |
| OR         | `|`    | Sets each bit to 1 if at least one bit is 1 | `A | B = 7` (0101 | 0011 = 0111)  |
| XOR        | `^`    | Sets each bit to 1 if only one bit is 1     | `A ^ B = 6` (0101 ^ 0011 = 0110)  |
| NOT        | `~`    | Inverts all the bits                        | `~A = -6` (Two's complement: 1010 + 1 = 1011) |
| Left Shift | `<<`   | Shifts bits to the left, filling with 0     | `A << 1 = 10` (0101 << 1 = 1010)  |
| Right Shift| `>>`   | Shifts bits to the right, discarding bits   | `A >> 1 = 2` (0101 >> 1 = 0010)   |

---

## Algorithm

Here is the **pseudocode** for each bitwise operation:


```pseudo

for i = 0 to number_of_bits:
    if (bit_A[i] == 1) AND (bit_B[i] == 1):
        result[i] = 1
    else:
        result[i] = 0
for i = 0 to number_of_bits:
    if (bit_A[i] == 1) OR (bit_B[i] == 1):
        result[i] = 1
    else:
        result[i] = 0
for i = 0 to number_of_bits:
    if (bit_A[i] != bit_B[i]):
        result[i] = 1
    else:
        result[i] = 0
for i = 0 to number_of_bits:
    result[i] = NOT(bit_A[i])
shift_bits_left(A, shift_count):
    result = A * (2 ^ shift_count)


shift_bits_right(A, shift_count):
    result = A / (2 ^ shift_count)

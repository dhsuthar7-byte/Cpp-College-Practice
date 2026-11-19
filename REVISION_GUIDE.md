# C++ Revision Guide

> Scope: Exercises 1–102 only. This guide covers fundamentals through pointers and matrices. It intentionally does not include exercise 103 or later.

## 1. Repository Overview

This repository contains C++ practice programs organized by numbered exercises. It is 100% C++ and is based mainly on C-style I/O: `stdio.h`, `string.h`, and `ctype.h`.

### Topic map

| Exercises | Topic | Key concepts |
|---|---|---|
| 1–23 | Arithmetic and formulas | Variables, input/output, conversion, salary, interest, area |
| 24–30 | Conditional logic | `if`, `else`, comparisons, logical operators |
| 31–66 | Loops and number programs | `for`, `while`, sums, factorial, digits, primes, Fibonacci |
| 67–70 | Basic arrays | Input, output, sorting, counts, currency notes |
| 71–85 | Matrices and array algorithms | 2-D arrays, transpose, insertion, deletion, searching |
| 86–97 | Strings | Length, case, copy, compare, reverse, concatenation |
| 98–102 | Pointers and mixed exercises | Address, dereference, pointer arithmetic, pointers with matrices/arrays |

## 2. Strengths and Improvements

### Strengths

- Broad progression from basic output to pointers.
- Strong repetition of loops and conditions.
- Useful separation of exercises by topic and filename.
- Includes both mathematical and data-processing problems.
- Numbered files make exam revision easier.

### Improvements

- Add modern C++ syntax such as `iostream`, `cin`, and `cout`.
- Validate array and matrix boundaries.
- Check division by zero.
- Prevent integer variables from storing fractional arithmetic results.
- Initialize every variable before use.
- Use clearer variable names and comments.
- Avoid overflow with large factorial or power values.
- Replace `scanf("%s", ...)` where strings may contain spaces.

## 3. Basic C++ Program Structure

```cpp
#include <stdio.h>

int main()
{
    // Statements
    return 0;
}
```

- `#include` imports library declarations.
- `main()` is the entry point of the program.
- Statements end with `;`.
- `{}` defines a block.
- `return 0;` indicates successful completion.
- `//` starts a single-line comment.
- `/* */` contains a block comment.

## 4. Data Types and Variables

| Type | Purpose | Example |
|---|---|---|
| `int` | Whole numbers | `int age = 18;` |
| `float` | Decimal values | `float price = 10.5;` |
| `double` | More precise decimals | `double pi = 3.14159;` |
| `char` | One character | `char grade = 'A';` |
| `bool` | True or false | `bool passed = true;` |

Input/output examples:

```cpp
int n;
scanf("%d", &n);
printf("%d", n);
```

- `%d`: integer
- `%f`: float
- `%lf`: double
- `%c`: character
- `%s`: C-string
- `%ld`: long integer

The `&` operator supplies the variable address to `scanf`.

## 5. Operators

- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Assignment: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- Increment/decrement: `++`, `--`
- Relational: `==`, `!=`, `<`, `<=`, `>`, `>=`
- Logical: `&&`, `||`, `!`
- Address/dereference: `&`, `*`

### Integer division warning

```cpp
5 / 2       // 2
5.0 / 2     // 2.5
(float)5 / 2 // 2.5
```

Use floating-point values when storing percentages, averages, interest, or division results.

## 6. Conditional Statements

### `if`

```cpp
if (number > 0)
    printf("Positive");
```

### `if-else`

```cpp
if (marks >= 40)
    printf("Pass");
else
    printf("Fail");
```

### `else-if` ladder

```cpp
if (marks >= 75)
    printf("Distinction");
else if (marks >= 60)
    printf("First class");
else if (marks >= 40)
    printf("Pass");
else
    printf("Fail");
```

### Important conditions

- Even: `n % 2 == 0`
- Odd: `n % 2 != 0`
- Divisible by `d`: `n % d == 0`
- Leap year: `(year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)`
- Both conditions: `A && B`
- Either condition: `A || B`
- Negation: `!A`

## 7. Loops

### `for` loop

```cpp
for (int i = 1; i <= n; i++)
    printf("%d ", i);
```

Use when the number of iterations is known.

### `while` loop

```cpp
while (number > 0)
{
    digit = number % 10;
    number /= 10;
}
```

Use when repetition depends on a changing condition.

### `do-while` loop

```cpp
do
{
    scanf("%d", &choice);
} while (choice < 1 || choice > 6);
```

The body runs at least once.

### Loop patterns

| Requirement | Pattern |
|---|---|
| Count `n` values | `count = 0; count++;` |
| Sum values | `sum = 0; sum += value;` |
| Find factorial/product | `product = 1; product *= i;` |
| Find maximum | Initialize to first value, then compare |
| Find minimum | Initialize to first value, then compare |
| Process digits | `digit = n % 10; n /= 10;` |

## 8. Number Algorithms

### Reverse a number

```cpp
reverse = 0;
while (number > 0)
{
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number /= 10;
}
```

### Palindrome number

Save the original number, reverse it, and compare both values.

### Factorial

```cpp
factorial = 1;
for (i = 2; i <= n; i++)
    factorial *= i;
```

### Factor count

```cpp
for (i = 1; i <= n; i++)
    if (n % i == 0)
        printf("%d ", i);
```

### Prime number

A number is prime if it is at least 2 and has no divisor from 2 through `sqrt(n)`.

```cpp
isPrime = (n >= 2);
for (i = 2; i * i <= n && isPrime; i++)
    if (n % i == 0)
        isPrime = 0;
```

### Perfect number

The sum of factors excluding the number itself equals the number.

### Fibonacci sequence

```cpp
first = 0;
second = 1;

for (i = 1; i <= n; i++)
{
    printf("%d ", first);
    next = first + second;
    first = second;
    second = next;
}
```

### Armstrong number

Count the digits, calculate the sum of each digit raised to that count, and compare it with the original number.

## 9. Nested Loops and Patterns

An outer loop usually represents rows and an inner loop represents columns or symbols:

```cpp
for (i = 1; i <= rows; i++)
{
    for (j = 1; j <= i; j++)
        printf("* ");
    printf("\n");
}
```

For each pattern, determine:

1. Number of rows.
2. Starting value of each row.
3. Ending value of each row.
4. Number of spaces.
5. Number of printed symbols.
6. When to print a newline.

## 10. One-Dimensional Arrays

An array stores elements of one type in contiguous memory.

```cpp
int numbers[5];
```

Valid indices range from `0` to `size - 1`.

```cpp
for (i = 0; i < n; i++)
    scanf("%d", &numbers[i]);

for (i = 0; i < n; i++)
    printf("%d ", numbers[i]);
```

### Maximum and minimum

```cpp
maximum = minimum = numbers[0];
for (i = 1; i < n; i++)
{
    if (numbers[i] > maximum)
        maximum = numbers[i];
    if (numbers[i] < minimum)
        minimum = numbers[i];
}
```

### Reverse

```cpp
for (i = 0; i < n / 2; i++)
{
    temp = numbers[i];
    numbers[i] = numbers[n - 1 - i];
    numbers[n - 1 - i] = temp;
}
```

### Linear search

```cpp
position = -1;
for (i = 0; i < n; i++)
{
    if (numbers[i] == key)
    {
        position = i;
        break;
    }
}
```

A position of `-1` conventionally means “not found.”

### Insert

Move elements right from the end until the insertion position:

```cpp
for (i = n; i > position; i--)
    numbers[i] = numbers[i - 1];
numbers[position] = value;
n++;
```

The array must have enough capacity, and `position` must be valid.

### Delete

Move elements left:

```cpp
for (i = position; i < n - 1; i++)
    numbers[i] = numbers[i + 1];
n--;
```

## 11. Matrices

A matrix is a two-dimensional array:

```cpp
int matrix[10][10];
```

Read and print matrices using nested loops.

### Matrix addition

```cpp
sum[i][j] = first[i][j] + second[i][j];
```

The matrices must have the same dimensions.

### Matrix multiplication

Multiplication is valid when:

```text
columns in first matrix == rows in second matrix
```

```cpp
for (i = 0; i < rowsA; i++)
{
    for (j = 0; j < columnsB; j++)
    {
        product[i][j] = 0;
        for (k = 0; k < columnsA; k++)
            product[i][j] += first[i][k] * second[k][j];
    }
}
```

### Matrix transpose

```cpp
transpose[i][j] = matrix[j][i];
```

For an in-place square-matrix transpose, swap elements only for `j > i`.

## 12. Strings

A C-string is a character array ending with `\0`.

```cpp
char text[100];
scanf("%s", text);
```

`%s` stops at whitespace. Use an appropriate line-input method for strings containing spaces.

### Common functions

| Function | Purpose |
|---|---|
| `strlen(s)` | Find string length |
| `strcpy(dest, src)` | Copy a string |
| `strcmp(a, b)` | Compare strings |
| `strcat(dest, src)` | Concatenate strings |
| `tolower(c)` | Convert character to lowercase |
| `toupper(c)` | Convert character to uppercase |

### Manual length calculation

```cpp
length = 0;
while (text[length] != '\0')
    length++;
```

### String copy

```cpp
for (i = 0; (copy[i] = source[i]) != '\0'; i++);
```

### String palindrome

Compare characters symmetrically:

```cpp
for (i = 0; i < length / 2; i++)
    if (text[i] != text[length - 1 - i])
        isPalindrome = 0;
```

### String comparison

Do not compare C-strings using `==`:

```cpp
strcmp(first, second)
```

- Returns `0` for equal strings.
- Negative or positive values indicate lexical ordering.

## 13. Pointers

A pointer stores a memory address.

```cpp
int value = 10;
int *pointer = &value;
```

- `&value`: address of `value`.
- `pointer`: address stored in the pointer.
- `*pointer`: value stored at that address.

### Dereferencing

```cpp
*pointer = 25;
printf("%d", value); // 25
```

### Pointers and arrays

```cpp
int numbers[5];
int *pointer = numbers;
```

For arrays:

- `numbers == &numbers[0]`
- `pointer[i] == *(pointer + i)`
- `&numbers[i]` is the address of element `i`

Pointer arithmetic depends on the pointer's data type.

### Pointer safety

- Initialize pointers before use.
- Do not dereference uninitialized pointers.
- Do not access elements outside array bounds.
- Use `&` for ordinary variables passed to `scanf`.
- Do not use `&` when already passing an array name.

## 14. Formula and Conversion Exercises

The beginning of the repository includes area, percentage, salary, interest, and unit-conversion problems.

Example structure:

1. Declare input variables.
2. Read values.
3. Convert units or calculate intermediates.
4. Calculate the final result.
5. Print with suitable format specifiers.

Careful examples:

- Average: `total / (float)n`
- Percent: `(part / (float)whole) * 100`
- Celsius from Fahrenheit: `(fahrenheit - 32) * 5.0 / 9.0`
- Celsius to Fahrenheit: `(celsius * 9.0 / 5.0) + 32`

## 15. Debugging Checklist

- Is every variable initialized?
- Are loop bounds correct?
- Is `i` starting from 0 or 1 as required?
- Is `n` larger than the array capacity?
- Is the array index inside valid bounds?
- Is the denominator zero?
- Is integer division causing an incorrect decimal result?
- Is `\0` preserved in a string operation?
- Is `&` present with `scanf` ordinary variables?
- Is `&` absent when passing an array name?
- Is `break` used when only the first match is needed?
- Were boundary values tested?

## 16. 7-Day Revision Plan

| Day | Revision work |
|---|---|
| 1 | Exercises 1–23: arithmetic, conversion, input/output |
| 2 | Exercises 24–30: conditions and nested decisions |
| 3 | Exercises 31–66: loops, numbers, factorial, Fibonacci, patterns |
| 4 | Exercises 67–70: basic arrays |
| 5 | Exercises 71–85: matrices and array algorithms |
| 6 | Exercises 86–97: C-strings |
| 7 | Exercises 98–102: pointers; repeat weak topics |

## 17. Exam-Oriented Practice Method

For each exercise:

1. Read the problem without seeing the source code.
2. Write an algorithm in 4–6 steps.
3. Trace a sample manually.
4. Implement the solution independently.
5. Test normal, boundary, and invalid inputs.
6. Identify the loop, condition, or data structure responsible for the result.
7. Rewrite the solution without copying it.

Test categories:

- Arrays: `n = 1`, duplicates, sorted, reverse-sorted.
- Strings: empty, uppercase, lowercase, mixed case, palindrome.
- Matrices: `1 × 1`, rectangular, zero elements.
- Numbers: zero, negative values, repeated digits.
- Loops: lower boundary, upper boundary, off-by-one behavior.

## 18. Scope Boundary

This guide covers exercises 1–102 only. It excludes exercise 103 onward, including function exercises and later topics.

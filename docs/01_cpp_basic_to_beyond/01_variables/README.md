# Variables in C++

## What is a Variable?

A **variable** is a name associated with a memory location.

```cpp
int age = 18;
```

* `age` is a variable associated with a memory location where the value `18` is stored.
* The name allows us to avoid dealing with the exact memory address.
* In computing, this association is called **Binding**.

---

## Key Idea of Variables

* Each time a program runs, a variable may be associated with a different memory location.
* A variable is an **abstraction of a memory location**.
* This abstraction allows meaningful naming instead of handling raw memory addresses.
* Variable content can vary (change over time).

---

## Components of a Variable

A variable has:

* **Type** ? Defines what kind of data can be stored (e.g., `int`, `char`, `bool`, `string`)
* **Value** ? The actual data stored in the variable

> A variable must be declared before it is used.

---

## Binding

**Binding** means connecting a name to something in memory.

### Types of Binding

* **Early Binding (Static Binding)** ? Done at compile time (C++)
* **Late Binding (Dynamic Binding)** ? Done at runtime (JavaScript)

---

## Variable Binding vs Polymorphic Binding

### General Meaning of Binding

Binding means mapping a name (identifier) to an entity:

* Memory address
* Data type
* Function implementation

---

### Variable Binding

* Binding a variable name to a memory location.
* Focus: **data storage**

---

### Polymorphic Binding (Function Binding)

* Binding a function call to executable code.
* Focus: **behavior (functions/methods)**

---

## Dynamic Typing vs Polymorphism

### Example (JavaScript)

```javascript
let x = 10;      // bound to number
x = "Hello";     // re-bound to string
```

* This is **Dynamic Typing**, not polymorphism.

---

### Key Difference

* **Dynamic Typing** ? Types belong to values, not variables
* **Polymorphism** ? Behavior changes based on object type

---

## Early vs Late Binding (General Concept)

* **Early Binding**

  * Decided at compile time
  * Faster and safer
  * Example: C++

* **Late Binding**

  * Decided at runtime
  * More flexible
  * Example: JavaScript

---

## RAM and CPU During Execution

* Data moves between CPU and RAM via the **System Bus**, which includes:

  * **Data Bus** ? Transfers actual data
  * **Address Bus** ? Carries memory addresses
  * **Control Bus** ? Sends control signals (read/write)

---

### Memory Structure

* RAM is a **contiguous block of memory cells**
* Each cell stores **1 byte (8 bits)**
* Memory is **byte-addressable**

---

### Memory Address

* Each memory cell has a unique address (e.g., `0x7fff5fbff61a`)
* Represented in hexadecimal (human-readable form of binary)

---

## Declaring and Initializing Variables

### Syntax

```cpp
variable_type variable_name {data};
```

* Semicolon (`;`) terminates the declaration
* C++ is **case-sensitive** (`age` ? `Age`)

---

### Types in C++

* Built-in types: `int`, `char`, `double`, `bool`, etc.
* User-defined types can be created using **classes**

---

## Initialization Methods

### 1. Assignment Initialization (C-style)

```cpp
int date = 21;
```

---

### 2. Constructor Initialization

```cpp
int score(77);
```

---

### 3. C++11 List Initialization (Recommended)

```cpp
int rating{7};
```

---

### Default Initialization

```cpp
int rate{};
```

* Initializes variable with `0`

> Never leave variables uninitialized.

---

## Global Variables

* Declared outside any function
* Automatically initialized to `0`
* Accessible throughout the program

### Scope

* Scope defines visibility
* `{}` defines a block of code

### Problem

* Can be modified from anywhere in the program

---

## Primitive Data Types

* Fundamental types implemented directly by the language
* Stored in **binary (0s and 1s)**
* Size and precision depend on the compiler

---

### Type Sizes

* Measured in **bits**
* More bits ? more unique values

---

### Examples

* `char` ? 1 byte (8 bits), stores a single character (`'A'`)
* `int` ? integers (`short`, `long`, etc.)
* `float` ? decimal values
* `double`
* `bool`

---

### sizeof Operator

```cpp
sizeof(char);
```

* Returns size of a type in bytes
* Works with:

  * Primitive types
  * Arrays
  * Structures

---

## Header Files

* `<climits>` ? Information about integer limits
* `<cfloat>` ? Information about floating-point limits

> `sizeof` gets its information from these headers.

---

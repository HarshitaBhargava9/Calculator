# 🧮 Advanced Calculator in C

A feature-rich command-line calculator written in C that supports basic arithmetic, scientific functions, and logarithmic operations.

---

## 🚀 Features

### 🔢 Basic Operations

* Addition
* Subtraction
* Multiplication
* Division (with zero-division handling)

### 📊 Advanced Operations

* Power (x^y)
* Square Root
* Exponential (e^x)

### 📐 Trigonometric Functions (in Degrees)

* Sine
* Cosine
* Tangent

### 📈 Logarithmic Functions

* Natural Logarithm (ln)
* Logarithm Base 10 (log10)

---

## 🛠️ Tech Stack

* Language: **C**
* Libraries Used:

  * `stdio.h` → Input/Output
  * `math.h` → Mathematical functions

---

## 📦 How to Run

### 1️⃣ Compile the Code

```bash
gcc Calc.c -o calculator -lm
```

### 2️⃣ Run the Program

```bash
./calculator
```

---

## 🧑‍💻 Usage

* Run the program
* Choose an operation from the menu
* Enter the required input(s)
* Get the result instantly

Example:

```
--- Advanced Calculator Menu ---
1. Addition
2. Subtraction
...
Enter your choice: 1
Enter two numbers: 5 10
Result: 15.0000
```

---

## ⚠️ Error Handling

* Division by zero is handled safely
* Logarithmic functions restrict invalid inputs (non-positive numbers)
* Invalid menu choices are managed gracefully

---

## 📌 Future Improvements

* Add support for complex numbers
* GUI version using a framework
* History of calculations
* Expression parsing (like `2+3*5`)

---

## 🤝 Contributing

Feel free to fork this repository and submit pull requests for improvements or new features.

---

## 📄 License

This project is open-source and available under the MIT License.

---

## 💡 Author

**Harshita Bhargava**

---

⭐ If you like this project, don’t forget to give it a star!

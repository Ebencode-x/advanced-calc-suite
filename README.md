# Advanced Calculation Suite v1.0

## Overview
This repository demonstrates a dual-implementation approach to software logic. It features a robust **Logic Engine** built in C and a modern **Graphical User Interface (GUI)** concept built with HTML5 and CSS3. 

The goal of this project is to showcase the transition from low-level systems programming to high-level web interface design.

---

## Part 1: The C Logic Engine (`main.c`)
The core arithmetic logic is implemented in C to ensure maximum performance and precision.

### Key Features:
* **Menu-Driven Interface:** User-friendly command-line interaction.
* **Scientific Operations:** Includes Power (`pow`) and Square Root (`sqrt`) functions from the `<math.h>` library.
* **Robust Error Handling:** Logic implemented to prevent "Division by Zero" and "Negative Square Root" runtime exceptions.
* **Loop Persistence:** The program remains active until the user explicitly calls the exit command.

### How to Compile:
To compile the C source code on a standard GCC compiler, use:
```bash
gcc main.c -o calculator -lm

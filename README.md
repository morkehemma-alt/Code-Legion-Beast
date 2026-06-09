# Code-Legion-Beast
My C++  journey with Code Legion
# ⚡ Code-Legion-Beast

<!-- Badges -->
[![License: MIT](https://shields.io)](https://opensource.org)
[![Language: C++](https://shields.io)](https://isocpp.org)
[![Profile: morkehemma-alt](https://shields.io)](https://github.com/morkehemma-alt)

**A structured, day-by-day technical log documenting my core software engineering progression through Code Legion.** This repository maps out deep-dives into modern object-oriented paradigms, algorithmic problem solving, and multi-language foundations across C++, Java, and Python.

---

## 🖼️ Visual Journey

![Code Legion Banner](https://placeholder.com)

---

## ✨ Key Features

*   📅 **Day-by-Day Progression:** Chronological folders tracking fundamental concepts up to complex operational implementations.
*   🎮 **Interactive Mini-Projects:** Practical logic implementations including automated games and interactive command-line interfaces.
*   🧩 **Polyglot Foundations:** Practical syntax tracking primarily in C++, with supporting logic tracking in Java and Python.
*   ⚙️ **Functional Abstraction:** Clean isolation of business logic using optimized operational routines.

---

## 🛠️ Tech Stack

*   **Primary Language:** C++ (89.6%)
*   **Secondary Languages:** Java (6.4%), Python (4.0%)
*   **Environments:** GCC / G++ Compiler, Java SDK, Python 3 runtime

---

## 🚀 Getting Started

### Prerequisites
To compile and execute the code tracks locally, make sure you have the following installed:
*   **GCC/G++ Compiler** (for C++ binaries)
*   **Java Development Kit (JDK)** >= 17
*   **Python Engine** >= 3.10

### 1. Clone the Repository
```bash
git clone https://github.com
cd Code-Legion-Beast
```

### 2. Compiling and Running a C++ Track (e.g., Day 7 Loops)
Navigate to the desired directory, compile using `g++`, and run the output executable:
```bash
cd Day7-loops
g++ main.cpp -o loops_exec
./loops_exec
```

### 3. Running an Interactive Application (e.g., Rock Paper Scissors)
```bash
cd ../RockPaperScissors
g++ game.cpp -o rps_game
./rps_game
```

---

## 💡 Usage Examples

### Executing Functional Routines
The repository highlights modular architecture by abstracting operational work into dedicated functional systems:

```cpp
#include <iostream>
// Sample operational interface from the functions folder
#include "operational_work.h" 

int main() {
    // Initializing tracking configuration
    int status = executeOperationalTask();
    std::cout << "Task complete with exit sequence: " << status << std::endl;
    return 0;
}
```

---

## 📁 Architecture & Folder Structure

```text
├── Day1/                       # Syntax kick-off & development env configuration
├── Day2/                       # Data evaluation mechanics
├── Day3/                       # Decision trees & logical flows
├── Day4/                       # Complex conditional branches
├── Day5/                       # Core control flows
├── Day6/                       # Initial looping frameworks
├── Day7-loops/                 # Deeper loop implementations (for, while, do-while)
├── NumberGuessingGame/         # Binary search logic & game flow control
├── RockPaperScissors/          # Randomization algorithms & input parsing logic
├── functions(cpp...)/          # C++ structural abstractions for functional processing
├── pythonAssignment/           # Python structural scripts and paradigms
├── variableinitialization-java/# Java variable mechanics and assignments
├── .gitignore                  # Development environment filters
└── README.md                   # System documentation
```

---

## 🗺️ Roadmap

- [x] Establish daily fundamental logic tracks (Days 1–7).
- [x] Implement CLI-based simulation systems (Rock Paper Scissors, Number Guessing).
- [x] Configure functional abstractions for backend execution.
- [ ] Implement advanced pointer management architectures.
- [ ] Build basic object-oriented design patterns within daily logs.

---

## 🤝 Contributing

This is a personal training and progression repository. However, ideas, optimizations, or alternate logic implementations are always welcome!

1. **Fork** the repository.
2. Create your **feature tracking branch** (`git checkout -b feature/optimization`).
3. **Commit** changes (`git commit -m 'Optimize algorithmic sorting layout'`).
4. **Push** to the branch (`git push origin feature/optimization`).
5. Open a **Pull Request**.

---

## 📄 License

Distributed under the MIT License. See the local project headers for validation rules.


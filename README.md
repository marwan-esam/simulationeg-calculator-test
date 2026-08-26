# Simple C++ Calculator

A clean, interactive command-line calculator written in C++. 

## Features
* **Core Operations:** Supports addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).
* **Continuous Execution:** Allows the user to perform multiple calculations in a row without needing to restart the application.
* **Error Handling:** Gracefully catches division-by-zero attempts and provides a clear error message.
* **Input Validation:** Clears the input buffer to prevent infinite loops when the user accidentally enters invalid characters or letters instead of numbers.
* **Easy Exit:** Users can easily close the application by entering `q`.

## Getting Started

### Prerequisites
You will need a C++ compiler installed on your system (such as GCC/g++ or Clang).

### Compilation
Open your terminal, navigate to the folder containing your code, and compile the file using the following command (assuming your file is named `calculator.cpp`):

```bash
g++ calculator.cpp -o calculator
```

### Running the Program
After compiling, run the executable:

* **On Linux / macOS:**
  ```bash
  ./calculator
  ```
* **On Windows:**
  ```cmd
  calculator.exe
  ```

## Usage
1. When prompted, enter an operator (`+`, `-`, `*`, `/`) or type `q` to quit the program.
2. If an operator is selected, you will be prompted to enter two numbers separated by a space.
3. The program will display the complete equation and the result, and then immediately prompt you for your next calculation.

**Example Interaction:**
> Enter an operator (+, -, *, /) or 'q' to quit: +
> Enter two numbers separated by a space: 15.5 4.5
> 15.50 + 4.50 = 20.00
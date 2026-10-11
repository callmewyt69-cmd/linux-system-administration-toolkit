# Linux System Administration Toolkit

## Development Log: Version 1.0

**Project:** Lightweight C++ Linux System Administration Toolkit
**Version:** 1.0
**Status:** Initial menu prototype completed
**Language:** C++
**Development Environment:** Visual Studio Code on Windows using MSYS2 UCRT64 / G++
**Project Type:** Command-line application

---

### 1. Project Overview

Version 1.0 establishes the initial structure of the Linux System Administration Toolkit. The objective of this version was to create a basic command-line menu that accepts user input, validates menu selections, and continues running until the user chooses to exit.

This version focuses on rebuilding fundamental C++ programming skills before introducing system-level functionality.

### 2. Implemented Features

The following features were implemented and tested:

* **Menu display:** Prints the project title, version number, and six menu options.
* **User input:** Uses `std::cin` to receive the user's numerical selection.
* **Conditional statements:** Uses `if`, `else if`, and `else` to distinguish between valid choices, invalid choices, and the exit option.
* **Input validation:** Rejects integer selections outside the supported range of 1–6.
* **Menu loop:** Uses a `do-while` loop to continue accepting selections until the user enters option 6.
* **Exit handling:** Displays an exit message when the user selects option 6.

### 3. C++ Concepts Practiced

| Concept               | Application                              |   |                                        |
| --------------------- | ---------------------------------------- | - | -------------------------------------- |
| `#include <iostream>` | Enables standard input and output        |   |                                        |
| `int main()`          | Defines the program's entry point        |   |                                        |
| `std::cout`           | Displays text in the terminal            |   |                                        |
| `std::cin`            | Reads user input                         |   |                                        |
| `int`                 | Stores the selected menu number          |   |                                        |
| `if / else if / else` | Controls program decisions               |   |                                        |
| `                     |                                          | ` | Checks multiple alternative conditions |
| `do-while`            | Repeats the menu interaction             |   |                                        |
| `==` and `!=`         | Compare values                           |   |                                        |
| Braces `{}`           | Define code blocks                       |   |                                        |
| `return 0`            | Indicates successful program termination |   |                                        |

### 4. Testing and Results

The program was tested with several integer inputs.

| Test input | Expected behavior                      | Result |
| ---------- | -------------------------------------- | ------ |
| `7`        | Display an invalid-choice message      | Passed |
| `2`        | Recognize a valid menu selection       | Passed |
| `3`        | Recognize a valid menu selection       | Passed |
| `4`        | Recognize a valid menu selection       | Passed |
| `5`        | Recognize a valid menu selection       | Passed |
| `6`        | Display the exit message and terminate | Passed |

**Testing summary:** All observed test cases behaved as expected. Non-numeric input has not yet been tested or handled.

### 5. Known Limitations

Version 1.0 is a menu prototype rather than a fully functional system administration utility.

* Options 1–5 do not yet perform actual system administration tasks.
* The menu is displayed only once at program startup.
* The program does not yet use separate functions for individual features.
* Input validation currently covers invalid integer choices but not non-numeric input.
* Linux-specific system information has not been implemented.
* The application has been compiled and tested in a Windows environment, not yet validated as a Linux application.

### 6. Planned Improvements

The next development iteration will focus on:

1. Moving the menu display inside the loop so it reappears after each selection.
2. Improving input handling and removing redundant output.
3. Introducing user-defined functions, beginning with system information.
4. Implementing real system information retrieval.
5. Testing Linux-specific functionality on a Linux distribution.
6. Maintaining a clear development history through Git and GitHub.

### 7. Conclusion

Version 1.0 successfully established the toolkit's basic control flow and user interaction. The project provided practical experience with C++ input/output, conditional statements, loops, and debugging syntax errors.

The initial prototype is complete and provides a foundation for implementing modular functions and real system administration features in subsequent versions.

**Milestone achieved:** First working C++ menu application completed.

# Simple Shell Project

## Overview

This project entails the development of a simple UNIX command interpreter, commonly referred to as a "shell." The shell serves as a crucial interface between the user and the operating system, allowing users to interact with the system by executing commands.

The goal of this project is to implement a basic version of a shell that can interpret and execute commands entered by the user. It should provide functionalities such as displaying a prompt, executing commands, handling errors gracefully, and implementing built-in commands like `exit` and `env`.

## Project Details

The project is part of the SE Foundations curriculum, with an emphasis on reinforcing fundamental programming concepts, including:

- Basics of programming
- Basics of C programming language
- Basics of thinking like an engineer
- Group work and collaboration
- Learning how to learn effectively

### Key Concepts

- **Command Interpretation:** The shell should parse user input and interpret commands accordingly.
- **Execution:** It should execute commands entered by the user, including external commands and built-in commands.
- **Error Handling:** Proper error handling should be implemented to provide informative error messages when necessary.
- **Built-in Commands:** Implementing built-in commands like `exit` and `env`.
- **Group Work:** Collaboration with a team member to accomplish project tasks efficiently.

### Resources

Students are provided with resources to guide them through the project, including references to Unix shell concepts, Thompson shell, Ken Thompson, and essential concepts for coding a shell.

## Requirements

The project has specific requirements and guidelines that students must adhere to, including:

- Use of allowed editors: vi, vim, emacs
- Compilation using gcc on Ubuntu 20.04 LTS with specified options
- Adherence to the Betty style for code formatting
- Implementation of error handling and memory management to prevent memory leaks
- Writing a README.md file providing project description and instructions
- Maintaining an AUTHORS file listing all contributors
- Using system calls judiciously
- Writing clean, readable, and maintainable code with appropriate documentation

## How to Use

1. **Compilation:**
   - Compile the shell using the provided compilation command:
     ```
     gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
     ```

2. **Testing:**
   - Test the shell interactively by running `./hsh` and entering commands.
   - Test the shell non-interactively by piping commands through standard input.

3. **Task Completion:**
   - The project is divided into tasks, each building upon the previous one.
   - Ensure each task is completed satisfactorily before moving on to the next.

## Project Tasks

The project comprises several tasks, each adding new features or improving existing functionality of the shell. These tasks include:

1. **Betty Style Compliance:** Ensure code adherence to the Betty style.
2. **Simple Shell 0.1:** Implement a basic shell that handles simple commands.
3. **Simple Shell 0.2:** Extend the shell to handle command lines with arguments.
4. **Simple Shell 0.3:** Add functionality to handle the PATH and prevent unnecessary fork calls.
5. **Simple Shell 0.4:** Implement the `exit` built-in command to exit the shell.
6. **Simple Shell 1.0:** Implement the `env` built-in command to print the current environment.

## Contributing

Contributions to the project are welcome. If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.

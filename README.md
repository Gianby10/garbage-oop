# Garbage Project - OOP

This is a C++ project created as part of the Object-Oriented Programming (OOP) course.

## Project Structure

The project is organized as follows:

- `src/`: Contains the source code.
  - `app/`: The application logic.
  - `tests/`: Unit tests for the project.
  - `lib/`: The library implementing the core functionality (Garbage classes).
- `premake5.lua`: The build configuration file using Premake5.
- `.gitignore`: Standard Git ignore file to avoid committing unnecessary files.
- `README.md`: This file, explaining how to initialize the project.
- `plan.txt`: The initial project plan outlining the objectives and structure of the project.

## Prerequisites

To build and run the project, make sure you have the following tools installed:

1. **Premake5**: Used to generate build files.

   - [Premake5 Installation](https://premake.github.io/)

2. **C++ Compiler**:

   - Ensure you have a C++17 compatible compiler (e.g., GCC, Clang, MSVC).

## Setting up the Project

1. Clone the repository to your local machine:

   ```bash
   git clone <repository_url>
   cd <project_folder>
   Generate the project files using Premake5:
   ```

2. Run the following command in the root directory of the project:

   ```bash
   premake5 gmake2 # For GNU Make
   premake5 vs2019 # For Visual Studio 2019
   premake5 vs2022 # For Visual Studio 2022
   ```

3. Build the project:

   If using GNU Make:

   ```bash
   make
   ```

   If using Visual Studio, open the generated .sln file and build the project from the IDE.

4. Running the Application
   After building the project, you can run the application:

   Run the garbage application:

   Navigate to the bin/ directory and execute the compiled application.

5. Run the tests:

   To run the tests, follow these steps:

   1. Navigate to the tests folder.

   2. Run the test executable:

      On Linux/macOS:

      ```bash
       ./bin/Debug/GarbageTests
      ```

      On Windows, you can run the .exe file from the bin/ directory.

      The tests will automatically run, and the results will be printed to the console.

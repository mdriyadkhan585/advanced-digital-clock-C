# advanced-digital-clock-C
---
[In Python3](https://github.com/mdriyadkhan585/advanced-digital-clock)

![Clock Logo](logo.svg)

---

# Advanced Digital Clock in C

## Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Prerequisites](#prerequisites)
4. [Installation](#installation)
5. [Usage](#usage)
6. [Code Overview](#code-overview)
7. [How It Works](#how-it-works)
8. [Customization](#customization)
9. [Known Issues](#known-issues)
10. [Contributing](#contributing)
11. [License](#license)

## Introduction
This project is a simple yet advanced digital clock written in the C programming language. The clock displays the current date and time in a user-friendly format, with features such as a 12-hour clock, AM/PM notation, a clean interface, and continuous updates every second. The program is designed to run in a terminal and is suitable for learning purposes, demonstration, or integration into larger projects.

## Features
- **Real-time Date and Time Display**: Continuously shows the current date and time in the format `DD-MM-YYYY | HH:MM:SS AM/PM`.
- **12-Hour Format**: Time is displayed in a 12-hour format with an AM/PM indicator.
- **Clear and User-Friendly Interface**: The clock clears the screen before each update, ensuring the display remains clean and easy to read.
- **Welcome Message**: The program includes a welcome message with instructions on how to exit.
- **Cross-Platform Compatibility**: The program is designed to work on UNIX-like systems (Linux, macOS) and can be adapted for Windows.

## Prerequisites
To compile and run this program, you need:
- A C compiler like `gcc`.
- A terminal or command prompt to execute the program.
- A UNIX-like environment (for Windows users, consider using Cygwin or WSL for better compatibility).

## Installation
### Step 1: Clone the Repository
First, clone this repository to your local machine using `git`:

```bash
git clone https://github.com/mdriyadkhan585/advanced-digital-clock-C
```

### Step 2: Compile the Program
Navigate to the directory containing the `advanced_clock.c` file and compile the program using `gcc`:

```bash
cd advanced-digital-clock-C 
gcc -o advanced_clock advanced_clock.c
```

### Step 3: Run the Program
Once compiled, you can run the program using:

```bash
./advanced_clock
```

## Usage
When you run the program, it will display the current date and time in a formatted manner. The clock will update every second.

### Exiting the Program
To exit the program, press `Ctrl+C` in the terminal.

### Example Output
```
======================================
      Welcome to the Digital Clock    
======================================

Press Ctrl+C to exit the program.

Current Date and Time:
======================================
  Date: 01-09-2024
  Time: 02:23:15 PM
======================================
```

## Code Overview
### Main Components:
1. **`clearScreen()`**: Clears the terminal screen before each update. This ensures that the clock appears in the same position on the screen, creating a clean display.

2. **`printWelcomeMessage()`**: Displays a welcome message and instructions for exiting the program. This is shown at the top of the clock interface.

3. **`displayClock()`**: The core function that retrieves the current date and time, formats it, and prints it to the screen. It also handles the 12-hour format and AM/PM conversion.

4. **`main()`**: The entry point of the program, which calls `displayClock()` to start the clock.

### How It Works
The program works by continuously fetching the current system time using the `time()` function from the `time.h` library. It then converts this time to a human-readable format, considering the user's local timezone. The program then formats the time in a 12-hour clock with an AM/PM indicator. The screen is cleared before each update to maintain a clean display, and the time is printed to the terminal every second.

### Customization
You can customize the clock by modifying the following:
- **Date and Time Format**: Change the formatting in the `printf` statements within `displayClock()` to alter how the date and time are displayed.
- **Colors**: You can add ANSI escape codes to change the text color for the clock, making it more visually appealing.
- **Additional Features**: Consider adding new features like an alarm, a stopwatch, or different time zones.

### Known Issues
- **Screen Clearing**: The `clearScreen()` function uses ANSI escape codes, which are supported on most UNIX-like systems but may not work in all environments, particularly on Windows without special configuration.
- **Time Drift**: Over long periods, slight inaccuracies may accumulate due to the way `sleep(1)` operates. This should not be noticeable for general use but may become apparent if the program runs for extended periods.

## Contributing
Contributions are welcome! If you have suggestions, improvements, or bug fixes, feel free to submit a pull request or open an issue in the repository.

### Steps to Contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](https://github.com/mdriyadkhan585/advanced-digital-clock-C/tree/main?tab=License-1-ov-file) file for more details.

---

# Create_Password

A random password generator tool

## Project Overview

This is a simple C++ application for generating random passwords with various complexity levels. Users can choose:
- Password type (character set to use)
- Password length
- Number of passwords to generate (default is 10)

## Features

- Multiple character sets to choose from
- Custom length password generation
- Generate multiple passwords at once

## Building Instructions

### Requirements

- C++ compiler with C++17 support
- CMake 3.10 or higher

### Build Steps

1. Clone the repository:
```bash
git clone https://github.com/yourusername/Create_Password.git
cd Create_Password
```

2. Create a build directory and run CMake:
```bash
mkdir -p build && cd build
cmake ..
```

3. Build the project:
```bash
cmake --build .
```

## Usage

Run the built program:

```bash
./Create_Password
```

1. Select a password type from the displayed options (enter a number)
2. Enter your desired password length
3. 10 passwords will be generated

## License

[MIT License](LICENSE)

# Nexxus: Simple C/C++ Build System

**Nexxus** is a lightweight, custom build system for C and C++ projects on Linux. It simplifies compiling, linking, and running your source code with minimal setup.

## 📦 Features

- 🔨 `build`: Compiles and links all source files without running the output.
- 🚀 `run`: Compiles, links, and immediately runs the executable.

## 📁 Project Structure

A typical Nexxus project looks like:

project-root/
├── build/            # Contains build system source files (build.c, run.c)
├── src/              # Your project source code (.c/.cpp files)
├── bin/              # Output binaries (optional)
├── .gitignore
└── README.md

## 🚀 Usage

From anywhere inside your project directory, run:

    build <project_name>

- Compiles and links all `.c` or `.cpp` files in `src/`
- Produces an executable named `<project_name>`

    run <project_name>

- Compiles, links, and runs the executable immediately

## 🛠 Setup (Linux)

1. Copy the `build/` folder into your project root.
2. Compile the tools with `gcc`:

    gcc build/build.c -o build/build.exe
    gcc build/run.c -o build/run.exe

3. (Optional) Create a `bin/` directory and add symbolic links for easier usage:

    mkdir -p bin
    ln -s ../build/build.exe bin/build
    ln -s ../build/run.exe bin/run

4. Add `bin/` to your PATH temporarily for the session:

    export PATH="$PWD/bin:$PATH"

   To add permanently, append that line to your `~/.bashrc` or `~/.zshrc`.

## 🧠 How It Works

Both `build` and `run`:

- Automatically find all `.c` or `.cpp` files under `src/`
- Compile and link them into a single executable
- `run` then executes the built binary

## 📄 License

MIT License

## 📬 Contact

Maintained by [kaile777](https://github.com/kaile777)  
Feel free to open issues or feature requests on GitHub.

# C++ For Beginners
C++ files for self-learning the C++ programming language

## Installation
Use git to clone this file to your system.
```bash
git clone https://github.com/mnlsmmdv/CPP.git
```
Or, alternatively, you can click the green "Code" button, and then download the .zip file containing the source code.

## How to use
You can freely use the C++ source files that are provided to help you with learning C++. These files were designed by multiple people and are made specifically for learning purposes.

However, you can't just click on a C++ file and expect it to automatically run and show the C++ file's functionality in it's full glory.
First, we must compile the C++ file. Compiling means converting source code (a readable form of code designed for humans) to binary, also known as machine code (a form of code that is harder for humans to understand, which is designed for computers).
In order to compile our C++ file, we'll need a compiler installed. The most common compilers for compiling C++ are:
- g++
- clang++

Using one of these compilers (or really any other compiler that exists), we can easily compile our source code. The compiler will also notify us if there are any warnings or errors in our source code.

Keep in mind that both of these compilers listed above can also compile C code. They have a seperate compiler for C source files. They are:
- gcc
- clang

### Finally, compiling and executing!
Finally! After we've went through all of that information, we can finally compile our source code. I'll divide this into multiple steps.
Keep in mind that a C++ source file(s) is/are **required**. You should replace **myfile** and **myApp** with your file names, unless you're build an app that uses **myfile** and **myApp*.
1. In case you didn't do it yet in the terminal, move to the directory where your source code file(s) is/are located.
2. If you use g++, run ```g++ myfile.cpp -o myApp```. If you use clang, run ```clang++ myfile.cpp -o myApp``` (the -o argument is optional, it is used to name the output file. by default, it is called a)
3. Nice! If any warnings have shown up, you usually don't want to ignore them. But since you're leaning, you can skip them. If any errors have shown up, inspect your program for any possible bugs, and fix them. Then, return to step 2.
4. Either click on the new executable that was created by the compiler, or execute it through the terminal using its exact file name.

Finally! We've finished compiling our programs. But, imagine if you had multiple C++ source files. Projects always grow into multiple files.
In that case, do the same steps, except step 2 will be modified for you:
- instead of including 1 file, before the ```-o``` argument, add multiple C++ files, using spaces to seperate them
- the above instruction goes for both g++ and clang++
- after compiling, perform step 4 as usual.

## But, where can I use C++?
Great question! C++ is known for it's **fast** speed (depends on the programmer), and is compiled meaning that the program executes faster than a program made in an interpreted language such as Python. It is also closer to hardware, making it easier to work with the hardware itself. C++ is most commonly used in:
- games
- embedded systems
- compilers
- and more!

C++ has many uses, and that is one of the reasons you should learn C++. It is generally not recommended as a first language, but hey, there's nothing stopping you from learning it!

I hope this repository helps you with learning C++. We believe that all information should be accessible easily. That's why this repository was created in the first place.

## Contribution
Contribution is *always* welcome! With your help, we can expand the knowledge accessible in this repository!
Feel free to add more files, or more tips on C++!
Feel free to also open a pull request or issue. We look forward to improving this repository!
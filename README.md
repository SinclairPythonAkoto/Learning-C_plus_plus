# Learning C++ #

I am learning how to write code with **C++** using various online tutorials and *Vim* as my text editor.

### C++ Overview ###
C++ is a general purpose, staticly typed, object oriented programming language that began in 1979 by Danish Computer Scientist *Bjarne Stroustrup*. For several years the language evolved until it’s official release in 1985.

**C++ is essentially an extension of the C programming language.** It actually began as a fork of an early pre-standardized C. And while C is not a strict subset of C++ the two languages are largly compatiable and In many instances C code can be used with little or no modification as C++ code.

Becuase C++ is an extension of C, many of the things you can do in C you can also do in C++. But in addition **C++ gives you all the power and flexibility of object orientation**. So you can use low level system calls, manage memory and deal with pointers. while at the same time working with classes, objects, inheritance and all the features of an object oriented language.

### Setting up ###
I am using a *MacOS* machine so the set up will be a little different from Windows machines.

I checked if my machine had the *C++ compiler* installed by running the following command:
```
gcc -v
```
If you have the complier installed already then you should get some information on your screen.  If you do not have it already installed, then you would need to run the following command ***(for MacOS ONLY!!)***
```
xcode-select --install
```

### Compiling and running your C++ program ###
You can use a number of different text editors to create your C++ programs, some have built in compliers or extensions which you can install.
For me I will be using Vim as my text editor and my terminal to compile and run my C++ programs.

#### Compile C++ program ####
You have successfully created your program in C++ called `demo1.cpp`.  You will need to compile the code in order for your machine to run it.  To do so you will need to run the following in your termninal:

```
g++ demo1.cpp -o demo1
```

or 

```
make demo1
```

***I will use*** `make demo1` ***as I find it easier to remember!***


#### Run C++ program ####
Now that you have your `demo1.cpp` file compiled, you can run the C++ program by entering the folowing in the command line:

```
./demo2
```

### How C++ runs ###
All C++ programs must utilize a compiler who’s job is to compile the C++ code down into machine code readable by the computer. So anytime you want to run a C++ program you have to compile it first.

C++ relies on the user to manage the program’s memory, although there are garbage collectors avaiable for C++.

The tutorials in which I will be learning the basics from [Mike Dane](https://www.mikedane.com/programming-languages/c++/), then move onto learn a more detailed understanding with [freecodecamp](https://www.freecodecamp.org/news/learn-c-with-free-31-hour-course/).



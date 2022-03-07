# Learning C++ #

I am learning how to write code with **C++** using various online tutorials and *Vim* as my text editor.

I am using a *MacOS* maxhine so the set up will be a little different from Windows machines.

### Setting up ###
I checked if my machine had the *C++ compiler* installed by running the following command:
```
gcc -v
```
If you have the complier installed already then you should get some information on your screen.  If you do not have it already installed, then you would need to run the following command ***(for MacOS ONLY!!)***
```
xcode-select --install
```

### Compiling and running your C++ program ###
You can use a number of different text editors to create your C++ programs, some have built in compliers or extensions whihc you can install.
For me I will be using Vim as my text editor and my terminal to compile and run my C++ programs.

#### Compile C++ program ####
You have successfully created your program in C++ called `demo1.cpp`.  You will need to compile the code in order for your machine to run it.  To do so you will need to orun the following in your termninal:

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

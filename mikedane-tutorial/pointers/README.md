# Memory & Pointers in C++ #


I will use the code below to best describe how *memory* and *pointers* work in C++.

```
int age = 35;
double height = 5.11;
string name = "Sinclair";
```


### Memory ###
When we save variables in our program it is stored in the **memory (RAM - Random Access Memeory)** within our computer.  This means that when we create the variables above, it will be *physically stored* into the computer's memory.

Each value that is stored in memory has an unique address which can identfiy the data.  We call this the **memory address**.
So when I want to access the `height` variable, I just have to reference the variable name (`height`) in the code to get the value.  When the computer wants to access the value of the `height` variable, it makes a reference to the physical *memory address*.

In C++ we ca print out the value of the memory address by adding `&` in front of the variable name.  The returned value will be a **hexadecimal**.

```
cout << &age << endl;
```

*A hexadecimal (or hex) is a* **a base 16 system used to simplify how binary is represented***. A hexidecimal can be any of the following 16 didgits:*

```
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

### Pointers ###
In C++ we call the *memory address* a ***pointer***

As you can see from the code above, we can print the out the  pointer of the `age` variable, but we can also create a **pointer variable** in which we can store a variable's pointer *(memory address)*.

When we are storing a pointer variable, it will be from a pre-existing variable, and to distinguish the variable created is a pointer variable we would put a `*p` in front of the chosen variable as convention.

```
int *pAge = &age;
```

*When printing the pointer variable we do not need to include the* `*`.

```
int *pAge = &age;
cout << pAge << endl;
```

#### Dereferencing a pointer ####
We can also grab the value or data within a pointer and convert the hexadecimal into the original data format.  To do this we simply put `*` in front of the poniter variable.  So if we wanted to dereference the `*pAge` variable it would give us back the value of `age`.

```
int age = 35;
int *pAge = &age;

cout << pAge << endl;   // print pointer (memory address)
cout << *pAge << endl;  // print dereferenced pointer
```

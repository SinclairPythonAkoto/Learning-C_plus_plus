# Math with C++ #

#### Integers vs Floats ####
- Integers are often used to store whole numbers that can't be broken up, like the number of minutes in the hour.  they can also be used for counting the number of times something has happened.  *This is good for when using loops*.
- Floats are often used when precision is a factor - like scientific measurements, or in many cases when representing perfectages (0.0 - 1.0).

*When working with numbers in your programs, you want to familiarise yourself with the* ***type*** *of number you are using- whether it's an integer or a float.*  If you fail to do so you can cause aspects of your prgram to not perform as intended, or not getting the precise answers needed in your math calculations.

#### MAth operations ####
Apart from the basic math operations like addition, subtraction, multiplication & division, we have some other useful operations like *modulo*.

The modulus operator is basically a `%` sign you would use when you want to divide two numbers against each other and find the  **remaining result**.

```
cout << 2 * 3 << endl;         // Basic Arithmetic: +, -, /, *
cout << 10 % 3 << endl;        // Modulus Op. : returns remainder of 10/3
cout << 1 + 2 * 3 << endl;     // order of operations
cout << 10 / 3.0 << endl;      // int's and doubles
```

**Note**
*Multiplication and division* are going to come **first** ***before*** *addition and subtraction*.

```
cout << 4 + 5 * 10 << endl;
// output: 54
```
First would be `5 * 10` then `4 +  50`.  You need to remember this when calculating otherwise you can get things very wrong - ***this is part of basic math but still good to know as a reminder!***

If you wanted to do `4 + 5` first you would wrap them in parathesis whcih would force the computer to calculate that first then multiply the  answer by 10 - which would give you 90.

```
cout << (4 + 5) * 10 << endl;
// output: 90
```

We can also **increment** a number by the value of 1 by adding `++` at the end of the varaible *(the variable has to be a float or integer)*.

```
int num = 5;
double dnum = 5.5;

num++;
dnum++;

cout << num << endl;   // 6
cout << dnum << endl;  // 6.5 
```

We can also subtract by the value of 1 by adding `--` at the end of the integer/float variable.

```
int num = 5;
double dnum = 5.5;

num--;
dnum--;

cout << num << endl;   // 4
cout << dnum << endl;  // 4.5
```

Instead of incrementing or subtracting a value by 1, we can specify a value by using the `+=` or `-=` sign.  We can also do the same for the other math operations like multiplication & division.

#### Addition ####

```
int num = 100;
num += 10;

cout << num << endl;   // 110
```

#### Subtraction ####

```
int num = 100;
num -= 10;

cout << num << endl;   // 90
```

#### Multiplication ####

```
int num = 100;
num *= 10;

cout << num << endl;   // 1000
```

#### Division ####

```
int num = 100;
num /= 20;

cout << num << endl;   // 5
```

**Note**
When doing math between an *integer* and a *float*, the result will always be a ***float***

```
cout << 10.7 + 5 << endl;   // 15.7
```

### Using math funtions ###
We can import some math functions into our C++ file by adding `#include <cmath>` at the top of our file.  This allows us to use functions like `pow()` & `sqrt()`.

`pow()`
- The *power of..*
- This essentially takes in 2x arguments and calculates the *first* argument to the power of the *second* arguement.

```
#include <iostream>
#include <cmath>

cout << pow(2, 3)   // 8
```

Here are some more examples of math functions below:

```
#include <iostream>
#include <cmath>

cout << sqrt(36) << endl;     // square root 36 = 6
cout << round(4.3) << endl;   // round to nearest number = 4
cout << ceil(4.3) << endl;    // forcibly round up = 5
cout << floor(4.8) << endl;   // forcibly round down = 4
cout << fmax(3, 10) << endl;  // find max number = 10
cout << fmin(3, 10) << endl;  // find min number = 3
```

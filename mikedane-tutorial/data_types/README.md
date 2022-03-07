# Data Types #

Almost all data can be broken down into *three* categories:

- Text *(string or char)*
- Numbers *(integers or floats)*
- True/False values *(booleans)*

With these three fundamental types of data, we can keep track of almost anything!

*These three distinct types of information are each handled a bit differently in C++.  There will be certain things we can do with numbers that we can't do with strings or text (like division, multiplication etc).  There will be also a whole range of things we can do with bollean values that we cannot do with strings or numbers*

***You always want to be aware of what data types you're using when writing a program that's keeping track of different pieces of information.***

#### Looking at the different data types ####
- `char` - create a variable with a **single character**. Always use `'single qoutations'` when creating *char variables*.
- `string` - variable with a string of characters.  Always use `"double qoutations"` when creating *string variables*.
- `int` - variables that are integers
- `float` - can hold 7 decimal places 
- `double` - can hold 15 decimal places
- `bool` - variables that are **true** or **false**

#### Taking a deeper look into data types ####
- You can assign the type of integer:
  - `short` -> at least 16-bits signed integer
  - `int` -> at least 16-bits signed integer *(but not smaller than short)*
  - `long` -> at least 32-bits signed integer
  - `long long` -> at least 64-bit signed integer
- You can also assign the type of float
  - `float` -> single precision floating point
  - `double` -> double-precision floating point
  - `long double` -> extended-precision floating point

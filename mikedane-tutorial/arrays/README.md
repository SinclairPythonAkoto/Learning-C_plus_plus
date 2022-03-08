# Arrays in C++ #

Arrays in C++ allow you to store large amounts of data in one variable.

*example of an array:*
```
int myArray[] = {2, 16, 10, 86, 10, 12, 4};
```

- If you leave the `[]` blank when creating an array there is no limit to the amount of data you can store!
- You can specify how many items you want in an arary by putting a number inside the square brackets `[]`
```
// maximum of 20 elements
int myArray[20] = {2, 16, 10, 86, 10, 12, 4};

// you can also give a list index an element
myArray[10] = 30;
```

- You can also refer to an exact element by referencing its index number.
```
int myArray[] = {2, 16, 10, 86, 10, 12, 4};
cout << myArray[0] << endl;
// output: 2
```

***Remember, list index ALWAYS start at 0!!***

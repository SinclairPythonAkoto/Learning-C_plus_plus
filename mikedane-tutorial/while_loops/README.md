# While Loops in C++ #

While loops are very similar to if statments - they are comprised of a boolean expression and an action.

```
While something is true:
    perform some action
```

*Let's see how they work!*

```
int index = 1;
while(index <= 5){
    cout << index << endl;
    index++;
}
```

The code above is basically saying, while the `index` variable is **less or equal** to 5, we should increment the value by 1.  The code will repeat itself until the `index` variable has the value of 5.


#### Do while loops ####
A do while loop you execute the code in the loop then check if the boolean epression.  They are not used often but can be very useful when trying to solve a specific problem.

```
index = 1;
do{
    cout << index << endl;
    index++;
}while(index <= 5);
```

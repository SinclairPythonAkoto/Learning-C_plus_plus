# 2D Arrays and Nested Loops #

#### 2D Arrays ####
A 2D arrary is when you have an array and every signle element within that array is another array.
When building a 2D array you must state how many arrays you have in the first square brackets, then how many elements are within each array in the second square brackets.

```
int exampleGrid[2][3] =  {1, 2, 3}, {4, 5, 6} };
```

To access the data within the 2D array, you will need to specify the index position of the row followed by the column.

```
cout << exampleGrid[0][2] << endl;
// output: 3
```

**You have to use list indexing so the first element/list begins with 0.**


#### Nested for loops ####
Nested for loops are for loops are within another for loop. They become very usefull when you need to loop through 2D arrays.

```
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        cout << numberGrid[i][j];    
    }
    cout << endl;
}
```

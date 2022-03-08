# Return Keyword in Functions #

In addittion to giving functions some information, functoions can *return* information back to us.

When creating a function in C++ we have to declare a **return type**.  This tells C++ what type of value/data is to expected to be returned after using the function.  The return type can be any data type you choose - `int`, `float`, `double`, `string`, `boolean` etc.

The nice thing about C++ is that you can store the value that gets returned from the function inside of a variable and use it elsewhere in the code.

*example*
```
int addNumbers(int num1, int num2);

int main()
{
     int sum = addNumbers(4, 60);
     cout << sum << endl;

     return 0;
}

int addNumbers(int num1, int num2){
     return num1 + num2;
}
```

**Note**
When using the `return` key word, if you try to write a command after the return the code will not execute.

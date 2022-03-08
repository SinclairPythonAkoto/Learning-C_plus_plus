# Methods with C++ #

Functions allow us to reuse our code throughout the codebase of our program.

- To create a function we can declare the function *signature* at the top above the `main()` function.  
- We put `void` at the beginning of the function to tell C++ that teh function doesn't return anyhting.
- At the bottom of the `main()` function we then put the function information essentially telling it what to do.

```
void sayHi();

int main()
{
    sayHi();
    return 0;
}

void sayHi(){
    cout << "Hello" << endl;
}
```

You can also pass *parameters* into the function - which can also hold different data types.
```
void sayHi(string name, int age);

int main()
{
    sayHi("Mike", 32);
    sayhi("Sinclair", 35)
    
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << " you are "<< age << endl; 
}
```

**Note**
*You can also write the function instructions at the top, above the* `main()` *function and then call the function inside the* `main()` *function when you want to execute the code.  If you choose to write your function below the* `main` *function you will have to write the function signature at the top.*

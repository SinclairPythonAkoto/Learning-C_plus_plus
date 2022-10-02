#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std::string_literals;

int main() {
    std::cout << "\t\t\tLambda Functions 2" << std::endl;
    std::cout << "Binding / Closure" << std::endl;

    auto add11 = [](int i, int i2){ return i + i2; };
    auto add14 = [](auto i, auto i2){ return i + i2; };
    std::vector<int> myVec{1, 2, 3, 4, 5};
    auto res11 = std::accumulate(myVec.begin(), myVec.end(), 0, add11);  // takes elements from myVec and 0, adds them both in lambda to calculate
    auto res14 = std::accumulate(myVec.begin(), myVec.end(), 0, add14);

    std::cout << res11 << std::endl;    // 15
    std::cout << res14 << std::endl;    // 15

    std::vector<std::string> myVecStr{"Hello"s, " World"s};
    auto st = std::accumulate(myVecStr.begin(), myVecStr.end(), ""s, add14);
    std::cout << st << std::endl;       // Hello World

    std::cout << "\nbinding a variable" << std::endl;

    int num1 = 3, num2 = 5;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    std::vector <int> numVec{3, 2, 7, 14, 23};
    std::for_each(numVec.begin(), numVec.end(), [&num1, num2](int x){
        if (x % num1 == 0)
            std::cout << x << " is divisble by " << num1 << std::endl;
        else
            std::cout << x << " is not divible by " << num1 << std::endl;
            num1 = 7;  // changed the value by reference
    });
    std::cout << "num1 = " << num1 << std::endl;    // 7
    std::cout << "num2 = " << num2 << std::endl;

    return 0;
}

/*
Lambda functions can bind their invocation context.

What does that mean?
    - We can pass in variables from its enclosing scope
    - If the lambda is in the main function, then it will
      have access to all the variables within it.
    - We can use the pass by value, or pass by 
      reference parameter/argument to bind.
    - REMEMBER!! If we use a pass by reference parameter/argument
      then the original variable will be changed corispondingly.
    - An empty square bracket means no binding 

Here is a table of how binding work:

    []                      :   no binding
    [v]                     :   v per copy (copys the variable)
    [&v]                    :   v per reference (uses actual variable)
    [=]                     :   all variables used as a copy
    [&]                     :   all variables used per reference
    [=, &v]                 :   per default per copy; v per reference
    [&, v]                  :   per default per reference; v per copy
    [this]                  :   data and member of the enclosing class per copy
    [l = std::move(lock)]   :   moves lock (C++14)

In the example above you can see that we have used the reference of num1 and a
copy of num2 in the lambda.
    - The reference of num1 has changed the way the function behaves as well as 
      changed the value of num1 in the main function.
*/
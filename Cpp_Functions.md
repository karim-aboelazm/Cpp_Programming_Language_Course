# [1] C++ goto Statement
In C++ programming, the goto statement is used for altering the normal sequence of program execution by transferring control to some other part of the program.
<br>

```cpp
goto label;
... .. ...
... .. ...
... .. ...
label: 
statement;
... .. ...
```
:fire::fire:
* In the syntax above, label is an identifier. When `goto` `label`; is encountered, the control of program jumps to label: and executes the code below it.
<br>

:worried::worried:

Watch out this image for explanation of ` goto statement` 
<br>
<img src='https://cdn.programiz.com/sites/tutorial2program/files/cpp-goto-working.png'/>
<br>

```cpp  
# include <iostream>
using namespace std;

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0)
        {
           // Control of the program move to jump:
            goto jump;
        } 
        sum += num;
    }
    
jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}
```
* You can write any C++ program without the use of goto statement and is generally considered a good idea not to use them.
  
# [2] C++ Functions
A function is a block of code that performs a specific task.
Suppose we need to create a program to create a circle and color it. We can create two functions to solve this problem:

* a function to draw the circle
* a function to color the circle

Dividing a complex problem into smaller chunks makes our program easy to understand and reusable.

There are two types of function:

* Standard Library Functions: Predefined in C++
* User-defined Function: Created by users

In this tutorial, we will focus mostly on user-defined functions.

## A) **C++ User-defined Function**
C++ allows the programmer to define their own function.

A user-defined function groups code to perform a specific task and that group of code is given a name (identifier).

When the function is invoked from any part of the program, it all executes the codes defined in the body of the function.

## B) **C++ Function Declaration**
The syntax to declare a function is:

```cpp
returnType functionName (parameter1, parameter2,...) {
    // function body   
}
```
This is an Example Look :eyes::smile:

```cpp
// function declaration
void greet() {
    cout << "Hello World";
}
```
:fire: :fire:
* the name of the function is greet()
* the return type of the function is void
* the empty parentheses mean it doesn't have any parameters
* the function body is written inside {}
  
* **Note:** We will learn about returnType and parameters later in this tutorial.

:fire::fire::
## C) **Calling a Function**
In the above program, we have declared a function named greet(). To use the greet() function, we need to call it.

Here's how we can call the above greet() function.

```cpp
int main() {
     
    // calling a function   
    greet(); 

}
```

<br>

<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-call.png"/>

## D) **Function Parameters**
As mentioned above, a function can be declared with parameters (arguments). A parameter is a value that is passed when declaring a function.

For example, let us consider the function below:

```cpp
void printNum(int num) {
    cout << num;
}
```
:point_up: Here, the int variable num is the function parameter.

This is an Example Look :eyes: :smile:

```cpp
#include <iostream>
using namespace std;

// display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
     
     int num1 = 5;
     double num2 = 5.5;

    // calling the function
    displayNum(num1, num2);

    return 0;
}
```

* **Note:** The type of the arguments passed while calling the function must match with the corresponding parameters defined in the function declaration.

## E) **Function Prototype**
In C++, the code of function declaration should be before the function call. However, if we want to define a function after the function call, we need to use the function prototype.

For example,

```cpp
// function prototype
void add(int, int);

int main() {
    // calling the function before declaration.
    add(5, 3);
    return 0;
}

// function definition
void add(int a, int b) {
    cout << (a + b);
}
```

## F) **Benefits of Using User-Defined Functions**
* Functions make the code reusable. We can declare them once and use them multiple times.
* Functions make the program easier as each small task is divided into a function.
* Functions increase readability.

## G) **C++ User-defined Function Types**
    1. Function with no argument and no return value
   
   ```cpp
   # include <iostream>
using namespace std;

void prime();

int main()
{
    // No argument is passed to prime()
    prime();
    return 0;
}


// Return type of function is void because value is not returned.
void prime()
{

    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1; 
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        cout << num << " is a prime number.";
    }
}
   ```
In the above program, prime() is called from the main() with no arguments.

prime() takes the positive number from the user and checks whether the number is a prime number or not.

Since, return type of prime() is void, no value is returned from the function.
   

    2. Function with no argument but return value

```cpp
#include <iostream>
using namespace std;

int prime();

int main()
{
    int num, i, flag = 0;

    // No argument is passed to prime()
    num = prime();
    for (i = 2; i <= num/2; ++i)
    {
        if (num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout<<num<<" is not a prime number.";
    }
    else
    {
        cout<<num<<" is a prime number.";
    }
    return 0;
}

// Return type of function is int
int prime()
{
    int n;

    printf("Enter a positive integer to check: ");
    cin >> n;

    return n;
}
```
In the above program, prime() function is called from the main() with no arguments.

prime() takes a positive integer from the user. Since, return type of the function is an int, it returns the inputted number from the user back to the calling main() function.

Then, whether the number is prime or not is checked in the main() itself and printed onto the screen.


    3. Function with argument but no return value

```cpp
#include <iostream>
using namespace std;

void prime(int n);

int main()
{
    int num;
    cout << "Enter a positive integer to check: ";
    cin >> num;
    
    // Argument num is passed to the function prime()
    prime(num);
    return 0;
}

// There is no return value to calling function. Hence, return type of function is void. */
void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << n << " is not a prime number.";
    }
    else {
        cout << n << " is a prime number.";
    }
}
```
In the above program, positive number is first asked from the user which is stored in the variable num.

Then, num is passed to the prime() function where, whether the number is prime or not is checked and printed.

Since, the return type of prime() is a void, no value is returned from the function.

    4. Function with argument and return value
   
   ```cpp
   #include <iostream>
using namespace std;

int prime(int n);

int main()
{
    int num, flag = 0;
    cout << "Enter positive integer to check: ";
    cin >> num;

    // Argument num is passed to check() function
    flag = prime(num);

    if(flag == 1)
        cout << num << " is not a prime number.";
    else
        cout<< num << " is a prime number.";
    return 0;
}

/* This function returns integer value.  */
int prime(int n)
{
    int i;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
            return 1;
    }

    return 0;
}
   ```
In the above program, a positive integer is asked from the user and stored in the variable num.

Then, num is passed to the function prime() where, whether the number is prime or not is checked.

Since, the return type of prime() is an int, 1 or 0 is returned to the main() calling function. If the number is a prime number, 1 is returned. If not, 0 is returned.

Back in the main() function, the returned 1 or 0 is stored in the variable flag, and the corresponding text is printed onto the screen.

> **Q: Which method is better?**
> All four programs above gives the same output and all are technically correct program. There is no hard and fast rule on which method should be chosen. The particular method is chosen depending upon the situation and how you want to solve a problem.

## H) **C++ Function Overloading**
In C++, two functions can have the same name if the number and/or type of arguments passed is different.
These functions having the same name but different arguments are known as overloaded functions. For example:

```cpp
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { }
```
:cry::cry:

:point_up:Here, all 4 functions are overloaded functions.
Notice that the return types of all these 4 functions are not the same. Overloaded functions may or may not have different return types but they must have different arguments. For example,

:x: :x: **Hint**
```cpp
// Error code
int test(int a) { }
double test(int b){ }
```
:point_up: Here, both functions have the same name, the same type, and the same number of arguments. Hence, the compiler will throw an error.

**Types of Overloading in c++**
* Overloading Using Different Types of Parameter

```cpp
// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main() {
    
    // call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}
```
:worried::worried:

Watch Out This image Explain This Example :point_down::point_down:
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-overloading-parameters-type.png"/>

In this program, we overload the absolute() function. Based on the type of parameter passed during the function call, the corresponding function is called.

* Overloading Using Different Number of Parameters

```cpp
#include <iostream>
using namespace std;

// function with 2 parameters
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void display(double var) {
    cout << "Double number: " << var << endl;
}

// function with int type single parameter
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {

    int a = 5;
    double b = 5.5;

    // call function with int type parameter
    display(a);

    // call function with double type parameter
    display(b);

    // call function with 2 parameters
    display(a, b);

    return 0;
}
```
:worried::worried:

Watch out this image Explain This Example :point_down::point_down:
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-overloading-parameters-number.png"/>

Here, the display() function is called three times with different arguments. Depending on the number and type of arguments passed, the corresponding display() function is called.

## J) **C++ Programming Default Arguments (Parameters)**
In C++ programming, we can provide default values for function parameters.
If a function with default arguments is called without passing arguments, then the default parameters are used.

**However,** if arguments are passed while calling the function, the default arguments are ignored.

* Working of default arguments
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-default-parameters.png"/>

:fire::fire:

1. When temp() is called, both the default parameters are used by the function.
2. When temp(6) is called, the first argument becomes 6 while the default value is used for the second parameter
3. When temp(6, -2.3) is called, both the default parameters are overridden, resulting in i = 6 and f = -2.3.
4. When temp(3.4) is passed, the function behaves in an undesired way because the second argument cannot be passed without passing the first argument.
5. Therefore, 3.4 is passed as the first argument. Since the first argument has been defined as int, the value that is actually passed is 3.

:point_down: **This is an Example .**
```cpp
#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 3);

int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display(); 
    
    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#'); 
    
    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count); 

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}
```

1. display() is called without passing any arguments. In this case, display() uses both the default parameters c = '*' and n = 1.
2. display('#') is called with only one argument. In this case, the first becomes '#'. The second default parameter n = 1 is retained.
3. display('#', count) is called with both arguments. In this case, default arguments are not used.

## K) **C++ Storage Class**
Every variable in C++ has two features: type and storage class.

Type specifies the type of data that can be stored in a variable. For example: int, float, char etc.

And, storage class controls two different properties of a variable: lifetime (determines how long a variable can exist) and scope (determines which part of the program can access it).

Depending upon the storage class of a variable, it can be divided into 4 major types:

       Local variable : A variable defined inside a function (defined inside function body between braces)
       is called a local variable or automatic variable.Its scope is only limited to the function where
       it is defined. In simple terms, local variable exists and can be accessed only inside a function.
  ```cpp
  #include <iostream>
using namespace std;

void test();

int main() 
{
    // local variable to main()
    int var = 5;

    test();
    
    // illegal: var1 not declared inside main()
    var1 = 9;
}

void test()
{
    // local variable to test()
    int var1;
    var1 = 6;

    // illegal: var not declared inside test()
    cout << var;
}
  ```
  
    Global variable : If a variable is defined outside all functions, then it is called a global
    variable.The scope of a global variable is the whole program. This means, It can be used and
    changed at any part of the program after its declaration.
```cpp
#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test();

int main()
{
    ++c;

    // Outputs 13
    cout << c <<endl;
    test();

    return 0;
}

void test()
{
    ++c;

    // Outputs 14
    cout << c;
}
```

    Static local variable : A static local variable exists only inside a function where it is declared
    (similar to a local variable) but its lifetime starts when the function is called and ends only when
    the program ends.The main difference between local variable and static variable is that, the value of
    static variable persists the end of the program.

```cpp
#include <iostream>
using namespace std;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    
    test();
    test();

    return 0;
}
```
## L) **C++ Recursion**
A function that calls itself is known as a recursive function. And, this technique is known as recursion.
<br>
Code Shape 

:fire::fire:
```cpp
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```
:worried::worried:

Watch out This is an Explain Image :point_down:
<br>
<img src= "https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-recursion-working.png"/>
<br>

This is an Example in recursion
<br>

```cpp
/ Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
```

<br>

This Is Explain for previous code :point_down:

<br>

<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-recursion-example.png"/>

<br>

1. **Advantages of C++ Recursion**
    * It makes our code shorter and cleaner.
    * Recursion is required in problems concerning data structures and advanced algorithms, such as Graph and Tree Traversal.
  
2. **Disadvantages of C++ Recursion**
    * It takes a lot of stack space compared to an iterative program.
    * It uses more processor time.
    * It can be more difficult to debug compared to an equivalent iterative program.

## M) **C++ Return by Reference**
In C++ Programming, not only can you pass values by reference to a function but you can also return a value by reference.

1. To understand this feature, you should have the knowledge of:
   * Global variables

```cpp
#include <iostream>
using namespace std;

// global variable
int num;

// function declaration
int& test();

int main() {

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 5;

  cout << num;

  return 0;
}

// function definition
// returns the address of num variable
int& test() {
  return num;
}
```

2. Important Things to Remember When Returning by Reference.
* Ordinary function returns value but this function doesn't. Hence, you cannot return a constant from the function.
  
```cpp
int& test() {
    return 2;
}
```

* You cannot return a local variable from this function.

```cpp
int& test() {
    int n = 2; 
    return n; 
}
```

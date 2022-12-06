# **C++ Programming Language Course** :smile:

## The Content Of Today :running:

## [1] Operations
An operator is simply a symbol that is used to perform operations. There can be many types of operations like arithmetic, logical, bitwise etc.

There are following types of operators to perform different types of operations in C++ language

### 1. **Arithmetic Operators ``` + , - , * , / , %  ```. Let's code... :point_down:**
```Cpp
#include <iostream>
using namespace std;
int main(){
    /*
        Arthematic Operators 
        --------------------
        (+) --- > addition
        (-) --- > subtraction
        (*) --- > multiplication
        (/) --- > division
        (%) --- > modulas
        ---------------------
    */
    cout << (5 + 3) << endl; // --> 8
    cout << (5 - 3) << endl; // --> 2
    cout << (5 * 3) << endl; // --> 15
    cout << (5 / 3) << endl; // --> 1.667
    cout << (5 % 3) << endl; // --> 2
    return 0;
}
```

### 2. **Relational Operators ``` < , > , <= , >= , == , != ```. Let's code... :point_down:** 
```Cpp
#include <iostream>
using namespace std;
int main(){
    /*
        Relational Operators : Hint: The result will be 1 for true, 0 for false
        --------------------
        (<) --- > greater than
        (>) --- > less than
        (<=) --- > greater or equal than
        (>=) --- > less or equal than
        (==) --- > equal
        (!=) --- > not equal
        ---------------------
    */
    cout << (5  < 3) << endl; // --> 0
    cout << (5  > 3) << endl; // --> 1
    cout << (5 <= 3) << endl; // --> 0
    cout << (5 >= 3) << endl; // --> 1
    cout << (5 == 3) << endl; // --> 0
    cout << (5 != 3) << endl; // --> 1
    return 0;
}
```

### 3. **Logical Operators ``` && , || , ! ```.  Let's code... :point_down:**  
```Cpp
#include <iostream>
using namespace std;
int main(){
    /*
        Logical Operators: Hint : The Output will be 1 for true and 0 for false
        -----------------
        ( && ) --- > AND
        ( || ) --- > OR
        ( !  ) --- > NOT
        -----------------
    */
    cout << (1 && 0) << endl; // --> 0
    cout << (1 || 0) << endl; // --> 1
    cout << (   ! 0) << endl; // --> 1
    return 0;
}
```

### 4. **Assignment Operator ``` = , += , -= , *= , /* , %= ```.  Let's code... :point_down:**  
```Cpp
#include <iostream>
using namespace std;
int main(){
    /*
        Assignment Operator
        --------------------------
        (  = ) --- > Equal Op 
        ( += ) --- > Plus Equal
        ( -= ) --- > Minus Equal
        ( *= ) --- > Multiply Equal
        ( /= ) --- > Div Equal
        ( %= ) --- > modulas Equal
        ---------------------------
    */
    int x = 10; // --> Equal Op
    cout << x += 5 << endl; // --> Plus Equal mean that -> x = x + 5 -> 15
    cout << x -= 2 << endl; // --> Minus Equal mean that-> x = x - 2 -> 13
    cout << x *= 3 << endl; // --> Multiply Equal mean that-> x = x * 3 -> 39
    cout << x /= 13 << endl; // --> Div Equal mean that-> x = x / 13 -> 3
    cout << x %= 2 << endl; // --> modulas Equal mean that-> x = x % 2 -> 1
    return 0;
}
```

### 5. **Unary operator ``` ++ , -- ```.  Let's code... :point_down:**  
```Cpp
#include <iostream>
using namespace std;
int main(){
    /*
        Unary Operator : Hint: for each Increment and decrement the change will by one only ..
        ------------------------
        ( ++ ) --- > Increment Op
        ( -- ) --- > Decrement Op
        ---------------------------
    */
    int x = 10;
    cout << ++x << endl; // --> x increment by one it will be 11
    cout << --x << endl; // --> x decrement by one it will be 10
    return 0;
}
```


## [2] Conditions statements In cpp :confused: 
**Define:** In C++ programming, if statement is used to test the condition. There are various types of if statements in C++.

**Condition Types**

### 1. **if statement - tests the condition. It is executed if condition is true as shown in image and code <br> <img src="https://www.programiz.com/sites/tutorial2program/files/cpp-if-working.png"/><br> Let's code... :point_down:** 
```Cpp
#include <iostream>
using namespace std;
int main(){
    int number = 8;
    // Check number if it is even
    if (number % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    return 0;
}
```

### 2. **if-else statement - It executes if block if condition is true otherwise else block is executed as shown in image and code <br> <img src="https://www.programiz.com/sites/tutorial2program/files/cpp-if-else-working.png"/><br> Let's code... :point_down:** 
```Cpp
#include <iostream>
using namespace std;
int main(){
    int number = 8;
    // Check number if it is even 
    if (number % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    // Check number if it is not even
    else
    {
        cout << "Odd Number" << endl;
    }
    return 0;
}
```


### 3. **if-else-if ladder - statement executes one condition from multiple if/else if statements. as shown in image and code <br> <img src="https://www.programiz.com/sites/tutorial2program/files/cpp-if-else-if-else-working.png"/><br> Let's code... :point_down:** 
```Cpp
#include <iostream>
using namespace std;

int main() {

    int time = 1;
    // check time is less than 10 am
    if (time < 10) 
    {
        cout<<"Good morning" <<endl;
    // check time is less than 8 pm
    } else if (time < 20) 
    {
        cout<<"Good day"<<endl;
    // check time is greater than 8 pm
    } else 
    {
        cout<<"Good evening"<<endl;
    }
    return 0;
}
```

### 4. **nested if statement - that mean thare are if statements based on condition. Let's code... :point_down:** 
```Cpp
#include <iostream>
using namespace std;

int main() {

    int num = 1;
    // check that number is not equal 0
    if (num != 0){
        // check that number is positive 
        if(num > 0)
        {
           cout << "Positive Number" << endl;
        }
        // check that number is not positive
        else
        {
            cout << "Negative Number" << endl;
        }  
    }
    else{
        cout << "This Number Equal 0" << endl;
    }
    return 0;
}
```


## [3] Switch statements in cpp :confused:
**The C++ switch statement executes one statement from multiple conditions. It is like if-else-if ladder statement in C++. as shown in image and code <br> <img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-switch-flowchart.png"/><br>**
```Cpp
#include <iostream>
using namespace std;
// simple calculator 
int main() {
    char oper;
    float num1, num2;
    cout << "Enter first num :"; 
    cin >> num1 ;
    cout << endl;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << endl;

    cout << "Enter second num :";
    cin>> num2 ; 
    cout << endl;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
```

## [4] Loops statements in cpp :confused:
**In computer programming, loops are used to repeat a block of code**
**There are 3 types of loops in C++.**
* for loop. :point_right: In computer programming, loops are used to repeat a block of code.
* while loop. :point_right: In computer programming, loops are used to repeat a block of code.
* do...while loop. :point_right: In computer programming, loops are used to repeat a block of code.
  
### 1. C++ for loop 
The syntax of for-loop is:
```Cpp
for (initialization; condition; update) {
    // body of-loop 
}
```
:fire::fire:
* initialization - initializes variables and is executed only once
* condition - if true, the body of for loop is executed
* if false, the for loop is terminated
* update - updates the value of initialized variables and again checks the condition
  
:worried::worried:

Watch out this image for explanation of ` for statement `
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-for-loop-flowchart.png"/>

```cpp
#include <iostream>

using namespace std;

int main() {
    // display numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) 
    {
        cout << i << " ";
    }
    return 0;
}
```
**Hint :** thier is another type of `for statement` called ranged for loop.
In C++, a new range-based for loop was introduced to work with collections such as arrays and vectors.
```cpp
for (variable : collection) {
    // body of loop
}
```
:point_right: Here, `for` every value in the collection, the for loop is executed and the value is assigned to the variable.
```cpp
#include <iostream>

using namespace std;

int main() {
    // display each number in array 
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }
  
    return 0;
}
```

### 2. C++ while loop
The syntax of the while loop is:
```cpp
while (condition) {
    // body of the loop
}
```
:fire::fire:
* A while loop evaluates the condition
* If the condition evaluates to true, the code inside * the while loop is executed.
* The condition is evaluated again.
* This process continues until the condition is false.
* When the condition evaluates to false, the loop terminates.

:worried::worried:

Watch out this image for explanation of `while statement`
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-while-loop-flowchart.png"/>
<br>

```cpp 
#include <iostream>

using namespace std;

int main() {
    int i = 1; 

    // while loop from 1 to 5
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    
    return 0;
}
```

### [3] C++ do...while Loop
The do...while loop is a variant of the while loop with one important difference: the body of do...while loop is executed once before the condition is checked.

```cpp
do {
   // body of loop;
}
while (condition);
```

:fire::fire:
<br>
* The body of the loop is executed at first. Then the condition is evaluated.
* If the condition evaluates to true, the body of the loop inside the do statement is executed again.
* The condition is evaluated once again.
* If the condition evaluates to true, the body of the loop inside the do statement is executed again.
* This process continues until the condition evaluates to false. Then the loop stops.
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-do-while-loop-flowchart.png"/>
<br>

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}
```
### [4] C++ break Statement
In C++, the break statement terminates the loop when it is encountered.
```cpp
break;
```
:fire: :fire:
<br>
<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-break-statement.png"/>
<br>

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // break condition     
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }

return 0;
}
```
* **Note:** The break statement is usually used with decision-making statements.

### [4] C++ continue Statement
In computer programming, the continue statement is used to skip the current iteration of the loop and the control of the program goes to the next iteration.
```cpp
continue;
```
:fire::fire:
<br>
<img src="https://www.programiz.com/sites/tutorial2program/files/cpp-continue-statement_1.png"/>
<br>

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}
```


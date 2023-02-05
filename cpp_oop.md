<h1 style="text-align: center;width:100%;margin:0 auto;">Engineer Karim Mohammed Aboelazm</h1>


<img src="https://c.neevacdn.net/image/fetch/s--9pC9fetR--/https%3A//vectorified.com/images/code-icon-5.png?savepath=code-icon-5.png" style="width:100%"/>

# Cpp Object Oriented Programming Guide (OOP)

### **[1] Class** 
A class is a blueprint for creating objects (a particular data structure), providing initial values for state (member variables or attributes), and implementations of behavior (member functions or methods).

Example :point_down:

``` Cpp
class Person {
  public:
    string name;
    int age;

    void say_hello() {
      cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};
```

### **[2] Object**
An object is an instance of a class. Objects have member variables and access to member functions.

Example :point_down:

``` Cpp
Person john;
john.name = "John Doe";
john.age = 30;
```

### **[3] Member Variables (Attributes)**
Member variables hold data associated with an object. They are also known as instance variables or attributes.

Example :point_down:

``` Cpp
string name;
int age;
```

### **[4] Member Functions (Methods)**
Member functions define the behavior of an object. They operate on the data of an object and can access its member variables.

Example :point_down:

``` Cpp
void say_hello() {
  cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}
```

### **[5] Constructor**
A constructor is a special member function of a class that is executed whenever an object of its type is created. It is used to initialize the member variables of the new object.

Example :point_down:

``` Cpp
class Person {
  public:
    string name;
    int age;
  
    Person(string name, int age) : name(name), age(age) {}

    void say_hello() {
      cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
  Person john("John Doe", 30);
  john.say_hello();
  
  return 0;
}
```

### **[6] Access Modifiers**
Access modifiers are keywords used to specify the accessibility of class members. `public` members can be accessed from outside the class, while `private` members can only be accessed within the class.

Example :point_down:

``` Cpp
class Person {
  public:
    string name;
    int age;

    void say_hello() {
      cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};
```

### **[7] Inheritance**
Inheritance is a mechanism that allows a new class to inherit the properties and behaviors of an existing class. The new class is called a derived class, and the existing class is the base class. Inheritance provides a way to reuse existing code and extend or modify it as needed.

Example :point_down:

``` Cpp
class Animal {
  public:
    string name;
  
    Animal(string name) : name(name) {}

    virtual void make_sound() {
      cout << name << " makes a sound." << endl;
    }
};

class Dog : public Animal {
  public:
    Dog(string name) : Animal(name) {}

    void make_sound() override {
      cout << name << " barks." << endl;
    }
};

int main() {
  Dog fido("Fido");
  fido.make_sound();
  
  return 0;
}
```

### **[8] Polymorphism**
Polymorphism is the ability of objects of different classes to be treated as objects of the same class. This allows for more flexible and generic programming. In C++, polymorphism can be achieved through inheritance and virtual functions.

Example :point_down:

``` Cpp
class Animal {
  public:
    string name;
  
    Animal(string name) : name(name) {}

    virtual void make_sound() {
      cout << name << " makes a sound." << endl;
    }
};

class Dog : public Animal {
  public:
    Dog(string name) : Animal(name) {}

    void make_sound() override {
      cout << name << " barks." << endl;
    }
};

class Cat : public Animal {
  public:
    Cat(string name) : Animal(name) {}

    void make_sound() override {
      cout << name << " meows." << endl;
    }
};

int main() {
  Animal *animals[2];
  animals[0] = new Dog("Fido");
  animals[1] = new Cat("Fluffy");
  
  for (int i = 0; i < 2; i++) {
    animals[i]->make_sound();
  }
  
  return 0;
};
```

### **[9] Abstraction**
Abstraction is the process of hiding the implementation details and exposing only the essential features of an object. In C++, this can be achieved through the use of abstract classes and pure virtual functions. An abstract class is a class that cannot be instantiated on its own and must be derived into a concrete class that provides an implementation for its virtual functions.

Example :point_down:

``` Cpp
class Shape {
  public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
  public:
    double width;
    double height;
  
    Rectangle(double width, double height) : width(width), height(height) {}

    double area() override {
      return width * height;
    }
};

class Circle : public Shape {
  public:
    double radius;
  
    Circle(double radius) : radius(radius) {}

    double area() override {
      return 3.14 * radius * radius;
    }
};

int main() {
  Shape *shapes[2];
  shapes[0] = new Rectangle(10, 20);
  shapes[1] = new Circle(5);
  
  for (int i = 0; i < 2; i++) {
    cout << "Area: " << shapes[i]->area() << endl;
  }
  
  return 0;
}
```

### **[10] Encapsulation**
Encapsulation is the practice of hiding the implementation details of an object and exposing a public interface to interact with the object. This allows for greater control over the object's behavior and helps to prevent unintended consequences. In C++, encapsulation can be achieved by making data members private and providing public accessor and mutator functions.

Example :point_down:

``` Cpp
class BankAccount {
  private:
    double balance;
  
  public:
    BankAccount(double balance) : balance(balance) {}

    double get_balance() {
      return balance;
    }

    void deposit(double amount) {
      balance += amount;
    }

    void withdraw(double amount) {
      balance -= amount;
    }
};

int main() {
  BankAccount account(100);
  account.deposit(50);
  account.withdraw(25);
  
  cout << "Balance: " << account.get_balance() << endl;
  
  return 0;
}
```

### **[11] Polymorphism**
Polymorphism is the ability of an object to take on many forms. In C++, polymorphism is achieved through the use of inheritance and virtual functions. When a derived class overrides a virtual function in the base class, objects of the derived class can be treated as objects of the base class and will call the derived class's implementation of the virtual function.

Example :point_down:

``` Cpp
class Animal {
  public:
    virtual void make_sound() = 0;
};

class Dog : public Animal {
  public:
    void make_sound() override {
      cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
  public:
    void make_sound() override {
      cout << "Meow!" << endl;
    }
};

int main() {
  Animal *animals[2];
  animals[0] = new Dog();
  animals[1] = new Cat();
  
  for (int i = 0; i < 2; i++) {
    animals[i]->make_sound();
  }
  
  return 0;
}
```
### **[12] Dynamic binding**
Dynamic binding is the process of determining the correct implementation of a virtual function at runtime, rather than at compile-time. This allows objects to be treated as objects of their base class, and the correct implementation of the virtual function to be called based on the actual type of the object.

Example :point_down:

``` Cpp
class Shape {
  public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
  public:
    double width;
    double height;
  
    Rectangle(double width, double height) : width(width), height(height) {}

    double area() override {
      return width * height;
    }
};

class Circle : public Shape {
  public:
    double radius;
  
    Circle(double radius) : radius(radius) {}

    double area() override {
      return 3.14 * radius * radius;
    }
};

int main() {
  Shape *shape = new Circle(5);
  cout << "Area: " << shape->area() << endl;
  
  shape = new Rectangle(10, 20);
  cout << "Area: " << shape->area() << endl;
  
  return 0;
}
```

### **[13] Exception handling**
Exception handling is a mechanism for handling errors and unexpected situations in a program. In C++, exceptions are thrown using the `throw` keyword, and can be caught and handled using a `try-catch` block.

Example :point_down:

``` Cpp
int divide(int a, int b) {
  if (b == 0) {
    throw invalid_argument("division by zero");
  }
  
  return a / b;
}

int main() {
  try {
    int result = divide(10, 0);
    cout << "Result: " << result << endl;
  } catch (const exception &e) {
    cerr << "Error: " << e.what() << endl;
  }
  
  return 0;
}
```

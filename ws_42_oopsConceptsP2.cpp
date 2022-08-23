// Encapsulation : Wrapping up Data Member & Function   eg. Class
// Fully Encapsulated Class -> All members are private
// It is Information Hiding & Abstraction is Implementation Hiding

// #include <iostream>
// using namespace std;

// class Student {
//     private:
//         string name;
//         int age;
//         int height;

//     public:
//         int getAge() {
//             return this->age;
//         }
// };

// int main() {

//     Student first;

//     cout<<"All Well"<<endl;

//     return 0;
// }





// Inheritance : 
// Protected -> Similar to Private, Accessible inside own class & child / derived class
// Type -> Single, Multi-Level, Multiple, Hybrid, Heirarchical

// #include <iostream>
// using namespace std;

// class Human {
//     public:
//         int height;
//         int weight;
//         int age;

//         int getAge() {
//             return this->age;
//         }
//         void setWright(int w) {
//             this->weight = w;
//         }
// };

// class Male: public Human {
//     public:
//         string color;
//         void sleep() {
//             cout<<"Male Sleeping"<<endl;
//         }
// };

// int main() {

//     Male obj1;
//     cout<<obj1.age<<endl;
//     cout<<obj1.weight<<endl;
//     cout<<obj1.height<<endl;

//     cout<<obj1.color<<endl;

//     return 0;
// }



//-----Single Inheritance-----
// #include <iostream>
// using namespace std;

// class Animal {
//     public: 
//         int age;
//         int weight;

//         void speak() {
//             cout<<"Speaking..."<<endl;
//         }
// };

// class Dog: public Animal {

// };

// int main() {

//     Dog d;
//     d.speak();

//     return 0;
// }



//-----Multi-Level Inheritance-----
// #include <iostream>
// using namespace std;

// class Animal {
//     public: 
//         int age;
//         int weight;

//         void speak() {
//             cout<<"Speaking..."<<endl;
//         }
// };

// class Dog: public Animal {

// };

// class GermanShepherd: public Dog {

// };

// int main() {

//     GermanShepherd g;
//     g.speak();

//     return 0;
// }



//-----Multiple Inheritance-----
// #include <iostream>
// using namespace std;

// class Animal {
//     public: 
//         int age;
//         int weight;

//         void bark() {
//             cout<<"Barking..."<<endl;
//         }
// };

// class Human {
//     public:
//         string color;

//         void speak() {
//             cout<<"Speaking..."<<endl;
//         }
// };

// class Hybrid: public Animal, public Human {

// };

// int main() {

//     Hybrid h;
//     h.bark();
//     h.speak();

//     return 0;
// }



//-----Heirarchical Inheritance-----
// #include <iostream>
// using namespace std;

// class A {
//     public:
//         void func1() {
//             cout<<"Inside Function 1"<<endl;
//         }
// };

// class B: public A {
//     public:
//         void func2() {
//             cout<<"Inside Function 2"<<endl;
//         }
// };

// class C: public A {
//     public:
//         void func3() {
//             cout<<"Inside Function 3"<<endl;
//         }
// };

// int main() {

//     A obj1;
//     obj1.func1();

//     B obj2;
//     obj2.func1();
//     obj2.func2();

//     C obj3;
//     obj3.func1();
//     // obj3.func2();   // Error
//     obj3.func3();

//     return 0;
// }



// Hybrid Inheritance -> Combination of different types of inheritance

// Inheritance Ambiguity -> if dervied class dervied from 2 class having a func with same func name, so when calling func using obj of derived one which should call,   resolve using scope resolution operator
// #include <iostream>
// using namespace std;

// class A {
//     public: 
//         void func() {
//             cout<<"I am A"<<endl;
//         }
// };

// class B {
//     public:
//         void func() {
//             cout<<"I am B"<<endl;
//         }
// };

// class C: public A, public B {

// };

// int main() {

//     C obj;
//     // obj.func();      // Error

//     obj.A::func();
//     obj.B::func();

//     return 0;
// }





// Polymorphism -> Exsisting in multiple form
// Type -> Compile-Time & Run-Time

// Compile-Time Polymorphism (Static Polymorphism)
// Type -> Function Overloading & Operator Overloading

//-----Function Overloading-----
// #include <iostream>
// using namespace std;

// class A {
//     public: 
//         void sayHello() {
//             cout<<"Marten Hunter"<<endl;
//         }

//         void sayHello(string name) {
//             cout<<"Marten Hunter"<<name<<endl;
//         }

//         // int sayHello(string name) {     // cannot overload func distinguished by return type alone
//         //     cout<<"Marten Hunter"<<name<<endl;
//         //     return 1;
//         // }
// };

// int main() {

//     A obj;
//     obj.sayHello();

//     return 0;
// }



//-----Operator Overloading-----
// #include <iostream>
// using namespace std;

// class A {
//     public: 
//         int a;
//         int b;

//         int add() {
//             return a+b;
//         }

//         void operator+ (A &obj) {
//             int value1 = this->a;
//             int value2 = obj.a;
//             cout<<"Output -> "<<value2 - value1<<endl;
//         } 

//         void operator() () {
//             cout<<"I am Bracket"<<endl;
//         }
// };

// int main() {

//     A obj;
//     obj.a = 5;
//     obj.b = 15;
//     cout<<obj.add()<<endl;

//     A obj1, obj2;

//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
//     obj1();

//     return 0;
// }



// Run-Time Polymorphism (Dynamic Polymorphism) -> not possible w/o inheritance, 
// Method Overriding ->
// Rules : method name in child & parent must be same, parameters passed must also be same, possible only via inheritance

#include <iostream>
using namespace std;

class Animal {
    public:
        void speak() {
            cout<<"Speaking..."<<endl;
        }
};

class Dog: public Animal {
    public:
        void speak() {
            cout<<"Barking..."<<endl;
        }
};

int main() {

    Dog obj;
    obj.speak();

    return 0;
}





// Abstraction -> Implementation Hiding (Essential info show but hide behind the scene)
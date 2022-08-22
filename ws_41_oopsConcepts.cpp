#include <iostream>
// #include "ws_42_hero.cpp";      // if we created class on another file 
#include <string.h>
using namespace std;

class Hero {

    // as we write class a default constructor made as same name as of class
    // by default private access modifier
    // Private members can only be accessed inside the class
    // Public one can be access outside the class
    // Properties
    private:    
    int health; 
    
    public:
    char *name;      // char name[100]; -> bad practice
    char level;
    // char level;
    static int timeToComplete;      // Static Member

    Hero () {       // ye constructor banante hi default wala ki existance khtm ho jati hai
        cout<<"Default Constructor Called"<<endl;
        name = new char[100];
    }

    // Parameterised Constructor
    Hero (int health) {
        // health = health;        // yaha dono health vo health hai jiska scope sabse naxdeek hai yani jo func me as argument aaya hai,   but hamara motive tha ki class wale health ke andar argument wale health ki value aa jae
        this -> health = health;
        // this keyword -> jo bhi hamara current obj hai uska add this pointer ke andar store hoga, current obj means jisne fuc call kiya hai
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    // Copy Constructor:    yaha pass by value krenge to fass jaenge isiliye pass by reference
    Hero (Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];     // Deep Copy -> yaha pr ek naya array bn jata hai jo alocate hota hai copy me
        // change in hero1 not reflect/affect hero2 value
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print() {
        // cout<<level<<endl;
        cout<<endl;
        cout<<"Name -> "<<this->name<<endl;
        cout<<"Health -> "<<this->health<<endl;
        cout<<"Level -> "<<this->level<<endl;
    }


    // void print () {
    //     cout<<health<<endl;
    //     cout<<level<<endl;
    // }

    // getter & setter to set & access private members outside the class
    // getter -> fetch/read  &  setter -> condition
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName (char name[]) {
        strcpy(this->name, name);
    }

    // Static Function
    static int random() {
        // return this->health;     // error
        // return health;      // error
        return timeToComplete;      
    }

    // Destructor -> hr obj ke liye ek hi baar call hota hai jb uske destroy hone ka time aata hai
    ~Hero() {
        cout<<"Destructor Called"<<endl;
    }

};

int Hero::timeToComplete = 5;       // initialisation of static data member,    :: -> scope resolution operator

int main() {

    // Static Function -> obj create ki need nhi seedha class name ki help se call kr lo,   inke pass "this" keyword nhi hota kyuki this jo hai vo pointer to current obj hai aur yaha to koi obj hi nhi hai,   can only access static data members
    cout<<"Static Function -> "<<Hero::random()<<endl;





    /*
    // Static Keyword -> ek esa data member create krta hai jo belong krta hai class se, means isko access krne ke liye obj banane ki need nhi hoti
    cout<<"Time to Complete -> "<<Hero::timeToComplete<<endl;

    // ese bhi static wala access kiya ja sakta hai but ye recommended nhi hota kyuki ye member obj se nhi class se belong krta hai
    Hero a;
    cout<<"Time to Complete -> "<<a.timeToComplete<<endl;
    */



    /*
    // const keyword -> obj creation, functions         &   initialisation list

    // Static -> inke liye destructor automatically call ho jata hai
    Hero a;     // jese hi iska scope khtm hone wala hoga default destructor called ho jaega, ye likhte hi default constructor & destructor bn jata hai

    // Dynamic -> iske liye manually call krna pdta hai
    Hero *b = new Hero();
    delete b;       // ab is dynamic wale ke liye destructor call hoga
    */



    /*
    Hero hero1;

    hero1.setHealth(23);
    hero1.setLevel('C');
    char name[7] = "Marten";
    hero1.setName(name);

    hero1.print();

    // use default copy constructor -> do shallow copy
    // shallow copy -> same memory ko 2 name se access kr rahe hai, obj copy me same mem loc ko 2 name de dete hai
    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;      // same work as above line

    hero1.name[0] = 'R';        // change occur in hero1 name
    hero1.print();

    hero2.print();              // but hero1 name change also reflect in hero2 which is a copy of hero1

    // copy assignment operator
    Hero a(10, 'C');
    Hero b(20, 'B');

    // use if obj already created & then we want to copy it's value
    a = b;      // a.health = b.health;     a.level = b.level;

    hero1 = hero2;
    hero2.print();
    */





    /*
    Hero astro(75, 'B');

    // Copy Constructor
    Hero physics(astro);        // means now physics.health = astro.health & physics.level = astro.level
    */



    /*
    // obj created statically
    Hero speedy;        // as obj created -> constructor called

    // dynamically
    Hero *h = new Hero();
    */



    /*
    // static allocation
    Hero a;

    a.setHealth(80);
    a.setLevel('B');

    cout<<"Level -> "<<a.level<<endl;
    cout<<"Health -> "<<a.getHealth()<<endl;

    // dynamically
    Hero *b = new Hero;

    b->setHealth(70);
    b->setLevel('A');

    cout<<"Level -> "<<(*b).level<<endl;
    cout<<"Health -> "<<(*b).getHealth()<<endl;

    cout<<"Level -> "<<b->level<<endl;
    cout<<"Health -> "<<b->getHealth()<<endl;
    */



    /*
    // creation of object
    Hero spidy;

    // Value set
    // spidy.health = 70;
    spidy.level = 'A';

    // setter -> to set value
    spidy.setHealth(80);

    // cout<<"Health -> "<<spidy.health<<endl;
    cout<<"Level -> "<<spidy.level<<endl;

    // getter -> to get value
    cout<<"Level -> "<<spidy.getHealth()<<endl;

    // cout<<"Size -> "<<sizeof(spidy)<<endl;     // 4 (when only one int type variable in class)      1 (when class is empty)     8 (when created int & char var in class [greedy alignment, padding])
    */


    return 0;
}
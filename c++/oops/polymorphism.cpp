#include <bits/stdc++.h>
using namespace::std;

class Animal{
    public:
    int a;

    Animal() {
        cout<<"in animal constructor"<<endl;
    }
    virtual void eat() {
        cout<<"eating";
    }
};

class cat:public Animal{
    public:
    cat() {
        cout<<"in cat constructor"<<endl;
    }
    //function overriden
    void eat() {
        cout<<"licking";
    }
};

int main() {
    // Animal* a = new Animal();
    // a->eat();

    // cat* a = new cat();
    // a->eat();

    //upcasting
    Animal *a = new cat();//if the object is inherited from some other class then constuctor of that class will also be executed
    a->eat();
    cout<<endl;
    a->Animal::eat();
    cout<<endl;

    //Downcasting 
    cat *b =(cat *) new Animal();
    b->eat();
    return 0;
}